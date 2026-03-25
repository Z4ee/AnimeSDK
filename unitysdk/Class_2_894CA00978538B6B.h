#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AB88D713F5121B3_40.h"
#include "unitysdk/RPG/Client/AdvSkillAfterPacketActionType.h"

#define CLASS_2_894CA00978538B6B_CLEAR_OFFSET UNITYSDK_OFFSET(0x889EDA0)
#define CLASS_2_894CA00978538B6B_METHOD_2_294F3492279ACB54_OFFSET UNITYSDK_OFFSET(0x889EEE0)
#define CLASS_2_894CA00978538B6B_METHOD_2_F9158FE8E0F16D3B_OFFSET UNITYSDK_OFFSET(0x889EE20)
#define CLASS_2_894CA00978538B6B__CTOR_OFFSET UNITYSDK_OFFSET(0x889EE60)
#define CLASS_2_894CA00978538B6B___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x889EE70)

inline static constexpr unsigned int Class_2_894CA00978538B6B_TypeDefinitionIndex = 50355;

class Class_2_894CA00978538B6B : public ::Class_1_7AB88D713F5121B3_40
{
public:
	::System::UInt32 Field_2_1; // 0x18
	::System::UInt32 Field_2_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_894CA00978538B6B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_894CA00978538B6B_CLEAR_OFFSET))(this);
	}

	::RPG::Client::AdvSkillAfterPacketActionType Method_2_F9158FE8E0F16D3B()
	{
		return ((::RPG::Client::AdvSkillAfterPacketActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_894CA00978538B6B_METHOD_2_F9158FE8E0F16D3B_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_894CA00978538B6B___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::RPG::Client::AdvSkillAfterPacketActionType Method_2_294F3492279ACB54()
	{
		return ((::RPG::Client::AdvSkillAfterPacketActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_894CA00978538B6B_METHOD_2_294F3492279ACB54_OFFSET))(this);
	}
};
