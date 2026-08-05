#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace MoleMole::Utils { class ITypeErasedCompletionSource; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE_GETCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x11A2AD00)
#define MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A2AF30)
#define MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11A2AE70)
#define MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A2AD80)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int TaskBasedEventTypeAttribute_TypeDefinitionIndex = 74077;

	class TaskBasedEventTypeAttribute : public ::System::Attribute
	{
	public:
		static ::MoleMole::Utils::TaskBasedEventTypeAttribute** StaticGet_Default()
		{
			return (::MoleMole::Utils::TaskBasedEventTypeAttribute**)Il2CppClass::FromTypeDefinitionIndex(TaskBasedEventTypeAttribute_TypeDefinitionIndex)->GetStaticField(0x42F80);
		}
		::System::Func_1<::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*>* _constructFuncGenerator; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* payloadType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE__CTOR_1_OFFSET))(this, payloadType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>* GetConstructor()
		{
			return ((::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE_GETCONSTRUCTOR_OFFSET))(this);
		}
	};
}
