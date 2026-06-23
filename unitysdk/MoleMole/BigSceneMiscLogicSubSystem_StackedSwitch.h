#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class BigSceneMiscLogicSubSystem_StackedSwitch_Disposable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_CLEAR_OFFSET UNITYSDK_OFFSET(0xE94AA00)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_POP_1_OFFSET UNITYSDK_OFFSET(0xE94A8A0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_POP_OFFSET UNITYSDK_OFFSET(0xE94A620)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_PUSH_OFFSET UNITYSDK_OFFSET(0xE94A150)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xE94AAC0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem_StackedSwitch_TypeDefinitionIndex = 57045;

	class BigSceneMiscLogicSubSystem_StackedSwitch : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::MoleMole::BigSceneMiscLogicSubSystem_StackedSwitch_Disposable*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>>* _tags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH__CTOR_OFFSET))(this);
		}

		::System::Void Push(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_PUSH_OFFSET))(this, groupID, tag);
		}

		::System::Void Pop(::System::UInt32 groupID, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_POP_OFFSET))(this, groupID, tag);
		}

		::System::Void Pop_1(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_POP_1_OFFSET))(this, groupID);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_CLEAR_OFFSET))(this);
		}
	};
}
