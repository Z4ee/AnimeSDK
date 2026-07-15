#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleBaseFunc.h"

class Class_1_E577B5580A99D425_4;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_CREATE_OFFSET UNITYSDK_OFFSET(0x1A45C880)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0x1A45C920)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0x1A45CD70)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A45CA80)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0x1A45CE20)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45C910)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0x1A45D430)
#define RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__SETSLOTMACHINEREWARDANDROLL_OFFSET UNITYSDK_OFFSET(0x1A45D030)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleSlotMachineFunc_TypeDefinitionIndex = 64237;

	class RogueGambleSlotMachineFunc : public ::RPG::Client::RogueGambleBaseFunc
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueGambleSlotMachineFunc* Create(::Class_1_E577B5580A99D425_4* a1)
		{
			return ((::RPG::Client::RogueGambleSlotMachineFunc*(*)(::Class_1_E577B5580A99D425_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLESLOTMACHINEFUNC_CREATE_OFFSET))(a1);
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
	};
}
