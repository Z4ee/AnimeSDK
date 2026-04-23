#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleBaseFunc.h"

class Class_1_A16A135FC5A0DDB9_3;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_CREATE_OFFSET UNITYSDK_OFFSET(0xB03B940)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xB03B9E0)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0xB03BF60)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0xB03BB80)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0xB03C000)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xB03B9D0)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__SETFORTUNEWHEELGACHAREWARDANDROLL_OFFSET UNITYSDK_OFFSET(0xB03C260)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xB03C330)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xB03C380)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0xB03C420)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0xB03C3D0)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0xB03C460)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xB03C4A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleFortuneWheelFunc_TypeDefinitionIndex = 61938;

	class RogueGambleFortuneWheelFunc : public ::RPG::Client::RogueGambleBaseFunc
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueGambleFortuneWheelFunc* Create(::Class_1_A16A135FC5A0DDB9_3* proto)
		{
			return ((::RPG::Client::RogueGambleFortuneWheelFunc*(*)(::Class_1_A16A135FC5A0DDB9_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_CREATE_OFFSET))(proto);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}

		::System::Void SetupPropTexture(::System::Action* failCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_SETUPPROPTEXTURE_OFFSET))(this, failCallBack);
		}

		::System::Void ReleaseSprite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_RELEASESPRITE_OFFSET))(this);
		}

		::System::Void TriggerPropRoll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_TRIGGERPROPROLL_OFFSET))(this);
		}

		::System::Void _SetFortuneWheelGachaRewardAndRoll(::RPG::GameCore::PropComponent* propCmpt, ::System::Int32 targetValue, ::System::Collections::Generic::List_1<::System::Int32>* deltaNum)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__SETFORTUNEWHEELGACHAREWARDANDROLL_OFFSET))(this, propCmpt, targetValue, deltaNum);
		}

		::System::Void _SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__SETMACHINETYPE_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* __iFixBaseProxy_OpenFuncUIPage(::System::UInt32 P0)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_OPENFUNCUIPAGE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetupPropTexture(::System::Action* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_SETUPPROPTEXTURE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ReleaseSprite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_RELEASESPRITE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TriggerPropRoll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_TRIGGERPROPROLL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY__SETMACHINETYPE_OFFSET))(this);
		}
	};
}
