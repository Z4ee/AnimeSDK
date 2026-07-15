#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinAmplificationTarget.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_089C45BC8048A9A8_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1B3AFA90)
#define CLASS_3_089C45BC8048A9A8_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1B3AFAD0)
#define CLASS_3_089C45BC8048A9A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3AFAC0)

inline static constexpr unsigned int Class_3_089C45BC8048A9A8_TypeDefinitionIndex = 19145;

class Class_3_089C45BC8048A9A8 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::FateRinAmplificationTarget Field_3_1; // 0x20
	::RPG::GameCore::StringHash Field_3_2; // 0x24

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
