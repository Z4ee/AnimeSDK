#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_6DDEA509DA0E8D55_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x195B5090)
#define CLASS_3_6DDEA509DA0E8D55_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x195B5110)
#define CLASS_3_6DDEA509DA0E8D55__CTOR_OFFSET UNITYSDK_OFFSET(0x195B50E0)

inline static constexpr unsigned int Class_3_6DDEA509DA0E8D55_TypeDefinitionIndex = 22884;

class Class_3_6DDEA509DA0E8D55 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::RtBehaviorFlag Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DDEA509DA0E8D55__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6DDEA509DA0E8D55*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6DDEA509DA0E8D55*&))((::PBYTE)hIl2Cpp + CLASS_3_6DDEA509DA0E8D55_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6DDEA509DA0E8D55* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6DDEA509DA0E8D55*))((::PBYTE)hIl2Cpp + CLASS_3_6DDEA509DA0E8D55_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
