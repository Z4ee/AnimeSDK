#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7109EE9F6F5F9F64;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace MoleMole::HollowChessboard { class HollowRenderSequenceConfig; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_INITFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x17908270)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_MOLEMOLE_HOLLOWCHESSBOARD_ICONFIGHOLLOWCHESSBOARDBEHAVIOR_INITFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x17908610)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17908600)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigHollowChessboardUvStackAnimationBehavior_TypeDefinitionIndex = 60951;

	class ConfigHollowChessboardUvStackAnimationBehavior : public ::System::Object
	{
	public:
		::MoleMole::HollowChessboard::HollowRenderSequenceConfig* SequenceInConfig; // 0x10
		::MoleMole::HollowChessboard::HollowRenderSequenceConfig* SequenceOutConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Boolean InitFormConfig(::MoleMole::HollowChessboard::HollowEntity* entity, ::Class_2_7109EE9F6F5F9F64*& behaviorGraph)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_2_7109EE9F6F5F9F64*&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_INITFORMCONFIG_OFFSET))(this, entity, behaviorGraph);
		}

		::System::Boolean MoleMole_HollowChessboard_IConfigHollowChessboardBehavior_InitFormConfig(::MoleMole::HollowChessboard::HollowEntity* entity, ::Class_2_7109EE9F6F5F9F64*& behaviorGraph)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_2_7109EE9F6F5F9F64*&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_MOLEMOLE_HOLLOWCHESSBOARD_ICONFIGHOLLOWCHESSBOARDBEHAVIOR_INITFORMCONFIG_OFFSET))(this, entity, behaviorGraph);
		}
	};
}
