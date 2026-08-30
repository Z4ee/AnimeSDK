#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class LittleGameFireEffectParams; }

#define CLASS_3_420FC7D8AE78CF6B_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1D0D2530)
#define CLASS_3_420FC7D8AE78CF6B_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1D0D2570)
#define CLASS_3_420FC7D8AE78CF6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D2560)

inline static constexpr unsigned int Class_3_420FC7D8AE78CF6B_TypeDefinitionIndex = 21196;

class Class_3_420FC7D8AE78CF6B : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::LittleGameFireEffectParams* EKKGNJDOANO; // 0x18
	::RPG::GameCore::DynamicString* ODMPMJCAHPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_420FC7D8AE78CF6B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_420FC7D8AE78CF6B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_420FC7D8AE78CF6B*&))((::PBYTE)hIl2Cpp + CLASS_3_420FC7D8AE78CF6B_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_420FC7D8AE78CF6B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_420FC7D8AE78CF6B*))((::PBYTE)hIl2Cpp + CLASS_3_420FC7D8AE78CF6B_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
