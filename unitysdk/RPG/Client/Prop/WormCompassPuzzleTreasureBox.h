#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleStaticItemBase.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_DELAYSHOW_OFFSET UNITYSDK_OFFSET(0xA193BB0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_METHOD_7_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA195EE0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_METHOD_7_4CB186C725DC0781_OFFSET UNITYSDK_OFFSET(0xA195AA0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA195E60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0xA18B4D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_SETTREASUREACTIVE_OFFSET UNITYSDK_OFFSET(0xA18E960)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_SETTRIGGERTREASURE_OFFSET UNITYSDK_OFFSET(0xA195C30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX__CCTOR_OFFSET UNITYSDK_OFFSET(0xA195F80)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX__CTOR_OFFSET UNITYSDK_OFFSET(0xA195F40)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX___IFIXBASEPROXY_DELAYSHOW_OFFSET UNITYSDK_OFFSET(0xA196010)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX___IFIXBASEPROXY_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0xA196000)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleTreasureBox_TypeDefinitionIndex = 64385;

	class WormCompassPuzzleTreasureBox : public ::RPG::Client::Prop::WormCompassPuzzleStaticItemBase
	{
	public:
		static ::System::Int32* StaticGet_Field_7_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleTreasureBox_TypeDefinitionIndex)->GetStaticField(0x4830);
		}
		static ::System::Int32* StaticGet_Field_7_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleTreasureBox_TypeDefinitionIndex)->GetStaticField(0x4834);
		}
		static ::System::Int32* StaticGet_Field_7_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleTreasureBox_TypeDefinitionIndex)->GetStaticField(0x4838);
		}
		// static const ::System::String* Field_7_6; // 0x0
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

		::System::Void Method_7_4CB186C725DC0781(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_METHOD_7_4CB186C725DC0781_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_7_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX_METHOD_7_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX___IFIXBASEPROXY_REFRESHOBJECTSTATUS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DelayShow(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLETREASUREBOX___IFIXBASEPROXY_DELAYSHOW_OFFSET))(this, P0);
		}
	};
}
