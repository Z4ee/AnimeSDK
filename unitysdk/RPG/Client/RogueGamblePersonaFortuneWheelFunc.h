#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleBaseFunc.h"

class Class_1_A16A135FC5A0DDB9_3;
namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC_CREATE_OFFSET UNITYSDK_OFFSET(0xA305D20)
#define RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xA305E60)
#define RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xA305DC0)
#define RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xA306000)
#define RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC__SETROLLRANGE_OFFSET UNITYSDK_OFFSET(0xA305DD0)
#define RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC___IFIXBASEPROXY_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xA306050)
#define RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC___IFIXBASEPROXY__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xA3060A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGamblePersonaFortuneWheelFunc_TypeDefinitionIndex = 54738;

	class RogueGamblePersonaFortuneWheelFunc : public ::RPG::Client::RogueGambleBaseFunc
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueGamblePersonaFortuneWheelFunc* Create(::Class_1_A16A135FC5A0DDB9_3* proto)
		{
			return ((::RPG::Client::RogueGamblePersonaFortuneWheelFunc*(*)(::Class_1_A16A135FC5A0DDB9_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC_CREATE_OFFSET))(proto);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}

		::System::Void _SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC__SETMACHINETYPE_OFFSET))(this);
		}

		::System::Void _SetRollRange(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC__SETROLLRANGE_OFFSET))(this, min, max);
		}

		::RPG::Client::LuaUIController* __iFixBaseProxy_OpenFuncUIPage(::System::UInt32 P0)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC___IFIXBASEPROXY_OPENFUNCUIPAGE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC___IFIXBASEPROXY__SETMACHINETYPE_OFFSET))(this);
		}
	};
}
