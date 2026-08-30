#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinAmplificationTarget.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_089C45BC8048A9A8_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1CCC97F0)
#define CLASS_3_089C45BC8048A9A8_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1CCC9830)
#define CLASS_3_089C45BC8048A9A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC9820)

inline static constexpr unsigned int Class_3_089C45BC8048A9A8_TypeDefinitionIndex = 19686;

class Class_3_089C45BC8048A9A8 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* MNDFOPKBHKP; // 0x18
	::RPG::GameCore::FateRinAmplificationTarget MCLLALGABAB; // 0x20
	::RPG::GameCore::StringHash BBBAMBGCGPL; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_089C45BC8048A9A8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_089C45BC8048A9A8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_089C45BC8048A9A8*&))((::PBYTE)hIl2Cpp + CLASS_3_089C45BC8048A9A8_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_089C45BC8048A9A8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_089C45BC8048A9A8*))((::PBYTE)hIl2Cpp + CLASS_3_089C45BC8048A9A8_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
