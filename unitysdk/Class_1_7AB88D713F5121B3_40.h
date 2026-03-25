#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdvSkillAfterPacketActionType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7AB88D713F5121B3_40_CLEAR_OFFSET UNITYSDK_OFFSET(0xA1F7C30)
#define CLASS_1_7AB88D713F5121B3_40_METHOD_1_C0D21148B54FB355_OFFSET UNITYSDK_OFFSET(0xA1F7C80)
#define CLASS_1_7AB88D713F5121B3_40__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F7C20)

inline static constexpr unsigned int Class_1_7AB88D713F5121B3_40_TypeDefinitionIndex = 50354;

class Class_1_7AB88D713F5121B3_40 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_40__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_40_CLEAR_OFFSET))(this);
	}

	::RPG::Client::AdvSkillAfterPacketActionType Method_1_C0D21148B54FB355()
	{
		return ((::RPG::Client::AdvSkillAfterPacketActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_40_METHOD_1_C0D21148B54FB355_OFFSET))(this);
	}
};
