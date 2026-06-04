#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleBaseFunc.h"

class Class_1_AA7A9E067CD84C14;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_CREATE_OFFSET UNITYSDK_OFFSET(0xC788410)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xC7884B0)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0xC788910)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0xC788610)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0xC7889A0)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xC7884A0)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__SETFORTUNEWHEELGACHAREWARDANDROLL_OFFSET UNITYSDK_OFFSET(0xC788C20)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xC788D20)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xC788D70)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0xC788E10)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0xC788DC0)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0xC788E50)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xC788E90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleFortuneWheelFunc_TypeDefinitionIndex = 62871;

	class RogueGambleFortuneWheelFunc : public ::RPG::Client::RogueGambleBaseFunc
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueGambleFortuneWheelFunc* Create(::Class_1_AA7A9E067CD84C14* a1)
		{
			return ((::RPG::Client::RogueGambleFortuneWheelFunc*(*)(::Class_1_AA7A9E067CD84C14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_CREATE_OFFSET))(a1);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Void SetupPropTexture(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_SETUPPROPTEXTURE_OFFSET))(this, a1);
		}

		::System::Void ReleaseSprite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_RELEASESPRITE_OFFSET))(this);
		}

		::System::Void TriggerPropRoll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_TRIGGERPROPROLL_OFFSET))(this);
		}

		::System::Void _SetFortuneWheelGachaRewardAndRoll(::RPG::GameCore::PropComponent* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__SETFORTUNEWHEELGACHAREWARDANDROLL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__SETMACHINETYPE_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* __iFixBaseProxy_OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_SetupPropTexture(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC___IFIXBASEPROXY_SETUPPROPTEXTURE_OFFSET))(this, a1);
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
