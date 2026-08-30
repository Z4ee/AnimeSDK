#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;
class Class_1_A05AF49AB4C19659;

#define CLASS_1_ED6312566761D69A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB6383B0)
#define CLASS_1_ED6312566761D69A_METHOD_1_E6FAAEE02A32D423_OFFSET UNITYSDK_OFFSET(0xB6382D0)
#define CLASS_1_ED6312566761D69A__CTOR_OFFSET UNITYSDK_OFFSET(0xB6383F0)

inline static constexpr unsigned int Class_1_ED6312566761D69A_TypeDefinitionIndex = 65194;

class Class_1_ED6312566761D69A : public ::System::Object
{
public:
	::Class_1_A05AF49AB4C19659* IAFNNMFIMOI; // 0x10
	::System::Boolean AKPACJGDDPC; // 0x18
	::System::Boolean FJMFKJEIOIO; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6312566761D69A__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_758* Method_1_E6FAAEE02A32D423(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_ED6312566761D69A_METHOD_1_E6FAAEE02A32D423_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6312566761D69A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
