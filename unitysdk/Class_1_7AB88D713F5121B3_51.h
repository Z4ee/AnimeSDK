#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdvSkillAfterPacketActionType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7AB88D713F5121B3_51_CLEAR_OFFSET UNITYSDK_OFFSET(0x16330D80)
#define CLASS_1_7AB88D713F5121B3_51_METHOD_1_C0D21148B54FB355_OFFSET UNITYSDK_OFFSET(0x16330DD0)
#define CLASS_1_7AB88D713F5121B3_51__CTOR_OFFSET UNITYSDK_OFFSET(0x16330D70)

inline static constexpr unsigned int Class_1_7AB88D713F5121B3_51_TypeDefinitionIndex = 59269;

class Class_1_7AB88D713F5121B3_51 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_51__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_51_CLEAR_OFFSET))(this);
	}

	::RPG::Client::AdvSkillAfterPacketActionType Method_1_C0D21148B54FB355()
	{
		return ((::RPG::Client::AdvSkillAfterPacketActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_51_METHOD_1_C0D21148B54FB355_OFFSET))(this);
	}
};
