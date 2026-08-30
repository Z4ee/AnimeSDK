#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/BoxmanItemType.h"
#include "unitysdk/RPG/Client/Prop/BoxmanPuzzlePlayerInBoardState.h"
#include "unitysdk/RPG/Client/Prop/ScenePuzzleBoardBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_218;
namespace RPG::Client::Prop { class BoxmanPuzzleItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_CANITEMMOVE_OFFSET UNITYSDK_OFFSET(0xDBE4E50)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_DIFFBYDIR_OFFSET UNITYSDK_OFFSET(0xDBE2B40)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBE73E0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETITEM_1_OFFSET UNITYSDK_OFFSET(0xDBE5E50)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETITEM_OFFSET UNITYSDK_OFFSET(0xDBE2BE0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETTARGETS_OFFSET UNITYSDK_OFFSET(0xDBE5EF0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_ISINITFINISH_OFFSET UNITYSDK_OFFSET(0xDBE76F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_ISPLAYERINBOARD_OFFSET UNITYSDK_OFFSET(0xDBE76D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xDBE76C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xDBE19C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xDBE3600)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDBE38E0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDBE1970)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ITEM2BOARDLOCAL_OFFSET UNITYSDK_OFFSET(0xDBE5D90)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xDBE5F30)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_0946D2F262750751_OFFSET UNITYSDK_OFFSET(0xDBE5010)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_0ADBC77B680FE490_OFFSET UNITYSDK_OFFSET(0xDBE2C80)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_19A6F9F49071E3E5_OFFSET UNITYSDK_OFFSET(0xDBE2CF0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_1D6B195952ACC491_OFFSET UNITYSDK_OFFSET(0xDBE6170)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0xDBE3860)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_2A73302F5D8B0BA6_OFFSET UNITYSDK_OFFSET(0xDBE49A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_32C5261E07045C34_OFFSET UNITYSDK_OFFSET(0xDBE3E50)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_43D0E6660B80632D_OFFSET UNITYSDK_OFFSET(0xDBE5090)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xDBE6290)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_6AFFB1E44562AD3E_OFFSET UNITYSDK_OFFSET(0xDBE3C10)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_86F29E33B77959FF_OFFSET UNITYSDK_OFFSET(0xDBE5F70)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xDBE4BC0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDBE4B20)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xDBE3780)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xDBE3D70)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_DBBF8A9CF80D2D00_OFFSET UNITYSDK_OFFSET(0xDBE6030)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_FC05223F7346C23F_OFFSET UNITYSDK_OFFSET(0xDBE3380)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0xDBE69A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ONITEMMOVE_OFFSET UNITYSDK_OFFSET(0xDBE55F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xDBE2D60)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDBE6A10)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_SET_ISINITFINISH_OFFSET UNITYSDK_OFFSET(0xDBE7700)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_SET_ISPLAYERINBOARD_OFFSET UNITYSDK_OFFSET(0xDBE76E0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDBE4040)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_WORLDFORWARDRIGHT2DIR_OFFSET UNITYSDK_OFFSET(0xDBE4C50)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_WORLDPOSITION2COORD_OFFSET UNITYSDK_OFFSET(0xDBE3F20)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xDBE78B0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDBE7710)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleBoard_TypeDefinitionIndex = 78374;

	class BoxmanPuzzleBoard : public ::RPG::Client::Prop::ScenePuzzleBoardBase
	{
	public:
		static ::System::Single* StaticGet_FIEKDOEEMCP()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BoxmanPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14210);
		}
		// static const ::System::String* FDMBKAAFMPE; // 0x0
		// static const ::System::String* GICCJAELDIF; // 0x0
		// static const ::System::String* IDGNMCLLEBD; // 0x0
		// static const ::System::String* DLNNPLNNHFH; // 0x0
		// static const ::System::String* CJDIFCBFIAB; // 0x0
		::System::Int32 DJHIOIJFCOF; // 0x50
		::System::Boolean OOFAMMJEKLC; // 0x54
		::System::Boolean DALKJPIGDNO; // 0x55
		::RPG::Client::Prop::BoxmanCoord PJDCBCDLLFN; // 0x58
		::UnityEngine::Vector3 NCALLJIMKMA; // 0x60
		::Il2CppArray<::RPG::Client::Prop::BoxmanPuzzleItem*>* PGHEGHLPIDH; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::Prop::BoxmanPuzzleItem*>* KPJHIOKBJEI; // 0x78
		::UnityEngine::Vector3 Origin; // 0x80
		::UnityEngine::Vector3 Forward; // 0x8C
		::UnityEngine::Vector3 Right; // 0x98
		::System::Single GridSize; // 0xA4
		::System::Int32 MaxRow; // 0xA8
		::System::Int32 MaxCol; // 0xAC
		::System::String* BoxStartMoveSoundName; // 0xB0
		::System::String* BoxArriveTargetSoundName; // 0xB8
		::System::Boolean PuzzleFinish; // 0xC0
		::Il2CppArray<::System::Boolean>* LOCGLGJOKLG; // 0xC8
		::Il2CppArray<::System::Boolean>* LMJOFGDAFFH; // 0xD0
		::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0xD8
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTriggerInfo*>* NJJEFAFJGBK; // 0xE0
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTriggerInfo*>* BALCECDAEJD; // 0xE8
		::RPG::GameCore::OptionTriggerInfo* ACELEFOBNON; // 0xF0
		::RPG::GameCore::OptionTriggerInfo* OBIIFLPGAFB; // 0xF8
		::RPG::GameCore::OptionTriggerInfo* APBGNCMEGEO; // 0x100
		::RPG::GameCore::OptionTriggerInfo* CEKKMDBDCBP; // 0x108
		::System::Boolean _IsPlayerInBoard_k__BackingField; // 0x110
		::System::Boolean _IsInitFinish_k__BackingField; // 0x111
		::System::Boolean DHNPPPEBHDC; // 0x112
		::Il2CppArray<::RPG::Client::Prop::BoxmanPuzzlePlayerInBoardState>* PDBOBILIFLF; // 0x118
		::RPG::Client::Prop::BoxmanPuzzleItem* LACGNAOCENP; // 0x120
		::System::Boolean ACIIEAHODKI; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_218* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_218*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
		}

		::System::Boolean Method_7_0ADBC77B680FE490(::RPG::Client::Prop::BoxmanCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_0ADBC77B680FE490_OFFSET))(this, a1);
		}

		::System::Boolean Method_7_19A6F9F49071E3E5(::System::Nullable_1<::RPG::Client::Prop::BoxmanItemType> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::RPG::Client::Prop::BoxmanItemType>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_19A6F9F49071E3E5_OFFSET))(this, a1);
		}

		::System::Void InitOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITOPTIONS_OFFSET))(this);
		}

		::System::Void Method_7_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_A239DF324AF4215D_OFFSET))(this);
		}

		::System::UInt32 Method_7_2372762F4122DEB8()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_2372762F4122DEB8_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::OptionTriggerInfo* Method_7_6AFFB1E44562AD3E(::RPG::Client::Prop::BoxmanPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::RPG::GameCore::OptionTriggerInfo*(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_6AFFB1E44562AD3E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Boolean Method_7_32C5261E07045C34(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_32C5261E07045C34_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void Method_7_43D0E6660B80632D(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_43D0E6660B80632D_OFFSET))(this, a1);
		}

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_7_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_9681042564541CD6_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 Item2BoardLocal(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ITEM2BOARDLOCAL_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanCoord WorldPosition2Coord(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::Prop::BoxmanCoord(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_WORLDPOSITION2COORD_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanDir WorldForwardRight2Dir(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::Prop::BoxmanDir(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_WORLDFORWARDRIGHT2DIR_OFFSET))(this, a1);
		}

		static ::RPG::Client::Prop::BoxmanCoord DiffByDir(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::RPG::Client::Prop::BoxmanCoord(*)(::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_DIFFBYDIR_OFFSET))(a1);
		}

		::RPG::Client::Prop::BoxmanPuzzleItem* GetItem(::RPG::Client::Prop::BoxmanCoord a1)
		{
			return ((::RPG::Client::Prop::BoxmanPuzzleItem*(*)(::PVOID, ::RPG::Client::Prop::BoxmanCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETITEM_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::BoxmanPuzzleItem* GetItem_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::BoxmanPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::BoxmanPuzzleItem*>* GetTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::BoxmanPuzzleItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETTARGETS_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MARKDIRTY_OFFSET))(this);
		}

		::System::Boolean Method_7_86F29E33B77959FF(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_86F29E33B77959FF_OFFSET))(this, a1);
		}

		::System::Boolean Method_7_DBBF8A9CF80D2D00()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_DBBF8A9CF80D2D00_OFFSET))(this);
		}

		::System::Int32 Method_7_1D6B195952ACC491()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_1D6B195952ACC491_OFFSET))(this);
		}

		::System::Boolean Method_7_2A73302F5D8B0BA6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_2A73302F5D8B0BA6_OFFSET))(this);
		}

		::System::Void Method_7_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void OnItemMove(::RPG::Client::Prop::BoxmanPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ONITEMMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_FC05223F7346C23F(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_FC05223F7346C23F_OFFSET))(this, a1);
		}

		::System::Void Method_7_0946D2F262750751(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_0946D2F262750751_OFFSET))(this, a1);
		}

		::System::Void OnItemMoveFinish(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ONITEMMOVEFINISH_OFFSET))(this, a1);
		}

		::System::Boolean CanItemMove(::RPG::Client::Prop::BoxmanPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_CANITEMMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_StartTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_STARTTIME_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerInBoard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_ISPLAYERINBOARD_OFFSET))(this);
		}

		::System::Void set_IsPlayerInBoard(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_SET_ISPLAYERINBOARD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInitFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_ISINITFINISH_OFFSET))(this);
		}

		::System::Void set_IsInitFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_SET_ISINITFINISH_OFFSET))(this, a1);
		}
	};
}
