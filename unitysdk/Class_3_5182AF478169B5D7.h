#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_5182AF478169B5D7_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1D6E6780)
#define CLASS_3_5182AF478169B5D7_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1D6E67D0)
#define CLASS_3_5182AF478169B5D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E67C0)

inline static constexpr unsigned int Class_3_5182AF478169B5D7_TypeDefinitionIndex = 22455;

class Class_3_5182AF478169B5D7 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* ECNKCCNJNPJ; // 0x18
	::System::Boolean BHMGBPJCFBK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5182AF478169B5D7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5182AF478169B5D7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5182AF478169B5D7*&))((::PBYTE)hIl2Cpp + CLASS_3_5182AF478169B5D7_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5182AF478169B5D7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5182AF478169B5D7*))((::PBYTE)hIl2Cpp + CLASS_3_5182AF478169B5D7_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
