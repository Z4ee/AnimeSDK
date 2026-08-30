#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/SceneManagedLightComponent1.h"
#include "unitysdk/Struct_2_FB7FD3F7A6A85D5E.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CharacterLineLightGroup_CLLG_Line;
class CharacterLineLightGroup_CLLG_Point;
class CharacterLineLightGroup_Class_1_6B669866A7A95ADE;
class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHARACTERLINELIGHTGROUP_CHECKCHARACTERREGISTED_OFFSET UNITYSDK_OFFSET(0x1A86BD50)
#define CHARACTERLINELIGHTGROUP_GETDISTPURESQR_OFFSET UNITYSDK_OFFSET(0x1A86C550)
#define CHARACTERLINELIGHTGROUP_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1A86DB10)
#define CHARACTERLINELIGHTGROUP_METHOD_6_6F87951B9D486079_OFFSET UNITYSDK_OFFSET(0x1A86C070)
#define CHARACTERLINELIGHTGROUP_METHOD_6_B55B4025971E9993_OFFSET UNITYSDK_OFFSET(0x1A86C820)
#define CHARACTERLINELIGHTGROUP_METHOD_6_E8F71E76BFB1CC01_OFFSET UNITYSDK_OFFSET(0x1A86C930)
#define CHARACTERLINELIGHTGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A86D000)
#define CHARACTERLINELIGHTGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A86CFB0)
#define CHARACTERLINELIGHTGROUP_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x1A86DC40)
#define CHARACTERLINELIGHTGROUP_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x1A86DBB0)
#define CHARACTERLINELIGHTGROUP_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x1A86DD60)
#define CHARACTERLINELIGHTGROUP_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x1A86DE30)
#define CHARACTERLINELIGHTGROUP_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1A86DDE0)
#define CHARACTERLINELIGHTGROUP_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x1A86DC00)
#define CHARACTERLINELIGHTGROUP_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x1A86DC90)
#define CHARACTERLINELIGHTGROUP_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x1A86DDA0)
#define CHARACTERLINELIGHTGROUP_REGISTERCHARACTER_OFFSET UNITYSDK_OFFSET(0x1A86BE20)
#define CHARACTERLINELIGHTGROUP_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x1A86DB60)
#define CHARACTERLINELIGHTGROUP_UNREGISTERCHARACTER_OFFSET UNITYSDK_OFFSET(0x1A86C3D0)
#define CHARACTERLINELIGHTGROUP_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1A86D620)
#define CHARACTERLINELIGHTGROUP_UPDATELIGHTINFO_OFFSET UNITYSDK_OFFSET(0x1A86D090)
#define CHARACTERLINELIGHTGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A86D5D0)
#define CHARACTERLINELIGHTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A86DE70)

inline static constexpr unsigned int CharacterLineLightGroup_TypeDefinitionIndex = 47921;

class CharacterLineLightGroup : public ::ScenenLightManager::SceneManagedLightComponent1
{
public:
	static ::CharacterLineLightGroup** StaticGet_Instanced()
	{
		return (::CharacterLineLightGroup**)Il2CppClass::FromTypeDefinitionIndex(CharacterLineLightGroup_TypeDefinitionIndex)->GetStaticField(0x5A440);
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

	::System::Boolean Method_6_E8F71E76BFB1CC01(::UnityEngine::Vector3 a1, ::System::Int32& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Color& a5, ::System::Single& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Color&, ::System::Single&))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_METHOD_6_E8F71E76BFB1CC01_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_6_6F87951B9D486079(::UnityEngine::Vector3 a1, ::System::Int32& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_METHOD_6_6F87951B9D486079_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONDISABLE_OFFSET))(this);
	}

	::System::Boolean UpdateLightInfo(::Struct_2_FB7FD3F7A6A85D5E a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FB7FD3F7A6A85D5E, ::System::Boolean))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_UPDATELIGHTINFO_OFFSET))(this, a1, a2);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_UPDATE_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_GETTYPEID_OFFSET))(this);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
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

	::System::Void OnPreUnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_ONOBJECTENABLE_OFFSET))(this);
	}
};
