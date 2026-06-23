#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7109EE9F6F5F9F64;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace MoleMole::HollowChessboard { class HollowRenderSequenceConfig; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDSIMPLEMOVEBEHAVIOR_INITFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x116229E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDSIMPLEMOVEBEHAVIOR_MOLEMOLE_HOLLOWCHESSBOARD_ICONFIGHOLLOWCHESSBOARDBEHAVIOR_INITFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x11622E10)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDSIMPLEMOVEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11622E00)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigHollowChessboardSimpleMoveBehavior_TypeDefinitionIndex = 77943;

	class ConfigHollowChessboardSimpleMoveBehavior : public ::System::Object
	{
	public:
		::MoleMole::HollowChessboard::HollowRenderSequenceConfig* MoveCur; // 0x10
		::MoleMole::HollowChessboard::HollowRenderSequenceConfig* MovePrv; // 0x18
		::System::Single DelayTime; // 0x20
		::System::Boolean IsEnableCurGridDelay; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDSIMPLEMOVEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Boolean InitFormConfig(::MoleMole::HollowChessboard::HollowEntity* entity, ::Class_2_7109EE9F6F5F9F64*& behaviorGraph)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_2_7109EE9F6F5F9F64*&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDSIMPLEMOVEBEHAVIOR_INITFORMCONFIG_OFFSET))(this, entity, behaviorGraph);
		}

		::System::Boolean MoleMole_HollowChessboard_IConfigHollowChessboardBehavior_InitFormConfig(::MoleMole::HollowChessboard::HollowEntity* entity, ::Class_2_7109EE9F6F5F9F64*& behaviorGraph)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_2_7109EE9F6F5F9F64*&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDSIMPLEMOVEBEHAVIOR_MOLEMOLE_HOLLOWCHESSBOARD_ICONFIGHOLLOWCHESSBOARDBEHAVIOR_INITFORMCONFIG_OFFSET))(this, entity, behaviorGraph);
		}
	};
}
