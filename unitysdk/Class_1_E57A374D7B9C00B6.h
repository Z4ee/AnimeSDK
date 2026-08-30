#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E57A374D7B9C00B6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187D9EA0)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x187DA360)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x187DA300)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_300ED5D5D6830701_OFFSET UNITYSDK_OFFSET(0x187D9CA0)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_52EAB62F521E394D_OFFSET UNITYSDK_OFFSET(0x187D9A10)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_61662D64ED8D92B7_OFFSET UNITYSDK_OFFSET(0x187DA120)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x187DA400)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x187DA3C0)
#define CLASS_1_E57A374D7B9C00B6__CTOR_OFFSET UNITYSDK_OFFSET(0x187DA440)

inline static constexpr unsigned int Class_1_E57A374D7B9C00B6_TypeDefinitionIndex = 57639;

class Class_1_E57A374D7B9C00B6 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MMBALLEHPBM; // 0x10
	::RPG::GameCore::GameEntity* BMGFNCDBKGA; // 0x18
	::RPG::GameCore::GameEntity* FHEMCAFOIKG; // 0x20
	::System::Boolean GFNOGAPBDBP; // 0x28
	::System::Int32 PFOLDOJPIEH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_52EAB62F521E394D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6_METHOD_1_52EAB62F521E394D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_300ED5D5D6830701(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6_METHOD_1_300ED5D5D6830701_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_61662D64ED8D92B7(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6_METHOD_1_61662D64ED8D92B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
