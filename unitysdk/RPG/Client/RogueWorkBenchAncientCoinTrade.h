#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_5B567C8A01BAEDFE_319;
namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xE057690)
#define RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xE057650)
#define RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0xE057910)
#define RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_GET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0xE057930)
#define RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xE0576D0)
#define RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_REFRESH_OFFSET UNITYSDK_OFFSET(0xE0575F0)
#define RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_SET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0xE057920)
#define RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_SET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0xE057940)
#define RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0575E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchAncientCoinTrade_TypeDefinitionIndex = 67351;

	class RogueWorkBenchAncientCoinTrade : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueWorkbenchFuncType _FuncType; // 0x10
		::System::UInt32 _FuncID; // 0x14
		::System::Boolean _IsDisable_k__BackingField; // 0x18
		::System::UInt32 _PropEntityID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_5B567C8A01BAEDFE_319* a2, ::RPG::GameCore::RogueWorkbenchFuncType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_5B567C8A01BAEDFE_319*, ::RPG::GameCore::RogueWorkbenchFuncType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchAncientCoinTrade* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchAncientCoinTrade*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_REFRESH_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_GET_ISDISABLE_OFFSET))(this);
		}

		::System::Void set_IsDisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_SET_ISDISABLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PropEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_GET_PROPENTITYID_OFFSET))(this);
		}

		::System::Void set_PropEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHANCIENTCOINTRADE_SET_PROPENTITYID_OFFSET))(this, a1);
		}
	};
}
