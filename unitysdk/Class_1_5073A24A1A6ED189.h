#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06EF49E17999C143;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_5073A24A1A6ED189_METHOD_1_3CDC1D8A564A5D60_OFFSET UNITYSDK_OFFSET(0x169775A0)
#define CLASS_1_5073A24A1A6ED189_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x169779E0)
#define CLASS_1_5073A24A1A6ED189_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16977A30)
#define CLASS_1_5073A24A1A6ED189__CTOR_OFFSET UNITYSDK_OFFSET(0x16977B10)

inline static constexpr unsigned int Class_1_5073A24A1A6ED189_TypeDefinitionIndex = 58029;

class Class_1_5073A24A1A6ED189 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21
	::System::Boolean Field_1_4; // 0x22

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5073A24A1A6ED189__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3CDC1D8A564A5D60(::Class_1_06EF49E17999C143* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_06EF49E17999C143*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_5073A24A1A6ED189_METHOD_1_3CDC1D8A564A5D60_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5073A24A1A6ED189_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5073A24A1A6ED189_TOSTRING_OFFSET))(this);
	}
};
