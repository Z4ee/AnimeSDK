#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class RotatePillarPuzzleBoard; }
namespace RPG::Client::Prop { class RotatePillarPuzzleFragment; }
namespace RPG::Client::Prop { class RotatePillarPuzzleFragmentData; }
namespace RPG::Client::Prop { class RotatePillarPuzzleSwitch; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1664BEC0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_GETFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1664E330)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1664C4B0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_GET_ISROTATE_OFFSET UNITYSDK_OFFSET(0x1664B1A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_GET_MAXEMISSIONSTRENGTHLENGTHEDITOR_OFFSET UNITYSDK_OFFSET(0x16651220)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_GET_MINEMISSIONSTRENGTHLENGTHEDITOR_OFFSET UNITYSDK_OFFSET(0x16651660)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_GOBACKINIT_OFFSET UNITYSDK_OFFSET(0x1664B770)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_INITPUZZLEITEM_OFFSET UNITYSDK_OFFSET(0x166490A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_METHOD_5_0609E77F38B69C73_OFFSET UNITYSDK_OFFSET(0x16650E60)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_METHOD_5_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x166511D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_REFRESHALLPILLARCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x1664E5A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_REGISTERSWITCH_OFFSET UNITYSDK_OFFSET(0x16650D80)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_ROTATE_1_OFFSET UNITYSDK_OFFSET(0x16650C10)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_ROTATE_OFFSET UNITYSDK_OFFSET(0x1664AF30)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_SELECT_OFFSET UNITYSDK_OFFSET(0x1664A8E0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_SETFINISH_OFFSET UNITYSDK_OFFSET(0x1664C100)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_SET_MAXEMISSIONSTRENGTHLENGTHEDITOR_OFFSET UNITYSDK_OFFSET(0x16651230)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_SET_MINEMISSIONSTRENGTHLENGTHEDITOR_OFFSET UNITYSDK_OFFSET(0x16651670)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x16651B20)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR__CTOR_OFFSET UNITYSDK_OFFSET(0x16651AA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzlePillar_TypeDefinitionIndex = 78338;

	class RotatePillarPuzzlePillar : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_MEFMOLNEFIN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RotatePillarPuzzlePillar_TypeDefinitionIndex)->GetStaticField(0x64AF0);
		}
		static ::System::Single* StaticGet_GlobalMaxEmissionStrengthLength()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RotatePillarPuzzlePillar_TypeDefinitionIndex)->GetStaticField(0x14C70);
		}
		static ::System::Single* StaticGet_GlobalMinEmissionStrengthLength()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RotatePillarPuzzlePillar_TypeDefinitionIndex)->GetStaticField(0x14C74);
		}
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotatePillarPuzzleFragment*>* Fragment; // 0x18
		::System::Single ClockWait; // 0x20
		::System::String* CompleteTriggerCustomString; // 0x28
		::System::Single RotateTime; // 0x30
		::System::Single MaxEmissionStrengthLength; // 0x34
		::System::Single MinEmissionStrengthLength; // 0x38
		::RPG::Client::Prop::RotatePillarPuzzleBoard* OwnerBoard; // 0x40
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x48
		::System::String* BGFOCCJAOOO; // 0x50
		::System::Action_1<::RPG::Client::Prop::RotatePillarPuzzlePillar*>* CIFOILLJFNF; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotatePillarPuzzleSwitch*>* EDHKLKKFAOM; // 0x60
		::System::Boolean POIOPDDKGKB; // 0x68
		::System::Boolean EJBCMAOPDCL; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzleItem(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::RotatePillarPuzzleBoard* a2, ::System::Collections::Generic::List_1<::RPG::Client::Prop::RotatePillarPuzzleFragmentData*>* a3, ::System::String* a4, ::System::Action_1<::RPG::Client::Prop::RotatePillarPuzzlePillar*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RotatePillarPuzzleBoard*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::RotatePillarPuzzleFragmentData*>*, ::System::String*, ::System::Action_1<::RPG::Client::Prop::RotatePillarPuzzlePillar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_INITPUZZLEITEM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_DISPOSE_OFFSET))(this);
		}

		::System::Void Select(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_SELECT_OFFSET))(this, a1, a2);
		}

		::System::Void Rotate(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_ROTATE_OFFSET))(this, a1);
		}

		::System::Void Rotate_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_ROTATE_1_OFFSET))(this, a1);
		}

		::System::Void GoBackInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_GOBACKINIT_OFFSET))(this);
		}

		::System::Void SetFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_SETFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::RotatePillarPuzzleFragment* GetFragment(::System::String* a1)
		{
			return ((::RPG::Client::Prop::RotatePillarPuzzleFragment*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_GETFRAGMENT_OFFSET))(this, a1);
		}

		::System::Void RegisterSwitch(::RPG::Client::Prop::RotatePillarPuzzleSwitch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RotatePillarPuzzleSwitch*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_REGISTERSWITCH_OFFSET))(this, a1);
		}

		::System::Boolean RefreshAllPillarCompleteStatus(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_REFRESHALLPILLARCOMPLETESTATUS_OFFSET))(this, a1);
		}

		::System::Void Method_5_0609E77F38B69C73(::RPG::Client::Prop::RotatePillarPuzzleFragment* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RotatePillarPuzzleFragment*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_METHOD_5_0609E77F38B69C73_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Void Method_5_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_METHOD_5_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_GET_ISROTATE_OFFSET))(this);
		}

		::System::Single get_MaxEmissionStrengthLengthEditor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_GET_MAXEMISSIONSTRENGTHLENGTHEDITOR_OFFSET))(this);
		}

		::System::Void set_MaxEmissionStrengthLengthEditor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_SET_MAXEMISSIONSTRENGTHLENGTHEDITOR_OFFSET))(this, a1);
		}

		::System::Single get_MinEmissionStrengthLengthEditor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_GET_MINEMISSIONSTRENGTHLENGTHEDITOR_OFFSET))(this);
		}

		::System::Void set_MinEmissionStrengthLengthEditor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEPILLAR_SET_MINEMISSIONSTRENGTHLENGTHEDITOR_OFFSET))(this, a1);
		}
	};
}
