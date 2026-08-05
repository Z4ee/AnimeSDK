#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_F7C9E437965966E9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x15640170)
#define CLASS_1_F7C9E437965966E9_METHOD_1_09C8F4F651ECC78B_OFFSET UNITYSDK_OFFSET(0x15640C90)
#define CLASS_1_F7C9E437965966E9_METHOD_1_582AFEBA95488738_OFFSET UNITYSDK_OFFSET(0x15640490)
#define CLASS_1_F7C9E437965966E9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x15640C80)
#define CLASS_1_F7C9E437965966E9_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x156401C0)
#define CLASS_1_F7C9E437965966E9_METHOD_1_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x15640750)
#define CLASS_1_F7C9E437965966E9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15640180)
#define CLASS_1_F7C9E437965966E9__CTOR_OFFSET UNITYSDK_OFFSET(0x15640480)

inline static constexpr unsigned int Class_1_F7C9E437965966E9_TypeDefinitionIndex = 64625;

class Class_1_F7C9E437965966E9 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10
	::MoleMole::EntityHandle Field_1_1; // 0x20
	::MoleMole::EntityHandle Field_1_7; // 0x30
	::System::UInt32 Field_1_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C9E437965966E9__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C9E437965966E9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C9E437965966E9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C9E437965966E9_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_582AFEBA95488738(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_F7C9E437965966E9_METHOD_1_582AFEBA95488738_OFFSET))(this, a1);
	}

	::System::Void Method_1_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7C9E437965966E9_METHOD_1_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F7C9E437965966E9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_09C8F4F651ECC78B(::MoleMole::EntityHandle a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_F7C9E437965966E9_METHOD_1_09C8F4F651ECC78B_OFFSET))(this, a1, a2);
	}
};
