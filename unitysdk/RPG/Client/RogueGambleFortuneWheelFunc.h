#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleBaseFunc.h"

class Class_1_E577B5580A99D425_4;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_CREATE_OFFSET UNITYSDK_OFFSET(0x1B679490)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0x1B679530)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0x1B679A80)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B679690)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0x1B679B10)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B679520)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__SETFORTUNEWHEELGACHAREWARDANDROLL_OFFSET UNITYSDK_OFFSET(0x1B679D90)
#define RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0x1B679E90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleFortuneWheelFunc_TypeDefinitionIndex = 67233;

	class RogueGambleFortuneWheelFunc : public ::RPG::Client::RogueGambleBaseFunc
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueGambleFortuneWheelFunc* Create(::Class_1_E577B5580A99D425_4* a1)
		{
			return ((::RPG::Client::RogueGambleFortuneWheelFunc*(*)(::Class_1_E577B5580A99D425_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEFORTUNEWHEELFUNC_CREATE_OFFSET))(a1);
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
	};
}
