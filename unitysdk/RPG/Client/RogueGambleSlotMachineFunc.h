#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleBaseFunc.h"

class Class_1_A16A135FC5A0DDB9_3;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_CREATE_OFFSET UNITYSDK_OFFSET(0xA3064C0)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xA306560)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0xA306940)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0xA306700)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0xA306A00)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xA306550)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xA306FE0)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__SETSLOTMACHINEREWARDANDROLL_OFFSET UNITYSDK_OFFSET(0xA306C10)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xA307030)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0xA3070D0)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0xA307080)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0xA307110)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xA307150)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleSlotMachineFunc_TypeDefinitionIndex = 54749;

	class RogueGambleSlotMachineFunc : public ::RPG::Client::RogueGambleBaseFunc
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueGambleSlotMachineFunc* Create(::Class_1_A16A135FC5A0DDB9_3* proto)
		{
			return ((::RPG::Client::RogueGambleSlotMachineFunc*(*)(::Class_1_A16A135FC5A0DDB9_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_CREATE_OFFSET))(proto);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}

		::System::Void SetupPropTexture(::System::Action* failCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_SETUPPROPTEXTURE_OFFSET))(this, failCallBack);
		}

		::System::Void ReleaseSprite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_RELEASESPRITE_OFFSET))(this);
		}

		::System::Void TriggerPropRoll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_TRIGGERPROPROLL_OFFSET))(this);
		}

		::System::Void _SetSlotMachineRewardAndRoll(::RPG::GameCore::PropComponent* propCmpt, ::System::Boolean isEmpty, ::System::Int32 targetRewardIndex, ::System::Collections::Generic::List_1<::System::Int32>* deltaNumList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__SETSLOTMACHINEREWARDANDROLL_OFFSET))(this, propCmpt, isEmpty, targetRewardIndex, deltaNumList);
		}

		::System::Void _SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__SETMACHINETYPE_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* __iFixBaseProxy_OpenFuncUIPage(::System::UInt32 P0)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_OPENFUNCUIPAGE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetupPropTexture(::System::Action* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC___IFIXBASEPROXY_SETUPPROPTEXTURE_OFFSET))(this, P0);
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
