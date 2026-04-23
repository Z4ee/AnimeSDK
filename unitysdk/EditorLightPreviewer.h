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
template <typename T> class Class_1_463D937AB9C3D339;

#define EDITORLIGHTPREVIEWER_CANCELPINCURRENTCAMPOS_OFFSET UNITYSDK_OFFSET(0xF2F1810)
#define EDITORLIGHTPREVIEWER_CHANGEENV_OFFSET UNITYSDK_OFFSET(0xF2F1580)
#define EDITORLIGHTPREVIEWER_CHANGEQUALITY_OFFSET UNITYSDK_OFFSET(0xF2F1300)
#define EDITORLIGHTPREVIEWER_EXITLIGHTPREVIEW_OFFSET UNITYSDK_OFFSET(0xF2F2D80)
#define EDITORLIGHTPREVIEWER_EXITPREVIEW_OFFSET UNITYSDK_OFFSET(0xF2F0420)
#define EDITORLIGHTPREVIEWER_GETCIDFROMOBJ_OFFSET UNITYSDK_OFFSET(0xF2F0330)
#define EDITORLIGHTPREVIEWER_GETLIGHTFGAMEOBJECTFROMCONTROLID_OFFSET UNITYSDK_OFFSET(0xF2F1B10)
#define EDITORLIGHTPREVIEWER_GET_INPREVIEW_OFFSET UNITYSDK_OFFSET(0xF2F2F60)
#define EDITORLIGHTPREVIEWER_ISALIVE_OFFSET UNITYSDK_OFFSET(0xF2F02A0)
#define EDITORLIGHTPREVIEWER_ISINLIGHTPREVIEW_OFFSET UNITYSDK_OFFSET(0xF2F2ED0)
#define EDITORLIGHTPREVIEWER_LOADHEADER_OFFSET UNITYSDK_OFFSET(0xF2F0E30)
#define EDITORLIGHTPREVIEWER_METHOD_5_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0xF2F2D40)
#define EDITORLIGHTPREVIEWER_METHOD_5_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0xF2F1860)
#define EDITORLIGHTPREVIEWER_METHOD_5_58DF4ECFAC9D8302_OFFSET UNITYSDK_OFFSET(0xF2F2600)
#define EDITORLIGHTPREVIEWER_METHOD_5_5E288D22F52E3FF4_OFFSET UNITYSDK_OFFSET(0xF2F2110)
#define EDITORLIGHTPREVIEWER_METHOD_5_648BBA11A4556807_OFFSET UNITYSDK_OFFSET(0xF2F1C90)
#define EDITORLIGHTPREVIEWER_METHOD_5_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xF2EF0D0)
#define EDITORLIGHTPREVIEWER_METHOD_5_96980C17A8BB1F06_OFFSET UNITYSDK_OFFSET(0xF2F0980)
#define EDITORLIGHTPREVIEWER_METHOD_5_AFFFB1DD57EDD0F7_OFFSET UNITYSDK_OFFSET(0xF2F2410)
#define EDITORLIGHTPREVIEWER_METHOD_5_B10D028FBFD259C7_OFFSET UNITYSDK_OFFSET(0xF2F2BF0)
#define EDITORLIGHTPREVIEWER_METHOD_5_BA18886DD7F7CF46_OFFSET UNITYSDK_OFFSET(0xF2F2970)
#define EDITORLIGHTPREVIEWER_METHOD_5_BB5D5C8FD881E686_OFFSET UNITYSDK_OFFSET(0xF2F1FC0)
#define EDITORLIGHTPREVIEWER_METHOD_5_C1CFF8CC0530F137_OFFSET UNITYSDK_OFFSET(0xF2F2AF0)
#define EDITORLIGHTPREVIEWER_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xF2F1730)
#define EDITORLIGHTPREVIEWER_METHOD_5_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xF2F25C0)
#define EDITORLIGHTPREVIEWER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF2F16F0)
#define EDITORLIGHTPREVIEWER_METHOD_5_CF3FF89BC7293141_OFFSET UNITYSDK_OFFSET(0xF2F22C0)
#define EDITORLIGHTPREVIEWER_METHOD_5_F3B08E53C999F05B_OFFSET UNITYSDK_OFFSET(0xF2F1E40)
#define EDITORLIGHTPREVIEWER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF2F2E80)
#define EDITORLIGHTPREVIEWER_PINCURRENTCAMPOS_OFFSET UNITYSDK_OFFSET(0xF2F1770)
#define EDITORLIGHTPREVIEWER_RESETLIGHTSCENE_OFFSET UNITYSDK_OFFSET(0xF2F0620)
#define EDITORLIGHTPREVIEWER_STARTLIGHTPREVIEW_OFFSET UNITYSDK_OFFSET(0xF2F2C50)
#define EDITORLIGHTPREVIEWER_STARTPREVIEW_OFFSET UNITYSDK_OFFSET(0xF2F0CB0)
#define EDITORLIGHTPREVIEWER_UPDATE_OFFSET UNITYSDK_OFFSET(0xF2EF080)
#define EDITORLIGHTPREVIEWER__CTOR_OFFSET UNITYSDK_OFFSET(0xF2F3020)

