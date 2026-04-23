#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FC01049DA05831B0;
namespace RPG::Client { class ChimeraDuelTalkData; }
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace RPG::GameCore { class ChimeraDuelExcelValueGetter; }

#define CLASS_1_0968C87A580DC105_METHOD_1_2024C750B5D41301_OFFSET UNITYSDK_OFFSET(0x12916F70)
#define CLASS_1_0968C87A580DC105_METHOD_1_5845CB3FC060DEC8_OFFSET UNITYSDK_OFFSET(0x12916960)
#define CLASS_1_0968C87A580DC105_METHOD_1_716BB6926BB8ACC4_OFFSET UNITYSDK_OFFSET(0x12916850)
#define CLASS_1_0968C87A580DC105_METHOD_1_87F01EA98C2446C5_OFFSET UNITYSDK_OFFSET(0x12916C70)
#define CLASS_1_0968C87A580DC105_METHOD_1_D28A745FA2F569E5_OFFSET UNITYSDK_OFFSET(0x12916AC0)
#define CLASS_1_0968C87A580DC105__CTOR_OFFSET UNITYSDK_OFFSET(0x129170D0)

inline static constexpr unsigned int Class_1_0968C87A580DC105_TypeDefinitionIndex = 71776;

class Class_1_0968C87A580DC105 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0968C87A580DC105__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_716BB6926BB8ACC4(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::Class_1_FC01049DA05831B0* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::Class_1_FC01049DA05831B0*))((::PBYTE)hIl2Cpp + CLASS_1_0968C87A580DC105_METHOD_1_716BB6926BB8ACC4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5845CB3FC060DEC8(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::RPG::Client::ChimeraDuelTalkData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::RPG::Client::ChimeraDuelTalkData*))((::PBYTE)hIl2Cpp + CLASS_1_0968C87A580DC105_METHOD_1_5845CB3FC060DEC8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_87F01EA98C2446C5(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::Class_1_FC01049DA05831B0* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::Class_1_FC01049DA05831B0*))((::PBYTE)hIl2Cpp + CLASS_1_0968C87A580DC105_METHOD_1_87F01EA98C2446C5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D28A745FA2F569E5(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::Class_1_FC01049DA05831B0* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::Class_1_FC01049DA05831B0*))((::PBYTE)hIl2Cpp + CLASS_1_0968C87A580DC105_METHOD_1_D28A745FA2F569E5_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_2024C750B5D41301(::System::UInt32 a1, ::RPG::GameCore::ChimeraDuelExcelValueGetter* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChimeraDuelExcelValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_0968C87A580DC105_METHOD_1_2024C750B5D41301_OFFSET))(this, a1, a2);
	}
};
