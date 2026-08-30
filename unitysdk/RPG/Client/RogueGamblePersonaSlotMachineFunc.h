#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleBaseFunc.h"

class Class_1_E577B5580A99D425_4;
namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_CREATE_OFFSET UNITYSDK_OFFSET(0x1B67A810)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0x1B67A9C0)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B67A920)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0x1B67AB20)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__SETROLLRANGE_OFFSET UNITYSDK_OFFSET(0x1B67A930)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGamblePersonaSlotMachineFunc_TypeDefinitionIndex = 67222;

	class RogueGamblePersonaSlotMachineFunc : public ::RPG::Client::RogueGambleBaseFunc
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueGamblePersonaSlotMachineFunc* Create(::Class_1_E577B5580A99D425_4* a1)
		{
			return ((::RPG::Client::RogueGamblePersonaSlotMachineFunc*(*)(::Class_1_E577B5580A99D425_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_CREATE_OFFSET))(a1);
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
	};
}
