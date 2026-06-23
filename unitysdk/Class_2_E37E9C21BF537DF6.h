#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_E37E9C21BF537DF6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13072A00)
#define CLASS_2_E37E9C21BF537DF6_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13072B10)
#define CLASS_2_E37E9C21BF537DF6_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13072CE0)
#define CLASS_2_E37E9C21BF537DF6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13072C40)
#define CLASS_2_E37E9C21BF537DF6_METHOD_2_E8703B3EC419F1DB_OFFSET UNITYSDK_OFFSET(0x13072BA0)
#define CLASS_2_E37E9C21BF537DF6__CCTOR_OFFSET UNITYSDK_OFFSET(0x13072A90)
#define CLASS_2_E37E9C21BF537DF6__CTOR_OFFSET UNITYSDK_OFFSET(0x13072B00)

inline static constexpr unsigned int Class_2_E37E9C21BF537DF6_TypeDefinitionIndex = 39758;

class Class_2_E37E9C21BF537DF6 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x65; // 0x0
	::MoleMole::Battle::Entity* Field_2_1; // 0x20
	::MoleMole::Battle::Entity* Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_E8703B3EC419F1DB(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6_METHOD_2_E8703B3EC419F1DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E37E9C21BF537DF6_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
