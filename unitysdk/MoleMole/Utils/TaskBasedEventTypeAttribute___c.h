#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { class ITypeErasedCompletionSource; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162F58A0)
#define MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162F58E0)
#define MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x162F58F0)
#define MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE___C___CTOR_B__3_1_OFFSET UNITYSDK_OFFSET(0x162F59C0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int TaskBasedEventTypeAttribute___c_TypeDefinitionIndex = 74078;

	class TaskBasedEventTypeAttribute___c : public ::System::Object
	{
	public:
		static ::MoleMole::Utils::TaskBasedEventTypeAttribute___c** StaticGet___9()
		{
			return (::MoleMole::Utils::TaskBasedEventTypeAttribute___c**)Il2CppClass::FromTypeDefinitionIndex(TaskBasedEventTypeAttribute___c_TypeDefinitionIndex)->GetStaticField(0x402F0);
		}
		static ::System::Func_1<::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*>** StaticGet___9__3_0()
		{
			return (::System::Func_1<::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*>**)Il2CppClass::FromTypeDefinitionIndex(TaskBasedEventTypeAttribute___c_TypeDefinitionIndex)->GetStaticField(0x402F8);
		}
		static ::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>** StaticGet___9__3_1()
		{
			return (::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>**)Il2CppClass::FromTypeDefinitionIndex(TaskBasedEventTypeAttribute___c_TypeDefinitionIndex)->GetStaticField(0x40300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE___C__CTOR_OFFSET))(this);
		}

		::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>* __ctor_b__3_0()
		{
			return ((::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE___C___CTOR_B__3_0_OFFSET))(this);
		}

		::MoleMole::Utils::ITypeErasedCompletionSource* __ctor_b__3_1()
		{
			return ((::MoleMole::Utils::ITypeErasedCompletionSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_TASKBASEDEVENTTYPEATTRIBUTE___C___CTOR_B__3_1_OFFSET))(this);
		}
	};
}
