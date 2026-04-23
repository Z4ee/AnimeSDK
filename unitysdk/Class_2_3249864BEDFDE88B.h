#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_75C90E178B164D38.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameClientNetMode.h"

#define CLASS_2_3249864BEDFDE88B_CLEAR_OFFSET UNITYSDK_OFFSET(0x11DBFC40)
#define CLASS_2_3249864BEDFDE88B_GET_CLIENTNETMODE_OFFSET UNITYSDK_OFFSET(0x11DBFCC0)
#define CLASS_2_3249864BEDFDE88B_SET_CLIENTNETMODE_OFFSET UNITYSDK_OFFSET(0x11DBFCD0)
#define CLASS_2_3249864BEDFDE88B__CTOR_OFFSET UNITYSDK_OFFSET(0x11DBFCE0)
#define CLASS_2_3249864BEDFDE88B___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x11DBFCF0)

inline static constexpr unsigned int Class_2_3249864BEDFDE88B_TypeDefinitionIndex = 55846;

class Class_2_3249864BEDFDE88B : public ::Class_1_75C90E178B164D38
{
public:
	::RPG::Client::LittleGameShare::LittleGameClientNetMode _ClientNetMode_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3249864BEDFDE88B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3249864BEDFDE88B_CLEAR_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::LittleGameClientNetMode get_ClientNetMode()
	{
		return ((::RPG::Client::LittleGameShare::LittleGameClientNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3249864BEDFDE88B_GET_CLIENTNETMODE_OFFSET))(this);
	}

	::System::Void set_ClientNetMode(::RPG::Client::LittleGameShare::LittleGameClientNetMode value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameClientNetMode))((::PBYTE)hIl2Cpp + CLASS_2_3249864BEDFDE88B_SET_CLIENTNETMODE_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3249864BEDFDE88B___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