inline static constexpr unsigned int EditorLightPreviewer_TypeDefinitionIndex = 44126;

class EditorLightPreviewer : public ::UnityEngine::MonoBehaviour
{
public:
	static ::EditorLightPreviewer** StaticGet_viewer()
	{
		return (::EditorLightPreviewer**)Il2CppClass::FromTypeDefinitionIndex(EditorLightPreviewer_TypeDefinitionIndex)->GetStaticField(0x12120);
	}
	::ScenenLightManager::BlockEnvExportDataHeader* Field_5_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_5_1; // 0x20
	::Class_1_463D937AB9C3D339<::System::Int32>* Field_5_2; // 0x28
	::Class_1_463D937AB9C3D339<::System::Int32>* Field_5_3; // 0x30
	::UnityEngine::Transform* Field_5_4; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_5_5; // 0x40
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Int32>* Field_5_6; // 0x48
	::System::Int32 LightId; // 0x50
	::System::Int32 LightCount; // 0x54
	::UnityEngine::Vector3 SetPos; // 0x58
	::System::Boolean SetP; // 0x64
	::System::Boolean Field_5_11; // 0x65
	::System::Boolean Field_5_12; // 0x66
	::RPG::CustomRP::CustomLightQualityFilter quality; // 0x68
	::RPG::CustomRP::CustomLightQualityFilter Field_5_14; // 0x6C
	::System::Collections::Generic::List_1<::System::String*>* envOption; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_5_16; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_5_17; // 0x80
	::System::Int32 envIdx; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::EditorLightPreviewer_Class_1_128EA0FF53AE8A47*>* Field_5_19; // 0x90
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>* Field_5_20; // 0x98
	::System::Collections::Generic::List_1<::SceneLightVolume*>* Field_5_21; // 0xA0
	::UnityEngine::Vector3 Field_5_22; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E4CB20B056222958*>* Field_5_23; // 0xB8
	::System::Boolean Field_5_24; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::OpenWorld::StreamingLightEnum>* Field_5_25; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_5_26; // 0xD0
	::System::Collections::Generic::List_1<::SceneLightVolume*>* Field_5_27; // 0xD8
	::System::String* Field_5_28; // 0xE0

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

	::System::Void Method_5_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_14014646206E49EF_OFFSET))(this);
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

	::System::Void Method_5_96980C17A8BB1F06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_96980C17A8BB1F06_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Class_1_463D937AB9C3D339<::System::Int32>* Method_5_648BBA11A4556807(::System::String* a1)
	{
		return ((::Class_1_463D937AB9C3D339<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_648BBA11A4556807_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_5_F3B08E53C999F05B(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_F3B08E53C999F05B_OFFSET))(this, a1);
	}

	::RPG::Client::OpenWorld::StreamingLightEnum Method_5_BB5D5C8FD881E686(::System::String* a1)
	{
		return ((::RPG::Client::OpenWorld::StreamingLightEnum(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_BB5D5C8FD881E686_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_5E288D22F52E3FF4(::System::String* a1, ::RPG::Client::OpenWorld::StreamingLightEnum a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_5E288D22F52E3FF4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_CF3FF89BC7293141(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_CF3FF89BC7293141_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_AFFFB1DD57EDD0F7(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_AFFFB1DD57EDD0F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_5_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_5_BA18886DD7F7CF46(::System::Int32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_BA18886DD7F7CF46_OFFSET))(this, a1, a2);
	}

	::SceneLightVolume* Method_5_58DF4ECFAC9D8302(::UnityEngine::Vector3 a1)
	{
		return ((::SceneLightVolume*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_METHOD_5_58DF4ECFAC9D8302_OFFSET))(this, a1);
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
