#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_79204BBCEA1240BB_Enum_3_B0571B1E47CFE47D.h"
#include "unitysdk/MoleMole/ProfIndicator_Enum_3_CC1DD23322D5CC3A.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_DC08FA4F74036387;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_PROFINDICATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x11DE9610)
#define MOLEMOLE_PROFINDICATOR_CHECKGENERALUI_OFFSET UNITYSDK_OFFSET(0x11DEA490)
#define MOLEMOLE_PROFINDICATOR_METHOD_5_0747954DF3B63AAB_OFFSET UNITYSDK_OFFSET(0x11DED020)
#define MOLEMOLE_PROFINDICATOR_METHOD_5_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x11DEC4E0)
#define MOLEMOLE_PROFINDICATOR_METHOD_5_2FDE0CE02EC294DE_OFFSET UNITYSDK_OFFSET(0x11DEC850)
#define MOLEMOLE_PROFINDICATOR_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11DECF50)
#define MOLEMOLE_PROFINDICATOR_METHOD_5_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x11DEB870)
#define MOLEMOLE_PROFINDICATOR_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x11DEA870)
#define MOLEMOLE_PROFINDICATOR_METHOD_5_B64E6D35718AD10A_OFFSET UNITYSDK_OFFSET(0x11DECCF0)
#define MOLEMOLE_PROFINDICATOR_METHOD_5_DCD9FE8382DA243A_OFFSET UNITYSDK_OFFSET(0x11DEC460)
#define MOLEMOLE_PROFINDICATOR_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x11DEB1D0)
#define MOLEMOLE_PROFINDICATOR_METHOD_5_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x11DEB070)
#define MOLEMOLE_PROFINDICATOR_ONANIMATIONCLIPBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11DEB390)
#define MOLEMOLE_PROFINDICATOR_ONMATERIALBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11DEB3E0)
#define MOLEMOLE_PROFINDICATOR_ONMESHBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11DEB340)
#define MOLEMOLE_PROFINDICATOR_ONRENDERTEXTUREBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11DEB2F0)
#define MOLEMOLE_PROFINDICATOR_ONSTREAMASBCLICK_OFFSET UNITYSDK_OFFSET(0x11DEB430)
#define MOLEMOLE_PROFINDICATOR_ONTEXTUREBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11DEB180)
#define MOLEMOLE_PROFINDICATOR_ONTOTALBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11DEB120)
#define MOLEMOLE_PROFINDICATOR_ONUPLOADBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11DEB650)
#define MOLEMOLE_PROFINDICATOR_RECORDMEMORY_OFFSET UNITYSDK_OFFSET(0x11DEAB10)
#define MOLEMOLE_PROFINDICATOR_RESETMAXMEMORY_OFFSET UNITYSDK_OFFSET(0x11DEB480)
#define MOLEMOLE_PROFINDICATOR_START_OFFSET UNITYSDK_OFFSET(0x11DEA800)
#define MOLEMOLE_PROFINDICATOR_TRACKCURMEM_OFFSET UNITYSDK_OFFSET(0x11DEB5D0)
#define MOLEMOLE_PROFINDICATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x11DEA9C0)
#define MOLEMOLE_PROFINDICATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DEB830)
#define MOLEMOLE_PROFINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11DEB690)

namespace MoleMole
{
	inline static constexpr unsigned int ProfIndicator_TypeDefinitionIndex = 76755;

