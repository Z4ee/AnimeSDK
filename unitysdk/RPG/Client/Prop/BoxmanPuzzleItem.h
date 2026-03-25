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

#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xA01D090)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_CANBOXSELECT_OFFSET UNITYSDK_OFFSET(0xA01A800)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_DUMPPERSISTENTDATA_OFFSET UNITYSDK_OFFSET(0xA01E160)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0xA01D1C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_INTERACT_OFFSET UNITYSDK_OFFSET(0xA01DAC0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_ISNORMALBOX_OFFSET UNITYSDK_OFFSET(0xA018260)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA01D710)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_LOADPERSISTENTDATA_OFFSET UNITYSDK_OFFSET(0xA018B10)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA01E100)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_8FA0679D147955F9_OFFSET UNITYSDK_OFFSET(0xA01DA30)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_9E49294C33DF47C3_OFFSET UNITYSDK_OFFSET(0xA01DC30)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0xA01DDA0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_D17B49CABC597E3E_1_OFFSET UNITYSDK_OFFSET(0xA01DD00)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_D17B49CABC597E3E_OFFSET UNITYSDK_OFFSET(0xA01DB90)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_F9725EED05F07EC1_OFFSET UNITYSDK_OFFSET(0xA01DFB0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_MOVE_OFFSET UNITYSDK_OFFSET(0xA01BD10)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA01DEF0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_REFERSHPOSITION_OFFSET UNITYSDK_OFFSET(0xA0182B0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_RESET_OFFSET UNITYSDK_OFFSET(0xA01C9B0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_SETBOXSELECT_OFFSET UNITYSDK_OFFSET(0xA01C120)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM_SETFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xA01BF60)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xA01E230)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA01E1A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA01E2C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleItem_TypeDefinitionIndex = 64298;

	class BoxmanPuzzleItem : public ::RPG::Client::Prop::ScenePuzzleItemBase
	{
	public:
		static ::System::Int32* StaticGet_Field_6_28()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BoxmanPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x12A20);
		}
		static ::System::Int32* StaticGet_Field_6_29()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BoxmanPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x12A24);
		}
		static ::System::Int32* StaticGet_Field_6_30()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BoxmanPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x12A28);
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
		::UnityEngine::Vector3 Field_6_9; // 0x58
		::System::Nullable_1<::System::Boolean> Field_6_10; // 0x64
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

		::System::Void Method_6_B386444429A36A77(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_B386444429A36A77_OFFSET))(this, a1);
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

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM_METHOD_6_4343F372F34C05BF_OFFSET))(this);
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

		::System::Void __iFixBaseProxy_OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM___IFIXBASEPROXY_ONSELECT_OFFSET))(this);
		}
	};
}
