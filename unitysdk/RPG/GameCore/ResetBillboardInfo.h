#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESETBILLBOARDINFO_METHOD_3_5A96C5DE6CF40411_OFFSET UNITYSDK_OFFSET(0x1DB928B0)
#define RPG_GAMECORE_RESETBILLBOARDINFO_METHOD_3_A448F5D75FA78B18_OFFSET UNITYSDK_OFFSET(0x1DB92870)
#define RPG_GAMECORE_RESETBILLBOARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB928A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetBillboardInfo_TypeDefinitionIndex = 20223;

	class ResetBillboardInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::EntityType TargetEntityType; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 GroupID; // 0x28
		::System::UInt32 MapIconType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETBILLBOARDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A448F5D75FA78B18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetBillboardInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetBillboardInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETBILLBOARDINFO_METHOD_3_A448F5D75FA78B18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A96C5DE6CF40411(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetBillboardInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETBILLBOARDINFO_METHOD_3_5A96C5DE6CF40411_OFFSET))(a1, a2);
		}
	};
}
