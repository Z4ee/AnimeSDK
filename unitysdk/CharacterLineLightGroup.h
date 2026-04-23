#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/SceneManagedLightComponent1.h"
#include "unitysdk/Struct_2_067E33D6A81F6B11.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CharacterLineLightGroup_CLLG_Line;
class CharacterLineLightGroup_CLLG_Point;
class CharacterLineLightGroup_Class_1_6B669866A7A95ADE;
class Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB;
class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHARACTERLINELIGHTGROUP_CHECKCHARACTERREGISTED_OFFSET UNITYSDK_OFFSET(0xACF9040)
#define CHARACTERLINELIGHTGROUP_GETDISTPURESQR_OFFSET UNITYSDK_OFFSET(0xACF9720)
#define CHARACTERLINELIGHTGROUP_GETTYPEID_OFFSET UNITYSDK_OFFSET(0xACFAAD0)
#define CHARACTERLINELIGHTGROUP_METHOD_6_6FC2E52CEA145F33_OFFSET UNITYSDK_OFFSET(0xACF9AC0)
#define CHARACTERLINELIGHTGROUP_METHOD_6_81477A6564EC4E54_OFFSET UNITYSDK_OFFSET(0xACF92C0)
#define CHARACTERLINELIGHTGROUP_METHOD_6_B55B4025971E9993_OFFSET UNITYSDK_OFFSET(0xACF99B0)
#define CHARACTERLINELIGHTGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xACFA170)
#define CHARACTERLINELIGHTGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xACFA120)
#define CHARACTERLINELIGHTGROUP_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0xACFAC00)
#define CHARACTERLINELIGHTGROUP_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0xACFAB70)
#define CHARACTERLINELIGHTGROUP_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0xACFAC90)
#define CHARACTERLINELIGHTGROUP_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0xACFAD60)
#define CHARACTERLINELIGHTGROUP_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xACFAD10)
#define CHARACTERLINELIGHTGROUP_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0xACFABC0)
#define CHARACTERLINELIGHTGROUP_ONRELEASE_OFFSET UNITYSDK_OFFSET(0xACFAC50)
#define CHARACTERLINELIGHTGROUP_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0xACFACD0)
#define CHARACTERLINELIGHTGROUP_REGISTERCHARACTER_OFFSET UNITYSDK_OFFSET(0xACF9100)
#define CHARACTERLINELIGHTGROUP_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0xACFAB20)
#define CHARACTERLINELIGHTGROUP_UNREGISTERCHARACTER_OFFSET UNITYSDK_OFFSET(0xACF95F0)
#define CHARACTERLINELIGHTGROUP_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xACFA760)
#define CHARACTERLINELIGHTGROUP_UPDATELIGHTINFO_OFFSET UNITYSDK_OFFSET(0xACFA280)
#define CHARACTERLINELIGHTGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0xACFA710)
#define CHARACTERLINELIGHTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xACFADA0)

inline static constexpr unsigned int CharacterLineLightGroup_TypeDefinitionIndex = 44209;

class CharacterLineLightGroup : public ::ScenenLightManager::SceneManagedLightComponent1
{
public:
	static ::CharacterLineLightGroup** StaticGet_Instanced()
	{
		return (::CharacterLineLightGroup**)Il2CppClass::FromTypeDefinitionIndex(CharacterLineLightGroup_TypeDefinitionIndex)->GetStaticField(0x12750);
	}
	::System::Collections::Generic::List_1<::CharacterLineLightGroup_CLLG_Line*>* Lines; // 0x28
	::System::Collections::Generic::List_1<::CharacterLineLightGroup_CLLG_Point*>* Points; // 0x30
	::System::Collections::Generic::List_1<::CharacterLineLightGroup_Class_1_6B669866A7A95ADE*>* Characters; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP__CTOR_OFFSET))(this);
	}

	::System::Boolean CheckCharacterRegisted(::CharacterLineLightGroup_Class_1_6B669866A7A95ADE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::CharacterLineLightGroup_Class_1_6B669866A7A95ADE*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_CHECKCHARACTERREGISTED_OFFSET))(this, a1);
	}

	::System::Void RegisterCharacter(::CharacterLineLightGroup_Class_1_6B669866A7A95ADE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::CharacterLineLightGroup_Class_1_6B669866A7A95ADE*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_REGISTERCHARACTER_OFFSET))(this, a1);
	}

	::System::Void UnregisterCharacter(::CharacterLineLightGroup_Class_1_6B669866A7A95ADE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::CharacterLineLightGroup_Class_1_6B669866A7A95ADE*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_UNREGISTERCHARACTER_OFFSET))(this, a1);
	}

	::System::Single GetDistPureSqr(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_GETDISTPURESQR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_6_B55B4025971E9993(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_METHOD_6_B55B4025971E9993_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_6_6FC2E52CEA145F33(::UnityEngine::Vector3 a1, ::System::Int32& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Color& a5, ::System::Single& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Color&, ::System::Single&))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_METHOD_6_6FC2E52CEA145F33_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_6_81477A6564EC4E54(::UnityEngine::Vector3 a1, ::System::Int32& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_METHOD_6_81477A6564EC4E54_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONDISABLE_OFFSET))(this);
	}

	::System::Boolean UpdateLightInfo(::Struct_2_067E33D6A81F6B11 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_067E33D6A81F6B11, ::System::Boolean))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_UPDATELIGHTINFO_OFFSET))(this, a1, a2);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_UPDATE_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_GETTYPEID_OFFSET))(this);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnPreUnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONOBJECTENABLE_OFFSET))(this);
	}
};
