#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_UTILS_ISASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x1B4D2200)
#define IFIX_CORE_UTILS_TRYADAPTERTODELEGATE_OFFSET UNITYSDK_OFFSET(0x1B4D2700)
#define IFIX_CORE_UTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4D2B90)

namespace IFix::Core
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 10069;

	class Utils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_delegateAdptCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Utils_TypeDefinitionIndex)->GetStaticField(0x680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_UTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsAssignable(::System::Reflection::MethodInfo* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_UTILS_ISASSIGNABLE_OFFSET))(a1, a2);
		}

		static ::System::Delegate* TryAdapterToDelegate(::System::Object* a1, ::System::Type* a2, ::System::String* a3)
		{
			return ((::System::Delegate*(*)(::System::Object*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + IFIX_CORE_UTILS_TRYADAPTERTODELEGATE_OFFSET))(a1, a2, a3);
		}
	};
}
