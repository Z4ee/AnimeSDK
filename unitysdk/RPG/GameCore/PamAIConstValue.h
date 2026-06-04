#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PamLevelInfo; }

#define RPG_GAMECORE_PAMAICONSTVALUE_METHOD_2_A7028302576522C5_OFFSET UNITYSDK_OFFSET(0x199E1520)
#define RPG_GAMECORE_PAMAICONSTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x199E18C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamAIConstValue_TypeDefinitionIndex = 14852;

	class PamAIConstValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PamPlane; // 0x10
		::System::UInt32 PamFloor; // 0x14
		::System::UInt32 AnchorGroup; // 0x18
		::System::Single SelectAnchorMaxDistance; // 0x1C
		::System::Single KeepMoodWeightMagnification; // 0x20
		::System::Single KeepAwaySameAnchorWeightPercentage; // 0x24
		::System::UInt32 MoodBuffTurnNumberMin; // 0x28
		::System::UInt32 MoodBuffTurnNumberMax; // 0x2C
		::System::Single MoodBuffCorrection; // 0x30
		::System::Boolean AllowMoodCorretClamp; // 0x34
		::Il2CppArray<::RPG::GameCore::PamLevelInfo*>* PamLevelInfoList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMAICONSTVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A7028302576522C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PamAIConstValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamAIConstValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMAICONSTVALUE_METHOD_2_A7028302576522C5_OFFSET))(a1, a2);
		}
	};
}
