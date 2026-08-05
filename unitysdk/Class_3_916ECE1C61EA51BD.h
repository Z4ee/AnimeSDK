#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1158E557A8EC08C4.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

namespace MoleMole::HollowChessboard { class UVAnimSection; }

#define CLASS_3_916ECE1C61EA51BD_METHOD_3_8608350DFEDEE4FD_OFFSET UNITYSDK_OFFSET(0x170F71B0)
#define CLASS_3_916ECE1C61EA51BD_METHOD_3_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x170F6C70)
#define CLASS_3_916ECE1C61EA51BD_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x170F7440)
#define CLASS_3_916ECE1C61EA51BD_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x170F7110)
#define CLASS_3_916ECE1C61EA51BD__CTOR_OFFSET UNITYSDK_OFFSET(0x170F6C50)

inline static constexpr unsigned int Class_3_916ECE1C61EA51BD_TypeDefinitionIndex = 80503;

class Class_3_916ECE1C61EA51BD : public ::Class_2_1158E557A8EC08C4<::MoleMole::HollowChessboard::UVAnimSection*>
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_0; // 0x28

	::System::Void _ctor(::MoleMole::HollowChessboard::UVAnimSection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::UVAnimSection*))((::PBYTE)hIl2Cpp + CLASS_3_916ECE1C61EA51BD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_916ECE1C61EA51BD_METHOD_3_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_916ECE1C61EA51BD_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_8608350DFEDEE4FD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_916ECE1C61EA51BD_METHOD_3_8608350DFEDEE4FD_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_916ECE1C61EA51BD_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
