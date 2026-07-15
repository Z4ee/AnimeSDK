#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleBaseFunc.h"

class Class_1_E577B5580A99D425_4;
namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC_CREATE_OFFSET UNITYSDK_OFFSET(0x1A45C2A0)
#define RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0x1A45C3E0)
#define RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45C340)
#define RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0x1A45C540)
#define RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC__SETROLLRANGE_OFFSET UNITYSDK_OFFSET(0x1A45C350)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGamblePersonaFortuneWheelFunc_TypeDefinitionIndex = 64226;

	class RogueGamblePersonaFortuneWheelFunc : public ::RPG::Client::RogueGambleBaseFunc
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueGamblePersonaFortuneWheelFunc* Create(::Class_1_E577B5580A99D425_4* a1)
		{
			return ((::RPG::Client::RogueGamblePersonaFortuneWheelFunc*(*)(::Class_1_E577B5580A99D425_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC_CREATE_OFFSET))(a1);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Void _SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC__SETMACHINETYPE_OFFSET))(this);
		}

		::System::Void _SetRollRange(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONAFORTUNEWHEELFUNC__SETROLLRANGE_OFFSET))(this, a1, a2);
		}
	};
}