	class ProfIndicator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_30()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProfIndicator_TypeDefinitionIndex)->GetStaticField(0x45C20);
		}
		::MoleMole::ProfIndicator_Enum_3_CC1DD23322D5CC3A Field_5_0; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20
		::UnityEngine::Transform* Field_5_2; // 0x28
		::UnityEngine::Transform* Field_5_3; // 0x30
		::UnityEngine::Transform* Field_5_4; // 0x38
		::System::Single _refreshInterval; // 0x40
		::System::Single Field_5_6; // 0x44
		::UnityEngine::Transform* _assetItemUIPrefab; // 0x48
		::System::Int32 _assetItemUINum; // 0x50
		::System::UInt32 Field_5_9; // 0x54
		::System::Collections::Generic::Dictionary_2<::Class_1_79204BBCEA1240BB_Enum_3_B0571B1E47CFE47D, ::Class_1_DC08FA4F74036387*>* Field_5_10; // 0x58
		::Class_1_79204BBCEA1240BB_Enum_3_B0571B1E47CFE47D Field_5_11; // 0x60
		::UnityEngine::UI::ScrollRect* Field_5_12; // 0x68
		::UnityEngine::UI::Text* Field_5_13; // 0x70
		::UnityEngine::UI::Text* Field_5_14; // 0x78
		::UnityEngine::UI::Text* Field_5_15; // 0x80
		::UnityEngine::UI::Text* Field_5_16; // 0x88
		::UnityEngine::UI::Text* Field_5_17; // 0x90
		::UnityEngine::UI::Text* Field_5_18; // 0x98
		::UnityEngine::UI::Text* Field_5_19; // 0xA0
		::UnityEngine::UI::Text* Field_5_20; // 0xA8
		::UnityEngine::UI::Text* Field_5_21; // 0xB0
		::UnityEngine::UI::Text* Field_5_22; // 0xB8
		::UnityEngine::UI::Text* Field_5_23; // 0xC0
		::System::Collections::Generic::List_1<::System::Int32>* memoryMaxInfoList; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>* Field_5_25; // 0xD0
		::System::Collections::Generic::List_1<::System::String*>* memToRecordList; // 0xD8
		::System::Boolean Field_5_27; // 0xE0
		::System::Single Field_5_28; // 0xE4
		::System::Single Field_5_29; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_UPDATE_OFFSET))(this);
		}

		::System::Void OnTotalBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_ONTOTALBTNCLICK_OFFSET))(this);
		}

		::System::Void OnTextureBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_ONTEXTUREBTNCLICK_OFFSET))(this);
		}

		::System::Void OnRenderTextureBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_ONRENDERTEXTUREBTNCLICK_OFFSET))(this);
		}

		::System::Void OnMeshBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_ONMESHBTNCLICK_OFFSET))(this);
		}

		::System::Void OnAnimationClipBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_ONANIMATIONCLIPBTNCLICK_OFFSET))(this);
		}

		::System::Void OnMaterialBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_ONMATERIALBTNCLICK_OFFSET))(this);
		}

		::System::Void OnStreamAsbClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_ONSTREAMASBCLICK_OFFSET))(this);
		}

		::System::Void RecordMemory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_RECORDMEMORY_OFFSET))(this);
		}

		::System::Void ResetMaxMemory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_RESETMAXMEMORY_OFFSET))(this);
		}

		::System::Void TrackCurMem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_TRACKCURMEM_OFFSET))(this, a1);
		}

		::System::Void onUploadBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_ONUPLOADBTNCLICK_OFFSET))(this);
		}

		::System::Void CheckGeneralUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_CHECKGENERALUI_OFFSET))(this);
		}

		::System::Void Method_5_36971FC3F16E2CEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_METHOD_5_36971FC3F16E2CEB_OFFSET))(this);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_2FDE0CE02EC294DE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_METHOD_5_2FDE0CE02EC294DE_OFFSET))(this);
		}

		::System::Void Method_5_DCD9FE8382DA243A(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_METHOD_5_DCD9FE8382DA243A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_B64E6D35718AD10A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_METHOD_5_B64E6D35718AD10A_OFFSET))(this, a1);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_F79D5EC57FBF426E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_METHOD_5_F79D5EC57FBF426E_OFFSET))(this);
		}

		::System::Void Method_5_19844080C13BA28F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_METHOD_5_19844080C13BA28F_OFFSET))(this);
		}

		::System::Void Method_5_0747954DF3B63AAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROFINDICATOR_METHOD_5_0747954DF3B63AAB_OFFSET))(this);
		}
	};
}
