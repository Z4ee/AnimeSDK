#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class RotatePillarPuzzleFragmentData; }
namespace RPG::Client::Prop { class RotatePillarPuzzleFragmentMono; }
namespace RPG::Client::Prop { class RotatePillarPuzzlePillar; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_CLOCKWISELIGHT_OFFSET UNITYSDK_OFFSET(0xA13C100)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_COUNTERCLOCKWISELIGHT_OFFSET UNITYSDK_OFFSET(0xA13C0F0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA13B2B0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_ISMAINROTATE_OFFSET UNITYSDK_OFFSET(0xA13C050)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_ISROTATE_OFFSET UNITYSDK_OFFSET(0xA13C040)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT0_OFFSET UNITYSDK_OFFSET(0xA13C110)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT1_OFFSET UNITYSDK_OFFSET(0xA13C2A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT2_OFFSET UNITYSDK_OFFSET(0xA13C430)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT3_OFFSET UNITYSDK_OFFSET(0xA13C5C0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_01EA2A2B0FBDD6EC_OFFSET UNITYSDK_OFFSET(0xA139C70)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xA13A750)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_0D959FF260B17021_OFFSET UNITYSDK_OFFSET(0xA13A320)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_39E82D6C49AAD1CF_OFFSET UNITYSDK_OFFSET(0xA13AEB0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_4B49CB2CD4D222F8_OFFSET UNITYSDK_OFFSET(0xA13BCF0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_51BD034635AC1550_OFFSET UNITYSDK_OFFSET(0xA13A6C0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_730F88EAC5E19842_OFFSET UNITYSDK_OFFSET(0xA13B710)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_8DF6D21677681C65_OFFSET UNITYSDK_OFFSET(0xA13BF20)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_9BA0A0AC3056DE7A_OFFSET UNITYSDK_OFFSET(0xA13BC50)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_A3230FC76D17AAB8_OFFSET UNITYSDK_OFFSET(0xA13B520)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_A94BAB85685275CB_OFFSET UNITYSDK_OFFSET(0xA13A7A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0xA13B340)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_B1EA5948E7D176CF_OFFSET UNITYSDK_OFFSET(0xA13ADE0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0xA13C060)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_CLOCKWISELIGHT_OFFSET UNITYSDK_OFFSET(0xA13A1A0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_COUNTERCLOCKWISELIGHT_OFFSET UNITYSDK_OFFSET(0xA13A020)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT0_OFFSET UNITYSDK_OFFSET(0xA13C120)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT1_OFFSET UNITYSDK_OFFSET(0xA13C2B0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT2_OFFSET UNITYSDK_OFFSET(0xA13C440)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT3_OFFSET UNITYSDK_OFFSET(0xA13C5D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA13C750)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA139C50)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__ONROTATEFINISH_B__13_0_OFFSET UNITYSDK_OFFSET(0xA13C8E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleFragment_TypeDefinitionIndex = 64255;

	class RotatePillarPuzzleFragment : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_StopRotateSound()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RotatePillarPuzzleFragment_TypeDefinitionIndex)->GetStaticField(0x5900);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_StartRotateSound()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RotatePillarPuzzleFragment_TypeDefinitionIndex)->GetStaticField(0x5908);
		}
		static ::System::String** StaticGet__ChangeToNotCompleteSound()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RotatePillarPuzzleFragment_TypeDefinitionIndex)->GetStaticField(0x5910);
		}
		static ::System::String** StaticGet__ChangeToCompleteSound()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RotatePillarPuzzleFragment_TypeDefinitionIndex)->GetStaticField(0x5918);
		}
		static ::System::Int32* StaticGet__UniqueIDCnt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RotatePillarPuzzleFragment_TypeDefinitionIndex)->GetStaticField(0x3770);
		}
		::RPG::Client::Prop::RotatePillarPuzzleFragmentData* Data; // 0x10
		::UnityEngine::Vector3 RotateDirection; // 0x18
		::UnityEngine::GameObject* _Obj; // 0x28
		::RPG::Client::Prop::RotatePillarPuzzleFragmentMono* _FragmentMono; // 0x30
		::System::String* CompleteTriggerCustomString; // 0x38
		::System::Boolean light0; // 0x40
		::System::Boolean light1; // 0x41
		::System::Boolean light2; // 0x42
		::System::Boolean light3; // 0x43
		::System::Boolean light4; // 0x44
		::System::Boolean light5; // 0x45
		::System::Int32 _NowDegree; // 0x48
		::System::Boolean _IsRotate; // 0x4C
		::System::Boolean _IsMainRotate; // 0x4D
		::System::Boolean _IsComplete; // 0x4E
		::System::Action_3<::RPG::Client::Prop::RotatePillarPuzzleFragment*, ::System::Boolean, ::System::Boolean>* _RotateFinishCallback; // 0x50
		::RPG::GameCore::GameEntity* _Owner; // 0x58
		::RPG::Client::Prop::RotatePillarPuzzlePillar* _OwnerPillar; // 0x60
		::System::Int32 _UniqueID; // 0x68
		::UnityEngine::Animator* _Animator; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* _ChildFrag; // 0x78
		::System::String* _ParentFrag; // 0x80
		::System::Collections::IEnumerator* _DelaySelect; // 0x88
		::System::Boolean _HideInteractive; // 0x90
		::System::UInt32 _BlockHandler; // 0x94
		::System::Int32 serial_id; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__CCTOR_OFFSET))();
		}

		::System::Void Method_1_01EA2A2B0FBDD6EC(::RPG::Client::Prop::RotatePillarPuzzlePillar* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::Prop::RotatePillarPuzzleFragmentData* a3, ::System::Action_3<::RPG::Client::Prop::RotatePillarPuzzleFragment*, ::System::Boolean, ::System::Boolean>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RotatePillarPuzzlePillar*, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RotatePillarPuzzleFragmentData*, ::System::Action_3<::RPG::Client::Prop::RotatePillarPuzzleFragment*, ::System::Boolean, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_01EA2A2B0FBDD6EC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_51BD034635AC1550(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_51BD034635AC1550_OFFSET))(this, a1);
		}

		::System::Void Method_1_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
		}

		::System::Void Method_1_A94BAB85685275CB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_A94BAB85685275CB_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_39E82D6C49AAD1CF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_39E82D6C49AAD1CF_OFFSET))(this);
		}

		::System::Void Method_1_ABE7CF9FA1B8CCA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET))(this);
		}

		::System::Void Method_1_A3230FC76D17AAB8(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_A3230FC76D17AAB8_OFFSET))(this, a1);
		}

		::System::Void Method_1_730F88EAC5E19842(::System::Boolean a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_730F88EAC5E19842_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_4B49CB2CD4D222F8(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_4B49CB2CD4D222F8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_8DF6D21677681C65()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_8DF6D21677681C65_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_1_9BA0A0AC3056DE7A(::System::Boolean a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_9BA0A0AC3056DE7A_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* Method_1_B1EA5948E7D176CF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Nullable_1<::System::Single> a4, ::System::Boolean a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Nullable_1<::System::Single>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_B1EA5948E7D176CF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_1_0D959FF260B17021(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_0D959FF260B17021_OFFSET))(this, a1);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Boolean get_IsRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_ISROTATE_OFFSET))(this);
		}

		::System::Boolean get_IsMainRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_ISMAINROTATE_OFFSET))(this);
		}

		::System::Void Method_1_BADDA70ED68283AE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_METHOD_1_BADDA70ED68283AE_OFFSET))(this);
		}

		::System::Boolean get_CounterClockwiseLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_COUNTERCLOCKWISELIGHT_OFFSET))(this);
		}

		::System::Void set_CounterClockwiseLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_COUNTERCLOCKWISELIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_ClockwiseLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_CLOCKWISELIGHT_OFFSET))(this);
		}

		::System::Void set_ClockwiseLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_CLOCKWISELIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_Light0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT0_OFFSET))(this);
		}

		::System::Void set_Light0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT0_OFFSET))(this, a1);
		}

		::System::Boolean get_Light1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT1_OFFSET))(this);
		}

		::System::Void set_Light1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT1_OFFSET))(this, a1);
		}

		::System::Boolean get_Light2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT2_OFFSET))(this);
		}

		::System::Void set_Light2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT2_OFFSET))(this, a1);
		}

		::System::Boolean get_Light3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT3_OFFSET))(this);
		}

		::System::Void set_Light3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT3_OFFSET))(this, a1);
		}

		::System::Void _OnRotateFinish_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__ONROTATEFINISH_B__13_0_OFFSET))(this);
		}
	};
}
