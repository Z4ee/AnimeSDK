#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CREATESHAREDSUMMONUNIT_METHOD_3_A0CEB95917031CBC_OFFSET UNITYSDK_OFFSET(0x1D00A0D0)
#define RPG_GAMECORE_CREATESHAREDSUMMONUNIT_METHOD_3_B73155A6A13641FE_OFFSET UNITYSDK_OFFSET(0x1D00A290)
#define RPG_GAMECORE_CREATESHAREDSUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D00A110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateSharedSummonUnit_TypeDefinitionIndex = 20916;

	class CreateSharedSummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Summoner; // 0x18
		::RPG::GameCore::DynamicFloat* SummonUnitID; // 0x20
		::RPG::GameCore::DynamicString* UniqueName; // 0x28
		::RPG::GameCore::TargetEvaluator* AttachTarget; // 0x30
		::RPG::GameCore::TargetEvaluator* PosTarget; // 0x38
		::RPG::GameCore::DynamicFloat* Distance; // 0x40
		::RPG::GameCore::DynamicFloat* OffsetX; // 0x48
		::RPG::GameCore::DynamicFloat* OffsetY; // 0x50
		::RPG::GameCore::DynamicFloat* YawAngle; // 0x58
		::RPG::GameCore::EntityPosAdaptionConfig* PosAdaption; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDestroy; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeginUse; // 0x78
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEndUse; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESHAREDSUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0CEB95917031CBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateSharedSummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateSharedSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESHAREDSUMMONUNIT_METHOD_3_A0CEB95917031CBC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B73155A6A13641FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateSharedSummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateSharedSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESHAREDSUMMONUNIT_METHOD_3_B73155A6A13641FE_OFFSET))(a1, a2);
		}
	};
}
