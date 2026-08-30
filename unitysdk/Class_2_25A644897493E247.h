#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_25A644897493E247_METHOD_2_614288621F812149_OFFSET UNITYSDK_OFFSET(0x1641BC70)
#define CLASS_2_25A644897493E247_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x1641BB00)
#define CLASS_2_25A644897493E247_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1641BBD0)
#define CLASS_2_25A644897493E247_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1641BB90)
#define CLASS_2_25A644897493E247__CTOR_OFFSET UNITYSDK_OFFSET(0x1641BCB0)
#define CLASS_2_25A644897493E247__ONBIND_OFFSET UNITYSDK_OFFSET(0x1641B9A0)
#define CLASS_2_25A644897493E247__ONTICK_OFFSET UNITYSDK_OFFSET(0x1641BC10)

inline static constexpr unsigned int Class_2_25A644897493E247_TypeDefinitionIndex = 71437;

class Class_2_25A644897493E247 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247__ONTICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_614288621F812149()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25A644897493E247_METHOD_2_614288621F812149_OFFSET))(this);
	}
};
