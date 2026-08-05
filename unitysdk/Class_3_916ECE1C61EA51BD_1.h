#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1158E557A8EC08C4.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_9CFA2C562F612E08;

#define CLASS_3_916ECE1C61EA51BD_1_METHOD_3_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x18160270)
#define CLASS_3_916ECE1C61EA51BD_1_METHOD_3_8608350DFEDEE4FD_OFFSET UNITYSDK_OFFSET(0x181607A0)
#define CLASS_3_916ECE1C61EA51BD_1_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x18160A30)
#define CLASS_3_916ECE1C61EA51BD_1_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18160700)
#define CLASS_3_916ECE1C61EA51BD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18160250)

inline static constexpr unsigned int Class_3_916ECE1C61EA51BD_1_TypeDefinitionIndex = 87550;

class Class_3_916ECE1C61EA51BD_1 : public ::Class_2_1158E557A8EC08C4<::Class_1_9CFA2C562F612E08*>
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_0; // 0x28

	::System::Void _ctor(::Class_1_9CFA2C562F612E08* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CFA2C562F612E08*))((::PBYTE)hIl2Cpp + CLASS_3_916ECE1C61EA51BD_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_916ECE1C61EA51BD_1_METHOD_3_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_916ECE1C61EA51BD_1_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_8608350DFEDEE4FD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_916ECE1C61EA51BD_1_METHOD_3_8608350DFEDEE4FD_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_916ECE1C61EA51BD_1_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
