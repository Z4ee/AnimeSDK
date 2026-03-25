#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UpgradeAvatarSubRelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_FC6E5B0A7251B48D_METHOD_1_D44B7F51DEAAFB41_OFFSET UNITYSDK_OFFSET(0x16C2D200)
#define CLASS_1_FC6E5B0A7251B48D__CTOR_OFFSET UNITYSDK_OFFSET(0x16C2D310)

inline static constexpr unsigned int Class_1_FC6E5B0A7251B48D_TypeDefinitionIndex = 14151;

class Class_1_FC6E5B0A7251B48D : public ::System::Object
{
public:
	::RPG::GameCore::UpgradeAvatarSubRelicType Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC6E5B0A7251B48D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D44B7F51DEAAFB41(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_FC6E5B0A7251B48D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_FC6E5B0A7251B48D*&))((::PBYTE)hIl2Cpp + CLASS_1_FC6E5B0A7251B48D_METHOD_1_D44B7F51DEAAFB41_OFFSET))(a1, a2);
	}
};
