#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MainMissionInfoConfig; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System { class String; }

#define CLASS_1_7BB55B7E4316B891_METHOD_1_050ACBA97F9A2508_OFFSET UNITYSDK_OFFSET(0x19514EF0)
#define CLASS_1_7BB55B7E4316B891_METHOD_1_3BA1599B2922A0C9_OFFSET UNITYSDK_OFFSET(0x19514E10)
#define CLASS_1_7BB55B7E4316B891_METHOD_1_42C03A75EED0A10D_OFFSET UNITYSDK_OFFSET(0x19514C30)
#define CLASS_1_7BB55B7E4316B891_METHOD_1_5A75DD2ED03DA12C_OFFSET UNITYSDK_OFFSET(0x19514D70)
#define CLASS_1_7BB55B7E4316B891__CTOR_OFFSET UNITYSDK_OFFSET(0x195152D0)

inline static constexpr unsigned int Class_1_7BB55B7E4316B891_TypeDefinitionIndex = 48163;

class Class_1_7BB55B7E4316B891 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BB55B7E4316B891__CTOR_OFFSET))(this);
	}

	static ::RPG::GameCore::MainMissionInfoConfig* Method_1_42C03A75EED0A10D(::System::String* a1)
	{
		return ((::RPG::GameCore::MainMissionInfoConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7BB55B7E4316B891_METHOD_1_42C03A75EED0A10D_OFFSET))(a1);
	}

	static ::RPG::GameCore::MainMissionInfoConfig* Method_1_5A75DD2ED03DA12C(::System::String* a1)
	{
		return ((::RPG::GameCore::MainMissionInfoConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7BB55B7E4316B891_METHOD_1_5A75DD2ED03DA12C_OFFSET))(a1);
	}

	static ::System::String* Method_1_3BA1599B2922A0C9(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7BB55B7E4316B891_METHOD_1_3BA1599B2922A0C9_OFFSET))(a1);
	}

	static ::RPG::GameCore::SubMissionInfoConfig* Method_1_050ACBA97F9A2508(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SubMissionInfoConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7BB55B7E4316B891_METHOD_1_050ACBA97F9A2508_OFFSET))(a1);
	}
};
