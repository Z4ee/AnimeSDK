#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleStaticItemBase.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_DELAYSHOW_OFFSET UNITYSDK_OFFSET(0x1613FA70)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_METHOD_7_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16141E50)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_METHOD_7_8F54650C0C7FD373_OFFSET UNITYSDK_OFFSET(0x16141B00)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16141DD0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0x16136770)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_SETTREASUREACTIVE_OFFSET UNITYSDK_OFFSET(0x1613A720)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_SETTRIGGERTREASURE_OFFSET UNITYSDK_OFFSET(0x16141C10)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX__CCTOR_OFFSET UNITYSDK_OFFSET(0x16141EF0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x16141EB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleTreasureBox_TypeDefinitionIndex = 74979;

	class WormCompassPuzzleTreasureBox : public ::RPG::Client::Prop::WormCompassPuzzleStaticItemBase
	{
	public:
		static ::System::Int32* StaticGet_Field_7_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleTreasureBox_TypeDefinitionIndex)->GetStaticField(0x54C0);
		}
		static ::System::Int32* StaticGet_Field_7_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleTreasureBox_TypeDefinitionIndex)->GetStaticField(0x54C4);
		}
		static ::System::Int32* StaticGet_Field_7_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleTreasureBox_TypeDefinitionIndex)->GetStaticField(0x54C8);
		}
		// static const ::System::String* Field_7_3; // 0x0
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
