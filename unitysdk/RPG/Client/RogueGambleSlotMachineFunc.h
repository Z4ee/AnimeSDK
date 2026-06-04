#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleBaseFunc.h"

class Class_1_AA7A9E067CD84C14;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_CREATE_OFFSET UNITYSDK_OFFSET(0xC789AD0)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xC789B70)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0xC789F60)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0xC789CD0)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0xC78A010)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xC789B60)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xC78A620)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__SETSLOTMACHINEREWARDANDROLL_OFFSET UNITYSDK_OFFSET(0xC78A220)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xC78A670)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0xC78A710)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0xC78A6C0)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0xC78A750)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xC78A790)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleSlotMachineFunc_TypeDefinitionIndex = 62870;

	class RogueGambleSlotMachineFunc : public ::RPG::Client::RogueGambleBaseFunc
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueGambleSlotMachineFunc* Create(::Class_1_AA7A9E067CD84C14* a1)
		{
			return ((::RPG::Client::RogueGambleSlotMachineFunc*(*)(::Class_1_AA7A9E067CD84C14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_CREATE_OFFSET))(a1);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Void SetupPropTexture(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_SETUPPROPTEXTURE_OFFSET))(this, a1);
		}

		::System::Void ReleaseSprite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_RELEASESPRITE_OFFSET))(this);
		}

		::System::Void TriggerPropRoll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_TRIGGERPROPROLL_OFFSET))(this);
		}

		::System::Void _SetSlotMachineRewardAndRoll(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__SETSLOTMACHINEREWARDANDROLL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__SETMACHINETYPE_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* __iFixBaseProxy_OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_SetupPropTexture(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_SETUPPROPTEXTURE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_ReleaseSprite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_RELEASESPRITE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TriggerPropRoll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_TRIGGERPROPROLL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY__SETMACHINETYPE_OFFSET))(this);
		}
	};
}
