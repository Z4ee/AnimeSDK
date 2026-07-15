#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/WaterLevelAreaInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class WaterLevelBoxItem; }
namespace RPG::Client::Prop { class WaterLevelPuzzleBoardPlus; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_CANITEMMOVE_OFFSET UNITYSDK_OFFSET(0x161249C0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16125790)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_DUMPSAVEDATA_OFFSET UNITYSDK_OFFSET(0x16122930)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_GETITEM_OFFSET UNITYSDK_OFFSET(0x16124640)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITBOXMANWITHSAVEDATA_OFFSET UNITYSDK_OFFSET(0x16122A30)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITCHANGEWATERLEVEL_OFFSET UNITYSDK_OFFSET(0x16123210)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITITEMS_OFFSET UNITYSDK_OFFSET(0x161227A0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0x16122C20)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x16122DA0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITWATERLEVEL_OFFSET UNITYSDK_OFFSET(0x16123190)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_ITEM2BOARDLOCAL_OFFSET UNITYSDK_OFFSET(0x16121ED0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_0485642989684DA8_OFFSET UNITYSDK_OFFSET(0x16124B30)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_1F8838DB7F586784_OFFSET UNITYSDK_OFFSET(0x16123AC0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x16122E70)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_66746A96792CE392_OFFSET UNITYSDK_OFFSET(0x16124BC0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_66FF6A49D33160A6_OFFSET UNITYSDK_OFFSET(0x16123CE0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_71912DBB0D113575_1_OFFSET UNITYSDK_OFFSET(0x16124760)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_71912DBB0D113575_OFFSET UNITYSDK_OFFSET(0x161246E0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x16123C10)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_D5A1784FA4448BA9_OFFSET UNITYSDK_OFFSET(0x161252D0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_DA79A5A83B1812EC_OFFSET UNITYSDK_OFFSET(0x16123790)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_DA8DF0AEAF419758_OFFSET UNITYSDK_OFFSET(0x161235F0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_E21C737250B730B9_OFFSET UNITYSDK_OFFSET(0x161239F0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0x16122300)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_ONITEMMOVE_OFFSET UNITYSDK_OFFSET(0x16124F20)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x16125380)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_STARTANIMCHANGEWATERLEVEL_OFFSET UNITYSDK_OFFSET(0x161234C0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_STARTCHANGEWATERLEVELIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x161236C0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_TICK_OFFSET UNITYSDK_OFFSET(0x16123EC0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_WORLDFORWARDRIGHT2DIR_OFFSET UNITYSDK_OFFSET(0x161247E0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_WORLDPOSITION2COORD_OFFSET UNITYSDK_OFFSET(0x16123E10)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x16125960)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN__CTOR_OFFSET UNITYSDK_OFFSET(0x16125860)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelBoxman_TypeDefinitionIndex = 74958;

	class WaterLevelBoxman : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet_Field_5_0()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(WaterLevelBoxman_TypeDefinitionIndex)->GetStaticField(0x5090);
		}
		// static const ::System::String* Field_5_1; // 0x0
		// static const ::System::String* Field_5_2; // 0x0
		// static const ::System::String* Field_5_3; // 0x0
		// static const ::System::String* Field_5_4; // 0x0
		::UnityEngine::Vector3 Origin; // 0x18
		::UnityEngine::Vector3 Forward; // 0x24
		::UnityEngine::Vector3 Right; // 0x30
		::System::Single GridSize; // 0x3C
		::System::Int32 MaxRow; // 0x40
		::System::Int32 MaxCol; // 0x44
		::Il2CppArray<::RPG::Client::Prop::WaterLevelAreaInfo>* WaterLevelAreaInfos; // 0x48
		::System::Single WaterHeight; // 0x50
		::System::Single WaterUpSpeed; // 0x54
		::System::String* OnEnterCustomString; // 0x58
		::System::String* OnExitCustomString; // 0x60
		::RPG::GameCore::PropOptionTrigger_ButtonParam* Field_5_16; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTriggerInfo*>* Field_5_17; // 0x70
		::RPG::GameCore::OptionTriggerInfo* Field_5_18; // 0x78
		::RPG::GameCore::OptionTriggerInfo* Field_5_19; // 0x80
		::RPG::GameCore::OptionTriggerInfo* Field_5_20; // 0x88
		::RPG::GameCore::OptionTriggerInfo* Field_5_21; // 0x90
		::RPG::Client::Prop::WaterLevelBoxItem* Field_5_22; // 0x98
		::RPG::Client::Prop::WaterLevelPuzzleBoardPlus* Field_5_23; // 0xA0
		::System::Boolean Field_5_24; // 0xA8
		::System::Boolean Field_5_25; // 0xA9
		::System::Boolean Field_5_26; // 0xAA
		::RPG::Client::Prop::BoxmanCoord Field_5_27; // 0xAC
		::UnityEngine::Vector3 Field_5_28; // 0xB4
		::System::Boolean Field_5_29; // 0xC0
		::System::Boolean Field_5_30; // 0xC1
		::System::Boolean Field_5_31; // 0xC2
		::Il2CppArray<::RPG::Client::Prop::WaterLevelBoxItem*>* Field_5_32; // 0xC8
		::Il2CppArray<::RPG::Client::Prop::WaterLevelBoxItem*>* Field_5_33; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN__CCTOR_OFFSET))();
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITITEMS_OFFSET))(this);
		}

