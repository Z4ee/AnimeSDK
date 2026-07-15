#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AB88D713F5121B3_51.h"
#include "unitysdk/RPG/Client/AdvSkillAfterPacketActionType.h"

#define CLASS_2_BE0419E2586B0724_CLEAR_OFFSET UNITYSDK_OFFSET(0x170D5970)
#define CLASS_2_BE0419E2586B0724_METHOD_2_F9158FE8E0F16D3B_OFFSET UNITYSDK_OFFSET(0x170D59F0)
#define CLASS_2_BE0419E2586B0724__CTOR_OFFSET UNITYSDK_OFFSET(0x170D5A30)

inline static constexpr unsigned int Class_2_BE0419E2586B0724_TypeDefinitionIndex = 59270;

class Class_2_BE0419E2586B0724 : public ::Class_1_7AB88D713F5121B3_51
{
public:
	::System::UInt32 Field_2_0; // 0x18
	::System::UInt32 Field_2_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE0419E2586B0724__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE0419E2586B0724_CLEAR_OFFSET))(this);
	}

	::RPG::Client::AdvSkillAfterPacketActionType Method_2_F9158FE8E0F16D3B()
	{
		return ((::RPG::Client::AdvSkillAfterPacketActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE0419E2586B0724_METHOD_2_F9158FE8E0F16D3B_OFFSET))(this);
	}
};
