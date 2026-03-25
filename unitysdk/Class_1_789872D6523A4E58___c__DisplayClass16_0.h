#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F0A446EC7AE7E87D_1;
namespace RPG::Client { class GridFightGameModifier; }

#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105732E0)
#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS16_0__UPDATEADD_B__0_OFFSET UNITYSDK_OFFSET(0x105746E0)
#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS16_0__UPDATEADD_B__1_OFFSET UNITYSDK_OFFSET(0x10574760)

inline static constexpr unsigned int Class_1_789872D6523A4E58___c__DisplayClass16_0_TypeDefinitionIndex = 52810;

class Class_1_789872D6523A4E58___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_1_F0A446EC7AE7E87D_1* info; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _UpdateAdd_b__0(::RPG::Client::GridFightGameModifier* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS16_0__UPDATEADD_B__0_OFFSET))(this, x);
	}

	::System::Boolean _UpdateAdd_b__1(::RPG::Client::GridFightGameModifier* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS16_0__UPDATEADD_B__1_OFFSET))(this, x);
	}
};
