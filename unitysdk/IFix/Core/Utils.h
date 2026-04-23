#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_UTILS_ISASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x1714DE80)
#define IFIX_CORE_UTILS_TRYADAPTERTODELEGATE_OFFSET UNITYSDK_OFFSET(0x1714E050)
#define IFIX_CORE_UTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1714E3D0)

namespace IFix::Core
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 9948;

	class Utils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_delegateAdptCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Utils_TypeDefinitionIndex)->GetStaticField(0xB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_UTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsAssignable(::System::Reflection::MethodInfo* delegateMethod, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_UTILS_ISASSIGNABLE_OFFSET))(delegateMethod, method);
		}

		static ::System::Delegate* TryAdapterToDelegate(::System::Object* obj, ::System::Type* delegateType, ::System::String* perfix)
		{
			return ((::System::Delegate*(*)(::System::Object*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + IFIX_CORE_UTILS_TRYADAPTERTODELEGATE_OFFSET))(obj, delegateType, perfix);
		}
	};
}
