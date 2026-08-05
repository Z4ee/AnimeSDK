#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_61A5922E5046F385_6;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_435EEEE804ECAAEB_CLASS_1_163E01D64183BA1C_METHOD_1_8F6CC42C9A35A98E_OFFSET UNITYSDK_OFFSET(0x14C85DB0)
#define CLASS_3_435EEEE804ECAAEB_CLASS_1_163E01D64183BA1C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C85DA0)

inline static constexpr unsigned int Class_3_435EEEE804ECAAEB_Class_1_163E01D64183BA1C_TypeDefinitionIndex = 88098;

class Class_3_435EEEE804ECAAEB_Class_1_163E01D64183BA1C : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::Class_3_61A5922E5046F385_6* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435EEEE804ECAAEB_CLASS_1_163E01D64183BA1C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8F6CC42C9A35A98E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_435EEEE804ECAAEB_CLASS_1_163E01D64183BA1C_METHOD_1_8F6CC42C9A35A98E_OFFSET))(this, a1);
	}
};