		::System::Void DumpSaveData(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_DUMPSAVEDATA_OFFSET))(this, a1);
		}

		::System::Void InitBoxmanWithSaveData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITBOXMANWITHSAVEDATA_OFFSET))(this, a1);
		}

		::System::Void InitOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITOPTIONS_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::Client::Prop::WaterLevelPuzzleBoardPlus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WaterLevelPuzzleBoardPlus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITPUZZLE_OFFSET))(this, a1);
		}

		::System::Void InitWaterLevel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITWATERLEVEL_OFFSET))(this, a1);
		}

		::System::Void InitChangeWaterLevel(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITCHANGEWATERLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void StartAnimChangeWaterLevel(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_STARTANIMCHANGEWATERLEVEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartChangeWaterLevelImmediate(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_STARTCHANGEWATERLEVELIMMEDIATE_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_5_DA8DF0AEAF419758(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_DA8DF0AEAF419758_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_5_E21C737250B730B9(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_E21C737250B730B9_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_DA79A5A83B1812EC(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_DA79A5A83B1812EC_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_2450CFC043E97F54_OFFSET))(this);
		}

		::RPG::GameCore::OptionTriggerInfo* Method_5_1F8838DB7F586784(::RPG::Client::Prop::WaterLevelBoxItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::RPG::GameCore::OptionTriggerInfo*(*)(::PVOID, ::RPG::Client::Prop::WaterLevelBoxItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_1F8838DB7F586784_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Boolean Method_5_66FF6A49D33160A6(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_66FF6A49D33160A6_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_71912DBB0D113575()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_71912DBB0D113575_OFFSET))(this);
		}

		::System::Void Method_5_71912DBB0D113575_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_71912DBB0D113575_1_OFFSET))(this);
		}

		::System::Void Method_5_66746A96792CE392(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_66746A96792CE392_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Item2BoardLocal(::RPG::Client::Prop::WaterLevelBoxItem* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::WaterLevelBoxItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_ITEM2BOARDLOCAL_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanCoord WorldPosition2Coord(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::Prop::BoxmanCoord(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_WORLDPOSITION2COORD_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanDir WorldForwardRight2Dir(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::Prop::BoxmanDir(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_WORLDFORWARDRIGHT2DIR_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::WaterLevelBoxItem* GetItem(::RPG::Client::Prop::BoxmanCoord a1)
		{
			return ((::RPG::Client::Prop::WaterLevelBoxItem*(*)(::PVOID, ::RPG::Client::Prop::BoxmanCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_GETITEM_OFFSET))(this, a1);
		}

		::System::Void OnItemMove(::RPG::Client::Prop::WaterLevelBoxItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WaterLevelBoxItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_ONITEMMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_0485642989684DA8(::RPG::Client::Prop::WaterLevelBoxItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WaterLevelBoxItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_0485642989684DA8_OFFSET))(this, a1);
		}

		::System::Void OnItemMoveFinish(::RPG::Client::Prop::WaterLevelBoxItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WaterLevelBoxItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_ONITEMMOVEFINISH_OFFSET))(this, a1);
		}

		::System::Boolean CanItemMove(::RPG::Client::Prop::WaterLevelBoxItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::WaterLevelBoxItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_CANITEMMOVE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_D5A1784FA4448BA9(::RPG::Client::Prop::BoxmanCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_D5A1784FA4448BA9_OFFSET))(this, a1);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELBOXMAN_DISPOSE_OFFSET))(this);
		}
	};
}
