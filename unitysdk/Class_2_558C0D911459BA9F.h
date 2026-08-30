#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_545F497870FB4A84;

#define CLASS_2_558C0D911459BA9F_METHOD_2_8A937E2A0643511D_OFFSET UNITYSDK_OFFSET(0x1CA974B0)
#define CLASS_2_558C0D911459BA9F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA975C0)

inline static constexpr unsigned int Class_2_558C0D911459BA9F_TypeDefinitionIndex = 17945;

class Class_2_558C0D911459BA9F : public ::RPG::GameCore::JsonConfig
{
public:
	::Class_2_545F497870FB4A84* CIDPKCICEBG; // 0x10
	::Class_2_545F497870FB4A84* DPHAELOEHBM; // 0x18
	::Class_2_545F497870FB4A84* PNMCPEEAOMK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_558C0D911459BA9F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_8A937E2A0643511D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_558C0D911459BA9F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_558C0D911459BA9F*&))((::PBYTE)hIl2Cpp + CLASS_2_558C0D911459BA9F_METHOD_2_8A937E2A0643511D_OFFSET))(a1, a2);
	}
};
