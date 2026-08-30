#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleStaticItemBase.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_DELAYSHOW_OFFSET UNITYSDK_OFFSET(0x17B3EF80)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_METHOD_7_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17B41380)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_METHOD_7_8F54650C0C7FD373_OFFSET UNITYSDK_OFFSET(0x17B41030)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17B41300)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0x17B35BF0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_SETTREASUREACTIVE_OFFSET UNITYSDK_OFFSET(0x17B39C00)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_SETTRIGGERTREASURE_OFFSET UNITYSDK_OFFSET(0x17B41140)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B41420)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x17B413E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleTreasureBox_TypeDefinitionIndex = 78464;

	class WormCompassPuzzleTreasureBox : public ::RPG::Client::Prop::WormCompassPuzzleStaticItemBase
	{
	public:
		static ::System::Int32* StaticGet_DKPOBPLFDLF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleTreasureBox_TypeDefinitionIndex)->GetStaticField(0x14FA0);
		}
		static ::System::Int32* StaticGet_CKAMKIFGFKG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleTreasureBox_TypeDefinitionIndex)->GetStaticField(0x14FA4);
		}
		static ::System::Int32* StaticGet_BABGGLPLPEO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleTreasureBox_TypeDefinitionIndex)->GetStaticField(0x14FA8);
		}
		// static const ::System::String* BCIPGAEACBK; // 0x0
		::System::String* BoxName; // 0x48
		::System::UInt32 GroupID; // 0x50
		::System::UInt32 EntityID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX__CCTOR_OFFSET))();
		}

		::System::Void RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_REFRESHOBJECTSTATUS_OFFSET))(this);
		}

		::System::Void DelayShow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_DELAYSHOW_OFFSET))(this, a1);
		}

		::System::Void SetTreasureActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_SETTREASUREACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetTriggerTreasure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_SETTRIGGERTREASURE_OFFSET))(this);
		}

		::System::Void Method_7_8F54650C0C7FD373(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_METHOD_7_8F54650C0C7FD373_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_7_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_METHOD_7_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
