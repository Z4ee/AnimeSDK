#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_6EC4285B171147D2___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC9F15B0)
#define CLASS_1_6EC4285B171147D2___C__DISPLAYCLASS2_0__FOREACHPETIDENTIFIER_B__0_OFFSET UNITYSDK_OFFSET(0xC9F1780)
#define CLASS_1_6EC4285B171147D2___C__DISPLAYCLASS2_0__FOREACHPETIDENTIFIER_B__1_OFFSET UNITYSDK_OFFSET(0xC9F1810)

inline static constexpr unsigned int Class_1_6EC4285B171147D2___c__DisplayClass2_0_TypeDefinitionIndex = 75675;

class Class_1_6EC4285B171147D2___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::Action_1<::RPG::Client::Pet::PetIdentifier>* action; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EC4285B171147D2___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _ForeachPetIdentifier_b__0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EC4285B171147D2___C__DISPLAYCLASS2_0__FOREACHPETIDENTIFIER_B__0_OFFSET))(this, a1);
	}

	::System::Void _ForeachPetIdentifier_b__1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EC4285B171147D2___C__DISPLAYCLASS2_0__FOREACHPETIDENTIFIER_B__1_OFFSET))(this, a1, a2);
	}
};
