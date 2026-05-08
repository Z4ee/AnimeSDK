#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7D1C3866B99AF44C.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_9CFA2C562F612E08;

#define CLASS_3_64A09207922EA8F7_1_METHOD_3_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x119E74B0)
#define CLASS_3_64A09207922EA8F7_1_METHOD_3_6516B39957C2E680_OFFSET UNITYSDK_OFFSET(0x119E79E0)
#define CLASS_3_64A09207922EA8F7_1_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x119E7C70)
#define CLASS_3_64A09207922EA8F7_1_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x119E7940)
#define CLASS_3_64A09207922EA8F7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x119E7490)

inline static constexpr unsigned int Class_3_64A09207922EA8F7_1_TypeDefinitionIndex = 76056;

class Class_3_64A09207922EA8F7_1 : public ::Class_2_7D1C3866B99AF44C<::Class_1_9CFA2C562F612E08*>
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_0; // 0x28

	::System::Void _ctor(::Class_1_9CFA2C562F612E08* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CFA2C562F612E08*))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_1_METHOD_3_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_1_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_6516B39957C2E680(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_1_METHOD_3_6516B39957C2E680_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_1_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
