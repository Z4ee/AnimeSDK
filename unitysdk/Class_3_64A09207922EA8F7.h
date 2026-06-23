#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1158E557A8EC08C4.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_9CFA2C562F612E08;

#define CLASS_3_64A09207922EA8F7_METHOD_3_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x1332EB10)
#define CLASS_3_64A09207922EA8F7_METHOD_3_6516B39957C2E680_OFFSET UNITYSDK_OFFSET(0x1332F040)
#define CLASS_3_64A09207922EA8F7_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x1332F2D0)
#define CLASS_3_64A09207922EA8F7_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1332EFA0)
#define CLASS_3_64A09207922EA8F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1332EAF0)

inline static constexpr unsigned int Class_3_64A09207922EA8F7_TypeDefinitionIndex = 58570;

class Class_3_64A09207922EA8F7 : public ::Class_2_1158E557A8EC08C4<::Class_1_9CFA2C562F612E08*>
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_0; // 0x28

	::System::Void _ctor(::Class_1_9CFA2C562F612E08* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CFA2C562F612E08*))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_METHOD_3_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_6516B39957C2E680(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_METHOD_3_6516B39957C2E680_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
