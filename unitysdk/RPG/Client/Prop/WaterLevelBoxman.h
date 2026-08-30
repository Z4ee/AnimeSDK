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

#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_CANITEMMOVE_OFFSET UNITYSDK_OFFSET(0xDD4A210)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD4AFE0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_DUMPSAVEDATA_OFFSET UNITYSDK_OFFSET(0xDD48180)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_GETITEM_OFFSET UNITYSDK_OFFSET(0xDD49E90)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITBOXMANWITHSAVEDATA_OFFSET UNITYSDK_OFFSET(0xDD48280)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITCHANGEWATERLEVEL_OFFSET UNITYSDK_OFFSET(0xDD48A60)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITITEMS_OFFSET UNITYSDK_OFFSET(0xDD47FF0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xDD48470)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD485F0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_INITWATERLEVEL_OFFSET UNITYSDK_OFFSET(0xDD489E0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_ITEM2BOARDLOCAL_OFFSET UNITYSDK_OFFSET(0xDD47720)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_0485642989684DA8_OFFSET UNITYSDK_OFFSET(0xDD4A380)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_1F8838DB7F586784_OFFSET UNITYSDK_OFFSET(0xDD49310)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xDD486C0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_66746A96792CE392_OFFSET UNITYSDK_OFFSET(0xDD4A410)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_66FF6A49D33160A6_OFFSET UNITYSDK_OFFSET(0xDD49530)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_71912DBB0D113575_1_OFFSET UNITYSDK_OFFSET(0xDD49FB0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_71912DBB0D113575_OFFSET UNITYSDK_OFFSET(0xDD49F30)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xDD49460)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_D5A1784FA4448BA9_OFFSET UNITYSDK_OFFSET(0xDD4AB20)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_DA79A5A83B1812EC_OFFSET UNITYSDK_OFFSET(0xDD48FE0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_DA8DF0AEAF419758_OFFSET UNITYSDK_OFFSET(0xDD48E40)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_METHOD_5_E21C737250B730B9_OFFSET UNITYSDK_OFFSET(0xDD49240)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0xDD47B50)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_ONITEMMOVE_OFFSET UNITYSDK_OFFSET(0xDD4A770)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD4ABD0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_STARTANIMCHANGEWATERLEVEL_OFFSET UNITYSDK_OFFSET(0xDD48D10)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_STARTCHANGEWATERLEVELIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xDD48F10)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_TICK_OFFSET UNITYSDK_OFFSET(0xDD49710)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_WORLDFORWARDRIGHT2DIR_OFFSET UNITYSDK_OFFSET(0xDD4A030)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN_WORLDPOSITION2COORD_OFFSET UNITYSDK_OFFSET(0xDD49660)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN__CCTOR_OFFSET UNITYSDK_OFFSET(0xDD4B1B0)
#define RPG_CLIENT_PROP_WATERLEVELBOXMAN__CTOR_OFFSET UNITYSDK_OFFSET(0xDD4B0B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelBoxman_TypeDefinitionIndex = 78444;

	class WaterLevelBoxman : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet_FIEKDOEEMCP()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(WaterLevelBoxman_TypeDefinitionIndex)->GetStaticField(0x150B0);
		}
		// static const ::System::String* FDMBKAAFMPE; // 0x0
		// static const ::System::String* GICCJAELDIF; // 0x0
		// static const ::System::String* IDGNMCLLEBD; // 0x0
		// static const ::System::String* DLNNPLNNHFH; // 0x0
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
		::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTriggerInfo*>* NJJEFAFJGBK; // 0x70
		::RPG::GameCore::OptionTriggerInfo* ACELEFOBNON; // 0x78
		::RPG::GameCore::OptionTriggerInfo* OBIIFLPGAFB; // 0x80
		::RPG::GameCore::OptionTriggerInfo* APBGNCMEGEO; // 0x88
		::RPG::GameCore::OptionTriggerInfo* CEKKMDBDCBP; // 0x90
		::RPG::Client::Prop::WaterLevelBoxItem* LACGNAOCENP; // 0x98
		::RPG::Client::Prop::WaterLevelPuzzleBoardPlus* COAMCKILKPH; // 0xA0
		::System::Boolean DIOEAJEHHND; // 0xA8
		::System::Boolean OOFAMMJEKLC; // 0xA9
		::System::Boolean DALKJPIGDNO; // 0xAA
		::RPG::Client::Prop::BoxmanCoord PJDCBCDLLFN; // 0xAC
		::UnityEngine::Vector3 NCALLJIMKMA; // 0xB4
		::System::Boolean DCOLDLGBJKE; // 0xC0
		::System::Boolean PADKGHDPECC; // 0xC1
		::System::Boolean OGIMPEPMDIL; // 0xC2
		::Il2CppArray<::RPG::Client::Prop::WaterLevelBoxItem*>* PGHEGHLPIDH; // 0xC8
		::Il2CppArray<::RPG::Client::Prop::WaterLevelBoxItem*>* NMLACFJGNFP; // 0xD0

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
