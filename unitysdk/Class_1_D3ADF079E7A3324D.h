#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarEventAction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_B4CDE3278E4B50C2;

#define CLASS_1_D3ADF079E7A3324D__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD1AA130)
#define CLASS_1_D3ADF079E7A3324D__CTOR_2_OFFSET UNITYSDK_OFFSET(0xD1AA140)
#define CLASS_1_D3ADF079E7A3324D__CTOR_OFFSET UNITYSDK_OFFSET(0xD1AA120)

inline static constexpr unsigned int Class_1_D3ADF079E7A3324D_TypeDefinitionIndex = 58340;

class Class_1_D3ADF079E7A3324D : public ::System::Object
{
public:
	::Class_1_B4CDE3278E4B50C2* Field_1_1; // 0x10
	::UnityEngine::Vector2 Field_1_0; // 0x18
	::RPG::Client::ActionBarEventAction Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3ADF079E7A3324D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B4CDE3278E4B50C2* a1, ::RPG::Client::ActionBarEventAction a2, ::UnityEngine::Vector2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4CDE3278E4B50C2*, ::RPG::Client::ActionBarEventAction, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_D3ADF079E7A3324D__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_2(::Class_1_B4CDE3278E4B50C2* a1, ::RPG::Client::ActionBarEventAction a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4CDE3278E4B50C2*, ::RPG::Client::ActionBarEventAction))((::PBYTE)hIl2Cpp + CLASS_1_D3ADF079E7A3324D__CTOR_2_OFFSET))(this, a1, a2);
	}
};
