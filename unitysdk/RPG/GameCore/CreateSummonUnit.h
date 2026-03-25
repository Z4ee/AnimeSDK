#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_2CAAA2FDF9170110;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CREATESUMMONUNIT_METHOD_3_5CE00F9F7CC1F0AA_OFFSET UNITYSDK_OFFSET(0x1713ECF0)
#define RPG_GAMECORE_CREATESUMMONUNIT_METHOD_3_DAF57A7BFF727249_OFFSET UNITYSDK_OFFSET(0x1713EF10)
#define RPG_GAMECORE_CREATESUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1713ED30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateSummonUnit_TypeDefinitionIndex = 18650;

	class CreateSummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Summoner; // 0x18
		::System::UInt32 SummonUnitID; // 0x20
		::System::String* SummonUnitIDKey; // 0x28
		::System::String* UniqueName; // 0x30
		::RPG::GameCore::TargetEvaluator* AttachTarget; // 0x38
		::RPG::GameCore::TargetEvaluator* PosTarget; // 0x40
		::RPG::GameCore::DynamicFloat* Distance; // 0x48
		::RPG::GameCore::DynamicFloat* OffsetX; // 0x50
		::RPG::GameCore::DynamicFloat* OffsetY; // 0x58
		::RPG::GameCore::DynamicFloat* YawAngle; // 0x60
		::RPG::GameCore::DynamicFloat* Duration; // 0x68
		::RPG::GameCore::EntityPosAdaptionConfig* PosAdaption; // 0x70
		::System::Boolean ForbidSkillMsg; // 0x78
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x80
		::Class_1_2CAAA2FDF9170110* DynamicValues; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5CE00F9F7CC1F0AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateSummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESUMMONUNIT_METHOD_3_5CE00F9F7CC1F0AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DAF57A7BFF727249(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateSummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESUMMONUNIT_METHOD_3_DAF57A7BFF727249_OFFSET))(a1, a2);
		}
	};
}
