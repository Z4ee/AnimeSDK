#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ROGUETALKOPTIONDATAEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC7EB9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalkOptionDataExt_TypeDefinitionIndex = 63660;

	class RogueTalkOptionDataExt : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* DynamicDisplay2; // 0x18
		::System::String* TextParam; // 0x20
		::System::Int32 DescCostParam; // 0x28
		::System::Int32 DescParam3; // 0x2C
		::System::Int32 EffectNousValueChangeDelta; // 0x30
		::System::UInt32 DisplayID; // 0x34
		::System::Int32 DescIntParam; // 0x38
		::System::Boolean HasEffectNousValueChange; // 0x3C
		::System::Single DescRatioParam; // 0x40
		::System::UInt32 SpecialOptionID; // 0x44
		::System::UInt32 RogueOptionID; // 0x48
		::System::Int32 DescParam4; // 0x4C
		::System::Int32 DescParam2; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALKOPTIONDATAEXT__CTOR_OFFSET))(this);
		}
	};
}
