#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleBaseFunc.h"

class Class_1_AA7A9E067CD84C14;
namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_CREATE_OFFSET UNITYSDK_OFFSET(0xC789740)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xC789880)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xC7897E0)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xC7899E0)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__SETROLLRANGE_OFFSET UNITYSDK_OFFSET(0xC7897F0)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC___IFIXBASEPROXY_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xC789A30)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC___IFIXBASEPROXY__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xC789A80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGamblePersonaSlotMachineFunc_TypeDefinitionIndex = 62860;

	class RogueGamblePersonaSlotMachineFunc : public ::RPG::Client::RogueGambleBaseFunc
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueGamblePersonaSlotMachineFunc* Create(::Class_1_AA7A9E067CD84C14* a1)
		{
			return ((::RPG::Client::RogueGamblePersonaSlotMachineFunc*(*)(::Class_1_AA7A9E067CD84C14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_CREATE_OFFSET))(a1);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Void _SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__SETMACHINETYPE_OFFSET))(this);
		}

		::System::Void _SetRollRange(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__SETROLLRANGE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LuaUIController* __iFixBaseProxy_OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC___IFIXBASEPROXY_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC___IFIXBASEPROXY__SETMACHINETYPE_OFFSET))(this);
		}
	};
}
