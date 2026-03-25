#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06EF49E17999C143;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_04BD1C2CDF52B30A_METHOD_1_66076CF9E9553D29_OFFSET UNITYSDK_OFFSET(0x89DE9E0)
#define CLASS_1_04BD1C2CDF52B30A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x89DED50)
#define CLASS_1_04BD1C2CDF52B30A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x89DEDA0)
#define CLASS_1_04BD1C2CDF52B30A__CTOR_OFFSET UNITYSDK_OFFSET(0x89DEE80)
#define CLASS_1_04BD1C2CDF52B30A___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x89DEE90)

inline static constexpr unsigned int Class_1_04BD1C2CDF52B30A_TypeDefinitionIndex = 49223;

class Class_1_04BD1C2CDF52B30A : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::RPG::GameCore::GameEntity* Field_1_4; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::Boolean Field_1_0; // 0x21
	::System::Boolean Field_1_1; // 0x22

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04BD1C2CDF52B30A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_66076CF9E9553D29(::Class_1_06EF49E17999C143* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_06EF49E17999C143*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_04BD1C2CDF52B30A_METHOD_1_66076CF9E9553D29_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04BD1C2CDF52B30A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04BD1C2CDF52B30A_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04BD1C2CDF52B30A___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
