#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E57A374D7B9C00B6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115237B0)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x11523C30)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11523BD0)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_300ED5D5D6830701_OFFSET UNITYSDK_OFFSET(0x115235C0)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_611AABB501CB37AE_OFFSET UNITYSDK_OFFSET(0x11523A00)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11523CD0)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11523C90)
#define CLASS_1_E57A374D7B9C00B6_METHOD_1_CB19BA48F4DD1DB2_OFFSET UNITYSDK_OFFSET(0x11523340)
#define CLASS_1_E57A374D7B9C00B6__CTOR_OFFSET UNITYSDK_OFFSET(0x11523D10)

inline static constexpr unsigned int Class_1_E57A374D7B9C00B6_TypeDefinitionIndex = 46311;

class Class_1_E57A374D7B9C00B6 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_3; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::Boolean Field_1_0; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB19BA48F4DD1DB2(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6_METHOD_1_CB19BA48F4DD1DB2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_300ED5D5D6830701(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6_METHOD_1_300ED5D5D6830701_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_611AABB501CB37AE(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_E57A374D7B9C00B6_METHOD_1_611AABB501CB37AE_OFFSET))(this, a1);
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
