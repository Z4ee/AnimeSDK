#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FC01049DA05831B0;
namespace RPG::Client { class ChimeraDuelTalkData; }
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace RPG::GameCore { class ChimeraDuelExcelValueGetter; }

#define CLASS_1_1E8697FD811D7079_METHOD_1_0E647B6EAEAB6CAA_OFFSET UNITYSDK_OFFSET(0x18CC7350)
#define CLASS_1_1E8697FD811D7079_METHOD_1_2024C750B5D41301_OFFSET UNITYSDK_OFFSET(0x18CC7530)
#define CLASS_1_1E8697FD811D7079_METHOD_1_8083AE944C0B6047_OFFSET UNITYSDK_OFFSET(0x18CC7220)
#define CLASS_1_1E8697FD811D7079_METHOD_1_A4BBC7D8E89C1056_OFFSET UNITYSDK_OFFSET(0x18CC7080)
#define CLASS_1_1E8697FD811D7079_METHOD_1_CD2AADBCD71CB26D_OFFSET UNITYSDK_OFFSET(0x18CC7190)
#define CLASS_1_1E8697FD811D7079__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC7680)

inline static constexpr unsigned int Class_1_1E8697FD811D7079_TypeDefinitionIndex = 77808;

class Class_1_1E8697FD811D7079 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E8697FD811D7079__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A4BBC7D8E89C1056(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::Class_1_FC01049DA05831B0* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::Class_1_FC01049DA05831B0*))((::PBYTE)hIl2Cpp + CLASS_1_1E8697FD811D7079_METHOD_1_A4BBC7D8E89C1056_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CD2AADBCD71CB26D(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::RPG::Client::ChimeraDuelTalkData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::RPG::Client::ChimeraDuelTalkData*))((::PBYTE)hIl2Cpp + CLASS_1_1E8697FD811D7079_METHOD_1_CD2AADBCD71CB26D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0E647B6EAEAB6CAA(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::Class_1_FC01049DA05831B0* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::Class_1_FC01049DA05831B0*))((::PBYTE)hIl2Cpp + CLASS_1_1E8697FD811D7079_METHOD_1_0E647B6EAEAB6CAA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8083AE944C0B6047(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::Class_1_FC01049DA05831B0* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::Class_1_FC01049DA05831B0*))((::PBYTE)hIl2Cpp + CLASS_1_1E8697FD811D7079_METHOD_1_8083AE944C0B6047_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_2024C750B5D41301(::System::UInt32 a1, ::RPG::GameCore::ChimeraDuelExcelValueGetter* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChimeraDuelExcelValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_1E8697FD811D7079_METHOD_1_2024C750B5D41301_OFFSET))(this, a1, a2);
	}
};
