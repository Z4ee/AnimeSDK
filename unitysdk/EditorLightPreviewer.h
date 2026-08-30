#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E4CB20B056222958;
class EditorLightPreviewer_Class_1_128EA0FF53AE8A47;
class SceneLightVolume;
namespace ScenenLightManager { class BlockEnvExportDataHeader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_2E4F8309DC17256A;

#define EDITORLIGHTPREVIEWER_CANCELPINCURRENTCAMPOS_OFFSET UNITYSDK_OFFSET(0x10672A70)
#define EDITORLIGHTPREVIEWER_CHANGEENV_OFFSET UNITYSDK_OFFSET(0x10672800)
#define EDITORLIGHTPREVIEWER_CHANGEQUALITY_OFFSET UNITYSDK_OFFSET(0x10672690)
#define EDITORLIGHTPREVIEWER_EXITLIGHTPREVIEW_OFFSET UNITYSDK_OFFSET(0x106742B0)
#define EDITORLIGHTPREVIEWER_EXITPREVIEW_OFFSET UNITYSDK_OFFSET(0x10671850)
#define EDITORLIGHTPREVIEWER_GETCIDFROMOBJ_OFFSET UNITYSDK_OFFSET(0x10671770)
#define EDITORLIGHTPREVIEWER_GETLIGHTFGAMEOBJECTFROMCONTROLID_OFFSET UNITYSDK_OFFSET(0x10672D40)
#define EDITORLIGHTPREVIEWER_GETREGISTEREDLIGHTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x10673E70)
#define EDITORLIGHTPREVIEWER_GET_INPREVIEW_OFFSET UNITYSDK_OFFSET(0x10674440)
#define EDITORLIGHTPREVIEWER_ISALIVE_OFFSET UNITYSDK_OFFSET(0x10671700)
#define EDITORLIGHTPREVIEWER_ISINLIGHTPREVIEW_OFFSET UNITYSDK_OFFSET(0x106743D0)
#define EDITORLIGHTPREVIEWER_LOADHEADER_OFFSET UNITYSDK_OFFSET(0x106721A0)
#define EDITORLIGHTPREVIEWER_METHOD_5_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0x10674270)
#define EDITORLIGHTPREVIEWER_METHOD_5_2144A24F9EC80B59_OFFSET UNITYSDK_OFFSET(0x10671D30)
#define EDITORLIGHTPREVIEWER_METHOD_5_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x106706A0)
#define EDITORLIGHTPREVIEWER_METHOD_5_5E288D22F52E3FF4_OFFSET UNITYSDK_OFFSET(0x10673390)
#define EDITORLIGHTPREVIEWER_METHOD_5_648BBA11A4556807_OFFSET UNITYSDK_OFFSET(0x10672E70)
#define EDITORLIGHTPREVIEWER_METHOD_5_AFFFB1DD57EDD0F7_OFFSET UNITYSDK_OFFSET(0x106736F0)
#define EDITORLIGHTPREVIEWER_METHOD_5_B10D028FBFD259C7_OFFSET UNITYSDK_OFFSET(0x10674150)
#define EDITORLIGHTPREVIEWER_METHOD_5_BA18886DD7F7CF46_OFFSET UNITYSDK_OFFSET(0x10673CF0)
#define EDITORLIGHTPREVIEWER_METHOD_5_C1CFF8CC0530F137_OFFSET UNITYSDK_OFFSET(0x10674060)
#define EDITORLIGHTPREVIEWER_METHOD_5_C4E832CB292C28C8_OFFSET UNITYSDK_OFFSET(0x10672AC0)
#define EDITORLIGHTPREVIEWER_METHOD_5_C5FF6C7F68BCA1BA_OFFSET UNITYSDK_OFFSET(0x10673010)
#define EDITORLIGHTPREVIEWER_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10672990)
#define EDITORLIGHTPREVIEWER_METHOD_5_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x106738A0)
#define EDITORLIGHTPREVIEWER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10672950)
#define EDITORLIGHTPREVIEWER_METHOD_5_E8D4C6A8B82CBBF7_OFFSET UNITYSDK_OFFSET(0x106731E0)
#define EDITORLIGHTPREVIEWER_METHOD_5_EBC80583F9EE84E5_OFFSET UNITYSDK_OFFSET(0x106738E0)
#define EDITORLIGHTPREVIEWER_METHOD_5_FFEDDDE50B9BE570_OFFSET UNITYSDK_OFFSET(0x10673540)
#define EDITORLIGHTPREVIEWER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10674380)
#define EDITORLIGHTPREVIEWER_PINCURRENTCAMPOS_OFFSET UNITYSDK_OFFSET(0x106729D0)
#define EDITORLIGHTPREVIEWER_RESETLIGHTSCENE_OFFSET UNITYSDK_OFFSET(0x10671A50)
#define EDITORLIGHTPREVIEWER_STARTLIGHTPREVIEW_OFFSET UNITYSDK_OFFSET(0x106741B0)
#define EDITORLIGHTPREVIEWER_STARTPREVIEW_OFFSET UNITYSDK_OFFSET(0x10672020)
#define EDITORLIGHTPREVIEWER_UPDATE_OFFSET UNITYSDK_OFFSET(0x10670650)
#define EDITORLIGHTPREVIEWER__CTOR_OFFSET UNITYSDK_OFFSET(0x106744C0)

inline static constexpr unsigned int EditorLightPreviewer_TypeDefinitionIndex = 47802;

class EditorLightPreviewer : public ::UnityEngine::MonoBehaviour
{
public:
	static ::EditorLightPreviewer** StaticGet_viewer()
	{
		return (::EditorLightPreviewer**)Il2CppClass::FromTypeDefinitionIndex(EditorLightPreviewer_TypeDefinitionIndex)->GetStaticField(0x64590);
	}
	::ScenenLightManager::BlockEnvExportDataHeader* EEBIJDNJFKF; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* MPCHNPHCOGA; // 0x20
	::Class_1_2E4F8309DC17256A<::System::Int32>* POEIIMGCLDH; // 0x28
	::Class_1_2E4F8309DC17256A<::System::Int32>* IBDGBHJINLM; // 0x30
	::UnityEngine::Transform* EKLHELJMIKG; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* NEKFLGKEMLA; // 0x40
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Int32>* DDCLJFPCNKD; // 0x48
	::System::Int32 LightId; // 0x50
	::System::Int32 LightCount; // 0x54
	::UnityEngine::Vector3 SetPos; // 0x58
	::System::Boolean SetP; // 0x64
	::System::Boolean ELAJDPJKPPB; // 0x65
	::System::Boolean ABGLNFDEELA; // 0x66
	::RPG::CustomRP::CustomLightQualityFilter quality; // 0x68
	::RPG::CustomRP::CustomLightQualityFilter KCOKJLJEJOC; // 0x6C
	::System::Collections::Generic::List_1<::System::String*>* envOption; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LKEIKDJAKOG; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BDPKDMFLHFC; // 0x80
	::System::Int32 envIdx; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::EditorLightPreviewer_Class_1_128EA0FF53AE8A47*>* MLNACGNHHCD; // 0x90
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>* HNMLECLMKCN; // 0x98
	::System::Collections::Generic::List_1<::SceneLightVolume*>* NMJIEIECGCK; // 0xA0
	::UnityEngine::Vector3 LDDCMDFGIOB; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E4CB20B056222958*>* OKHPACJOOHL; // 0xB8
	::System::Boolean JGKDBPPOKHI; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::OpenWorld::StreamingLightEnum>* KLCGOBAIAOO; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* PALBELILEID; // 0xD0
	::System::Collections::Generic::List_1<::SceneLightVolume*>* IHOPPHFNIIK; // 0xD8
	::System::String* IPIABPELJEF; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_UPDATE_OFFSET))(this);
	}

	::System::Boolean IsAlive(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_ISALIVE_OFFSET))(this, a1);
	}

	::System::Int32 GetCIDFromObj(::UnityEngine::GameObject* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_GETCIDFROMOBJ_OFFSET))(this, a1);
	}

	::System::Void ExitPreview()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_EXITPREVIEW_OFFSET))(this);
	}

	::System::Void StartPreview(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_STARTPREVIEW_OFFSET))(this, a1, a2, a3);
	}

	::System::Void PinCurrentCamPos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_PINCURRENTCAMPOS_OFFSET))(this);
	}

	::System::Void CancelPinCurrentCamPos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_CANCELPINCURRENTCAMPOS_OFFSET))(this);
	}

	::System::Void ChangeEnv(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_CHANGEENV_OFFSET))(this, a1);
	}

	::System::Void ChangeQuality(::RPG::CustomRP::CustomLightQualityFilter a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_CHANGEQUALITY_OFFSET))(this, a1);
	}

	::System::Void Method_5_C4E832CB292C28C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_C4E832CB292C28C8_OFFSET))(this);
	}

	::System::Void ResetLightScene()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_RESETLIGHTSCENE_OFFSET))(this);
	}

	::System::Boolean LoadHeader(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_LOADHEADER_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* GetLightFGameObjectFromControlID(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_GETLIGHTFGAMEOBJECTFROMCONTROLID_OFFSET))(this, a1);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_5_2144A24F9EC80B59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_2144A24F9EC80B59_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Class_1_2E4F8309DC17256A<::System::Int32>* Method_5_648BBA11A4556807(::System::String* a1)
	{
		return ((::Class_1_2E4F8309DC17256A<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_648BBA11A4556807_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_5_C5FF6C7F68BCA1BA(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_C5FF6C7F68BCA1BA_OFFSET))(this, a1);
	}

	::RPG::Client::OpenWorld::StreamingLightEnum Method_5_E8D4C6A8B82CBBF7(::System::String* a1)
	{
		return ((::RPG::Client::OpenWorld::StreamingLightEnum(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_E8D4C6A8B82CBBF7_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_5E288D22F52E3FF4(::System::String* a1, ::RPG::Client::OpenWorld::StreamingLightEnum a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_5E288D22F52E3FF4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_FFEDDDE50B9BE570(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_FFEDDDE50B9BE570_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_AFFFB1DD57EDD0F7(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_AFFFB1DD57EDD0F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_5_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_5_BA18886DD7F7CF46(::System::Int32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_BA18886DD7F7CF46_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GetRegisteredLightTransforms()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_GETREGISTEREDLIGHTTRANSFORMS_OFFSET))(this);
	}

	::SceneLightVolume* Method_5_EBC80583F9EE84E5(::UnityEngine::Vector3 a1)
	{
		return ((::SceneLightVolume*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_EBC80583F9EE84E5_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_C1CFF8CC0530F137(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_C1CFF8CC0530F137_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_5_B10D028FBFD259C7()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_B10D028FBFD259C7_OFFSET))(this);
	}

	static ::System::Void StartLightPreview(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_STARTLIGHTPREVIEW_OFFSET))(a1, a2, a3);
	}

	static ::System::Void ExitLightPreView()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_EXITLIGHTPREVIEW_OFFSET))();
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_ONDESTROY_OFFSET))(this);
	}

	static ::System::Boolean IsInLightPreview()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_ISINLIGHTPREVIEW_OFFSET))();
	}

	static ::System::Boolean get_InPreview()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_GET_INPREVIEW_OFFSET))();
	}

	static ::System::Void Method_5_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_00605CD46BC5ED28_OFFSET))(a1);
	}
};
