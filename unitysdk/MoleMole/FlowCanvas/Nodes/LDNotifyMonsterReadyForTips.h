#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDNOTIFYMONSTERREADYFORTIPS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1427E0B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDNOTIFYMONSTERREADYFORTIPS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1427E2B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDNOTIFYMONSTERREADYFORTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1427E290)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDNotifyMonsterReadyForTips_TypeDefinitionIndex = 45259;

	class LDNotifyMonsterReadyForTips : public ::FlowCanvas::Nodes::CallableActionNode_2<::MoleMole::Config::MonsterStrengthType, ::System::Boolean>
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterStrengthType, ::System::String*>** StaticGet_MonsterStrengthType2StringMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterStrengthType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LDNotifyMonsterReadyForTips_TypeDefinitionIndex)->GetStaticField(0x45A40);
		}
		// static const ::System::String* IS_LAST_FIGHT; // 0x0
		// static const ::System::String* NOT_LAST_FIGHT; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDNOTIFYMONSTERREADYFORTIPS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDNOTIFYMONSTERREADYFORTIPS__CCTOR_OFFSET))();
		}

		::System::Void Invoke(::MoleMole::Config::MonsterStrengthType strengthType, ::System::Boolean isLastWave)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MonsterStrengthType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDNOTIFYMONSTERREADYFORTIPS_INVOKE_OFFSET))(this, strengthType, isLastWave);
		}
	};
}
