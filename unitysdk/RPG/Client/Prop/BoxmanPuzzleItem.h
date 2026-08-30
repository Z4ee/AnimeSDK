#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/BoxmanItemType.h"
#include "unitysdk/RPG/Client/Prop/ScenePuzzleItemBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_39DC98424E208118;
namespace RPG::Client::Prop { class BoxmanPuzzleBoard; }
namespace RPG::Client::Prop { class BoxmanPuzzleItemBindProp; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xDBE78C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_CANBOXSELECT_OFFSET UNITYSDK_OFFSET(0xDBE4FB0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_DUMPPERSISTENTDATA_OFFSET UNITYSDK_OFFSET(0xDBE8C10)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0xDBE79F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_INTERACT_OFFSET UNITYSDK_OFFSET(0xDBE82F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_ISNORMALBOX_OFFSET UNITYSDK_OFFSET(0xDBE29A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDBE7F40)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_LOADPERSISTENTDATA_OFFSET UNITYSDK_OFFSET(0xDBE3240)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_1920CD45C76CCBBB_OFFSET UNITYSDK_OFFSET(0xDBE85D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xDBE8B40)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_8FA0679D147955F9_OFFSET UNITYSDK_OFFSET(0xDBE8260)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_9E49294C33DF47C3_OFFSET UNITYSDK_OFFSET(0xDBE8460)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_D17B49CABC597E3E_1_OFFSET UNITYSDK_OFFSET(0xDBE8530)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_D17B49CABC597E3E_OFFSET UNITYSDK_OFFSET(0xDBE83C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_F9725EED05F07EC1_OFFSET UNITYSDK_OFFSET(0xDBE89F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_MOVE_OFFSET UNITYSDK_OFFSET(0xDBE64F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xDBE8930)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_REFERSHPOSITION_OFFSET UNITYSDK_OFFSET(0xDBE29F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_RESET_OFFSET UNITYSDK_OFFSET(0xDBE72E0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_SETBOXSELECT_OFFSET UNITYSDK_OFFSET(0xDBE68A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_SETFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xDBE6740)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xDBE8CE0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xDBE8C50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleItem_TypeDefinitionIndex = 78378;

	class BoxmanPuzzleItem : public ::RPG::Client::Prop::ScenePuzzleItemBase
	{
	public:
		static ::System::Int32* StaticGet_EPLIAANMJLL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BoxmanPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x14270);
		}
		static ::System::Int32* StaticGet_JLGAGGNJAHI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BoxmanPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x14274);
		}
		static ::System::Int32* StaticGet_NMGIHKOHOAI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BoxmanPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x14278);
		}
		::RPG::Client::Prop::BoxmanPuzzleBoard* Board; // 0x20
		::RPG::GameCore::GameEntity* AttachEntity; // 0x28
		::RPG::Client::Prop::BoxmanCoord Coord; // 0x30
		::System::String* OptionTextmapID; // 0x38
		::RPG::Client::Prop::BoxmanItemType ItemType; // 0x40
		::System::Single YOffset; // 0x44
		::RPG::Client::Prop::BoxmanCoord ResetCoord; // 0x48
		::System::Int32 BoxIndex; // 0x50
		::System::Boolean TargetItemFinish; // 0x54
		::UnityEngine::Vector3 OODFLGPMAKO; // 0x58
		::System::Nullable_1<::System::Boolean> PDAAPKHANNJ; // 0x64
		::System::Single Speed; // 0x68
		::System::UInt32 IdleMotionId; // 0x6C
		::System::UInt32 InteractMotionId; // 0x70
		::System::Single InteractMotionDuration; // 0x74
		::System::Single BlackScreenFadeinDuration; // 0x78
		::System::Single BlackScreenFadeoutDuration; // 0x7C
		::System::String* TargetStubPrefabPath; // 0x80
		::System::String* TargetStubConfigEntityPath; // 0x88
		::System::String* TargetStubJsonPath; // 0x90
		::System::String* FreeStyleCharacterID; // 0x98
		::System::Boolean InteractOnLeft; // 0xA0
		::System::Boolean InteractOnRight; // 0xA1
		::System::Boolean InteractOnUp; // 0xA2
		::System::Boolean InteractOnBottom; // 0xA3
		::RPG::Client::Prop::BoxmanPuzzleItemBindProp* BindProp; // 0xA8
		::System::String* BoxStartMoveOverrideSound; // 0xB0
		::System::String* BoxArriveTargetOverrideSound; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_AWAKE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_INIT_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Move(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_MOVE_OFFSET))(this, a1);
		}

		::System::Void Interact()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_INTERACT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_6_D17B49CABC597E3E(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_D17B49CABC597E3E_OFFSET))(this, a1);
		}

		::System::Void Method_6_9E49294C33DF47C3(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_9E49294C33DF47C3_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_6_D17B49CABC597E3E_1(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_D17B49CABC597E3E_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_1920CD45C76CCBBB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_1920CD45C76CCBBB_OFFSET))(this, a1);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_ONSELECT_OFFSET))(this);
		}

		::System::Void SetBoxSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_SETBOXSELECT_OFFSET))(this, a1);
		}

		::System::Boolean CanBoxSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_CANBOXSELECT_OFFSET))(this);
		}

		::System::Boolean Method_6_F9725EED05F07EC1(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_F9725EED05F07EC1_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_6_8FA0679D147955F9(::RPG::Client::Prop::BoxmanDir a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_8FA0679D147955F9_OFFSET))(this, a1);
		}

		::System::Void Method_6_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_RESET_OFFSET))(this);
		}

		::System::Void LoadPersistentData(::Class_1_39DC98424E208118* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_39DC98424E208118*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_LOADPERSISTENTDATA_OFFSET))(this, a1);
		}

		::System::Void DumpPersistentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_DUMPPERSISTENTDATA_OFFSET))(this);
		}

		::System::Void RefershPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_REFERSHPOSITION_OFFSET))(this);
		}

		::System::Void SetFinishState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_SETFINISHSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsNormalBox()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_ISNORMALBOX_OFFSET))(this);
		}
	};
}
