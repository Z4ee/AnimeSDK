#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_INITISOMETRICROADLINKER_METHOD_3_2069DFAE03494BEB_OFFSET UNITYSDK_OFFSET(0x1B0106C0)
#define RPG_GAMECORE_INITISOMETRICROADLINKER_METHOD_3_A677D672CBC6CFCB_OFFSET UNITYSDK_OFFSET(0x1B010740)
#define RPG_GAMECORE_INITISOMETRICROADLINKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B010710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitIsometricRoadLinker_TypeDefinitionIndex = 21395;

	class InitIsometricRoadLinker : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* DiffHeight; // 0x20
		::RPG::GameCore::DynamicFloat* ToSidePitch; // 0x28
		::RPG::GameCore::DynamicFloat* Priority; // 0x30
		::RPG::GameCore::DynamicString* LevelAreaCameraKey; // 0x38
		::RPG::GameCore::DynamicString* ExceptOffsetKey; // 0x40
		::RPG::GameCore::DynamicString* ExceptScaleKey; // 0x48
		::RPG::GameCore::DynamicFloat* IsSide1ToTrigger; // 0x50
		::RPG::GameCore::DynamicFloat* IsSide2ToTrigger; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITISOMETRICROADLINKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2069DFAE03494BEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitIsometricRoadLinker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitIsometricRoadLinker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITISOMETRICROADLINKER_METHOD_3_2069DFAE03494BEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A677D672CBC6CFCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitIsometricRoadLinker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitIsometricRoadLinker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITISOMETRICROADLINKER_METHOD_3_A677D672CBC6CFCB_OFFSET))(a1, a2);
		}
	};
}
