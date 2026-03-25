#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/BoxmanItemType.h"
#include "unitysdk/RPG/Client/Prop/BoxmanPuzzlePlayerInBoardState.h"
#include "unitysdk/RPG/Client/Prop/ScenePuzzleBoardBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_179;
namespace RPG::Client::Prop { class BoxmanPuzzleItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_CANITEMMOVE_OFFSET UNITYSDK_OFFSET(0xA01A6A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_DIFFBYDIR_OFFSET UNITYSDK_OFFSET(0xA018400)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA01CA50)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETITEM_1_OFFSET UNITYSDK_OFFSET(0xA01B620)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETITEM_OFFSET UNITYSDK_OFFSET(0xA0184A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GETTARGETS_OFFSET UNITYSDK_OFFSET(0xA01B6E0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_ISINITFINISH_OFFSET UNITYSDK_OFFSET(0xA01CD50)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_ISPLAYERINBOARD_OFFSET UNITYSDK_OFFSET(0xA01CD30)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xA01CD20)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xA016FF0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xA018E70)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA019140)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA016FA0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ITEM2BOARDLOCAL_OFFSET UNITYSDK_OFFSET(0xA01B560)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xA01B720)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xA01A8E0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_0946D2F262750751_OFFSET UNITYSDK_OFFSET(0xA01A860)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_09526F48C04056C9_OFFSET UNITYSDK_OFFSET(0xA01B830)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_0ADBC77B680FE490_OFFSET UNITYSDK_OFFSET(0xA018560)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_19A6F9F49071E3E5_OFFSET UNITYSDK_OFFSET(0xA0185D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0xA0190C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_32C5261E07045C34_OFFSET UNITYSDK_OFFSET(0xA019680)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xA01BAB0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_4F4232F1E44ED956_OFFSET UNITYSDK_OFFSET(0xA018BF0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_61019C706ABBB921_OFFSET UNITYSDK_OFFSET(0xA01B760)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_6AFFB1E44562AD3E_OFFSET UNITYSDK_OFFSET(0xA0193B0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_6F826D2C1894C968_OFFSET UNITYSDK_OFFSET(0xA01B980)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xA01A410)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA01A370)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xA018FE0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_B8817F4F77EFC234_OFFSET UNITYSDK_OFFSET(0xA01A210)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xA019510)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0xA01C220)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ONITEMMOVE_OFFSET UNITYSDK_OFFSET(0xA01AD60)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xA018640)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA01C290)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_SET_ISINITFINISH_OFFSET UNITYSDK_OFFSET(0xA01CD60)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_SET_ISPLAYERINBOARD_OFFSET UNITYSDK_OFFSET(0xA01CD40)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xA019890)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_WORLDFORWARDRIGHT2DIR_OFFSET UNITYSDK_OFFSET(0xA01A4A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_WORLDPOSITION2COORD_OFFSET UNITYSDK_OFFSET(0xA019770)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xA01CF10)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA01CD70)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA01D080)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA01D000)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA01CF50)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD___IFIXBASEPROXY_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xA01CFF0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA01D020)
#define RPG_CLIENT_PROP_BOXMANPUZZLEBOARD___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xA01D010)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleBoard_TypeDefinitionIndex = 64294;

	class BoxmanPuzzleBoard : public ::RPG::Client::Prop::ScenePuzzleBoardBase
	{
	public:
		static ::System::Single* StaticGet_Field_7_10()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BoxmanPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x12A00);
		}
		// static const ::System::String* Field_7_26; // 0x0
		// static const ::System::String* Field_7_27; // 0x0
		// static const ::System::String* Field_7_28; // 0x0
		// static const ::System::String* Field_7_29; // 0x0
		// static const ::System::String* Field_7_30; // 0x0
		::System::Int32 Field_7_0; // 0x50
		::System::Boolean Field_7_1; // 0x54
		::System::Boolean Field_7_2; // 0x55
		::RPG::Client::Prop::BoxmanCoord Field_7_3; // 0x58
		::UnityEngine::Vector3 Field_7_4; // 0x60
		::Il2CppArray<::RPG::Client::Prop::BoxmanPuzzleItem*>* Field_7_5; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::Prop::BoxmanPuzzleItem*>* Field_7_6; // 0x78
		::UnityEngine::Vector3 Origin; // 0x80
		::UnityEngine::Vector3 Forward; // 0x8C
		::UnityEngine::Vector3 Right; // 0x98
		::System::Single GridSize; // 0xA4
		::System::Int32 MaxRow; // 0xA8
		::System::Int32 MaxCol; // 0xAC
		::System::String* BoxStartMoveSoundName; // 0xB0
		::System::String* BoxArriveTargetSoundName; // 0xB8
		::System::Boolean PuzzleFinish; // 0xC0
		::Il2CppArray<::System::Boolean>* Field_7_17; // 0xC8
		::Il2CppArray<::System::Boolean>* Field_7_18; // 0xD0
		::RPG::GameCore::PropOptionTrigger_ButtonParam* Field_7_19; // 0xD8
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTriggerInfo*>* Field_7_20; // 0xE0
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTriggerInfo*>* Field_7_21; // 0xE8
		::RPG::GameCore::OptionTriggerInfo* Field_7_22; // 0xF0
		::RPG::GameCore::OptionTriggerInfo* Field_7_23; // 0xF8
		::RPG::GameCore::OptionTriggerInfo* Field_7_24; // 0x100
		::RPG::GameCore::OptionTriggerInfo* Field_7_25; // 0x108
		::System::Boolean _IsPlayerInBoard_k__BackingField; // 0x110
		::System::Boolean _IsInitFinish_k__BackingField; // 0x111
		::System::Boolean Field_7_33; // 0x112
		::Il2CppArray<::RPG::Client::Prop::BoxmanPuzzlePlayerInBoardState>* Field_7_34; // 0x118
		::RPG::Client::Prop::BoxmanPuzzleItem* Field_7_35; // 0x120
		::System::Boolean Field_7_36; // 0x128

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

		::System::Void RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_179* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_179*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
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

		::System::Void Method_7_DDA8A2337932DF10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_DDA8A2337932DF10_OFFSET))(this);
		}

		::System::Boolean Method_7_32C5261E07045C34(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_32C5261E07045C34_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void Method_7_022B0D58A3077BF2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_022B0D58A3077BF2_OFFSET))(this, a1);
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

		::System::Boolean Method_7_61019C706ABBB921(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_61019C706ABBB921_OFFSET))(this, a1);
		}

		::System::Boolean Method_7_09526F48C04056C9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_09526F48C04056C9_OFFSET))(this);
		}

		::System::Int32 Method_7_6F826D2C1894C968()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_6F826D2C1894C968_OFFSET))(this);
		}

		::System::Boolean Method_7_B8817F4F77EFC234()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_B8817F4F77EFC234_OFFSET))(this);
		}

		::System::Void Method_7_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void OnItemMove(::RPG::Client::Prop::BoxmanPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_ONITEMMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_4F4232F1E44ED956(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_METHOD_7_4F4232F1E44ED956_OFFSET))(this, a1);
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

		::System::Void set_IsPlayerInBoard(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_SET_ISPLAYERINBOARD_OFFSET))(this, value);
		}

		::System::Boolean get_IsInitFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_GET_ISINITFINISH_OFFSET))(this);
		}

		::System::Void set_IsInitFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD_SET_ISINITFINISH_OFFSET))(this, value);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_179* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_179*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD___IFIXBASEPROXY_RECOVERFROMPUZZLESTATE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD___IFIXBASEPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
