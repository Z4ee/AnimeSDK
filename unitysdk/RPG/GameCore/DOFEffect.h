#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DOFEFFECT_METHOD_3_772F293D4D6D8848_OFFSET UNITYSDK_OFFSET(0x1884B270)
#define RPG_GAMECORE_DOFEFFECT_METHOD_3_92F30A2DBD4FE77C_OFFSET UNITYSDK_OFFSET(0x1884B390)
#define RPG_GAMECORE_DOFEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1884B310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DOFEffect_TypeDefinitionIndex = 19195;

	class DOFEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean Active; // 0x28
		::System::Boolean WithAnimation; // 0x29
		::System::Single Duration; // 0x2C
		::System::Single FocusDistance; // 0x30
		::System::Single BlurUnit; // 0x34
		::System::Single Near; // 0x38
		::System::Single Far; // 0x3C
		::System::Boolean IsPhysicsCoc; // 0x40
		::System::Single FStop; // 0x44
		::System::Single SensorWidth; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOFEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_772F293D4D6D8848(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DOFEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DOFEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOFEFFECT_METHOD_3_772F293D4D6D8848_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_92F30A2DBD4FE77C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DOFEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DOFEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOFEFFECT_METHOD_3_92F30A2DBD4FE77C_OFFSET))(a1, a2);
		}
	};
}
