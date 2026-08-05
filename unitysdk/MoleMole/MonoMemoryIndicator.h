#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_79204BBCEA1240BB_Enum_3_BA2FF5C66FF53326.h"
#include "unitysdk/MoleMole/MonoMemoryIndicator_Enum_3_DB3A6FD94D5F0B8B.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1AF9C4B0B019563B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOMEMORYINDICATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x11D4F370)
#define MOLEMOLE_MONOMEMORYINDICATOR_CHECKGENERALUI_OFFSET UNITYSDK_OFFSET(0x11D501F0)
#define MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x11D526C0)
#define MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_22F3F5F8518606BB_OFFSET UNITYSDK_OFFSET(0x11D52380)
#define MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11D525F0)
#define MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x11D52A30)
#define MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x11D505D0)
#define MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0x11D539E0)
#define MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x11D51650)
#define MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_DCD9FE8382DA243A_OFFSET UNITYSDK_OFFSET(0x11D515D0)
#define MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x11D50F30)
#define MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x11D50DD0)
#define MOLEMOLE_MONOMEMORYINDICATOR_ONANIMATIONCLIPBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11D510F0)
#define MOLEMOLE_MONOMEMORYINDICATOR_ONMATERIALBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11D51140)
#define MOLEMOLE_MONOMEMORYINDICATOR_ONMESHBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11D510A0)
#define MOLEMOLE_MONOMEMORYINDICATOR_ONRENDERTEXTUREBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11D51050)
#define MOLEMOLE_MONOMEMORYINDICATOR_ONSTREAMASBCLICK_OFFSET UNITYSDK_OFFSET(0x11D51190)
#define MOLEMOLE_MONOMEMORYINDICATOR_ONTEXTUREBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11D50EE0)
#define MOLEMOLE_MONOMEMORYINDICATOR_ONTOTALBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11D50E80)
#define MOLEMOLE_MONOMEMORYINDICATOR_ONUPLOADBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11D513B0)
#define MOLEMOLE_MONOMEMORYINDICATOR_RECORDMEMORY_OFFSET UNITYSDK_OFFSET(0x11D50870)
#define MOLEMOLE_MONOMEMORYINDICATOR_RESETMAXMEMORY_OFFSET UNITYSDK_OFFSET(0x11D511E0)
#define MOLEMOLE_MONOMEMORYINDICATOR_START_OFFSET UNITYSDK_OFFSET(0x11D50560)
#define MOLEMOLE_MONOMEMORYINDICATOR_TRACKCURMEM_OFFSET UNITYSDK_OFFSET(0x11D51330)
#define MOLEMOLE_MONOMEMORYINDICATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x11D50720)
#define MOLEMOLE_MONOMEMORYINDICATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D51590)
#define MOLEMOLE_MONOMEMORYINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11D513F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMemoryIndicator_TypeDefinitionIndex = 87360;

	class MonoMemoryIndicator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_35()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoMemoryIndicator_TypeDefinitionIndex)->GetStaticField(0x4FE20);
		}
		::MoleMole::MonoMemoryIndicator_Enum_3_DB3A6FD94D5F0B8B Field_5_1; // 0x18
		::UnityEngine::Transform* Field_5_0; // 0x20
		::UnityEngine::Transform* Field_5_7; // 0x28
		::UnityEngine::Transform* Field_5_6; // 0x30
		::UnityEngine::Transform* Field_5_5; // 0x38
		::System::Single _refreshInterval; // 0x40
		::System::Single Field_5_11; // 0x44
		::UnityEngine::Transform* _assetItemUIPrefab; // 0x48
		::System::Int32 _assetItemUINum; // 0x50
		::System::UInt32 Field_5_8; // 0x54
		::System::Collections::Generic::Dictionary_2<::Class_1_79204BBCEA1240BB_Enum_3_BA2FF5C66FF53326, ::Class_1_1AF9C4B0B019563B*>* Field_5_15; // 0x58
		::Class_1_79204BBCEA1240BB_Enum_3_BA2FF5C66FF53326 Field_5_14; // 0x60
		::UnityEngine::UI::ScrollRect* Field_5_13; // 0x68
		::UnityEngine::UI::Text* Field_5_12; // 0x70
		::UnityEngine::UI::Text* Field_5_19; // 0x78
		::UnityEngine::UI::Text* Field_5_18; // 0x80
		::UnityEngine::UI::Text* Field_5_17; // 0x88
		::UnityEngine::UI::Text* Field_5_16; // 0x90
		::UnityEngine::UI::Text* Field_5_23; // 0x98
		::UnityEngine::UI::Text* Field_5_22; // 0xA0
		::UnityEngine::UI::Text* Field_5_21; // 0xA8
		::UnityEngine::UI::Text* Field_5_20; // 0xB0
		::UnityEngine::UI::Text* Field_5_27; // 0xB8
		::UnityEngine::UI::Text* Field_5_26; // 0xC0
		::System::Collections::Generic::List_1<::System::Int32>* memoryMaxInfoList; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>* Field_5_24; // 0xD0
		::System::Collections::Generic::List_1<::System::String*>* memToRecordList; // 0xD8
		::System::Boolean Field_5_30; // 0xE0
		::System::Single Field_5_29; // 0xE4
		::System::Single Field_5_28; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_UPDATE_OFFSET))(this);
		}

		::System::Void OnTotalBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_ONTOTALBTNCLICK_OFFSET))(this);
		}

		::System::Void OnTextureBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_ONTEXTUREBTNCLICK_OFFSET))(this);
		}

		::System::Void OnRenderTextureBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_ONRENDERTEXTUREBTNCLICK_OFFSET))(this);
		}

		::System::Void OnMeshBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_ONMESHBTNCLICK_OFFSET))(this);
		}

		::System::Void OnAnimationClipBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_ONANIMATIONCLIPBTNCLICK_OFFSET))(this);
		}

		::System::Void OnMaterialBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_ONMATERIALBTNCLICK_OFFSET))(this);
		}

		::System::Void OnStreamAsbClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_ONSTREAMASBCLICK_OFFSET))(this);
		}

		::System::Void RecordMemory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_RECORDMEMORY_OFFSET))(this);
		}

		::System::Void ResetMaxMemory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_RESETMAXMEMORY_OFFSET))(this);
		}

		::System::Void TrackCurMem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_TRACKCURMEM_OFFSET))(this, a1);
		}

		::System::Void onUploadBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_ONUPLOADBTNCLICK_OFFSET))(this);
		}

		::System::Void CheckGeneralUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_CHECKGENERALUI_OFFSET))(this);
		}

		::System::Void Method_5_DCD9FE8382DA243A(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_DCD9FE8382DA243A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_B43C848B078B3C34()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_B43C848B078B3C34_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_F79D5EC57FBF426E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_F79D5EC57FBF426E_OFFSET))(this);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_5_22F3F5F8518606BB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_22F3F5F8518606BB_OFFSET))(this, a1);
		}

		::System::Void Method_5_19844080C13BA28F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_19844080C13BA28F_OFFSET))(this);
		}

		::System::Void Method_5_3B258437A86233AC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_3B258437A86233AC_OFFSET))(this);
		}

		::System::Void Method_5_5FAD56E9E208220A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_5FAD56E9E208220A_OFFSET))(this);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMEMORYINDICATOR_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}
	};
}
