#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_899245DF777FB0AD.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_0_16E4307DCC419505_305;
class Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB;
class Class_1_B48EFD1473830FEF;
class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_E8F2113E4254FD70_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x8A95A70)
#define CLASS_2_E8F2113E4254FD70_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x8A95AC0)
#define CLASS_2_E8F2113E4254FD70_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x8A958E0)
#define CLASS_2_E8F2113E4254FD70_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x8A967A0)
#define CLASS_2_E8F2113E4254FD70_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x8A96D50)
#define CLASS_2_E8F2113E4254FD70_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x8A96970)
#define CLASS_2_E8F2113E4254FD70_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x8A96F50)
#define CLASS_2_E8F2113E4254FD70_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x8A95DF0)
#define CLASS_2_E8F2113E4254FD70_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x8A95E40)
#define CLASS_2_E8F2113E4254FD70_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x8A95D30)
#define CLASS_2_E8F2113E4254FD70_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x8A95E90)
#define CLASS_2_E8F2113E4254FD70_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x8A95DB0)
#define CLASS_2_E8F2113E4254FD70_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x8A95B60)
#define CLASS_2_E8F2113E4254FD70_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x8A965C0)
#define CLASS_2_E8F2113E4254FD70_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x8A96B40)
#define CLASS_2_E8F2113E4254FD70_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x8A97150)
#define CLASS_2_E8F2113E4254FD70_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x8A95D70)
#define CLASS_2_E8F2113E4254FD70_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x8A95B10)
#define CLASS_2_E8F2113E4254FD70_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x8A959B0)
#define CLASS_2_E8F2113E4254FD70__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A97320)
#define CLASS_2_E8F2113E4254FD70__CTOR_OFFSET UNITYSDK_OFFSET(0x8A95970)
#define CLASS_2_E8F2113E4254FD70__UNSERIALIZEASYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x8A97350)
#define CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x8A97430)
#define CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x8A97640)
#define CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x8A977A0)
#define CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x8A976B0)
#define CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x8A97810)
#define CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x8A97570)
#define CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x8A975D0)
#define CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x8A97720)
#define CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x8A97880)
#define CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x8A97510)
#define CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x8A974A0)

inline static constexpr unsigned int Class_2_E8F2113E4254FD70_TypeDefinitionIndex = 39775;

class Class_2_E8F2113E4254FD70 : public ::Class_1_899245DF777FB0AD
{
public:
	static ::Class_1_B48EFD1473830FEF** StaticGet_Field_2_2()
	{
		return (::Class_1_B48EFD1473830FEF**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E8F2113E4254FD70_TypeDefinitionIndex)->GetStaticField(0x36AA0);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_305*>* Field_2_3; // 0x20
	::UnityEngine::GameObject* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_1; // 0x30

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70__CCTOR_OFFSET))();
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_GETTYPEID_OFFSET))(this);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__6_0(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70__UNSERIALIZEASYNC_B__6_0_OFFSET))(this, m);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_SetHostManagedLight(::Class_1_E4CB20B056222958* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_SETHOSTMANAGEDLIGHT_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightFading(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightFading(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnSceneLightLodFading(::System::Single P0, ::ScenenLightManager::FadingState P1, ::System::Int32 P2, ::System::Int32 P3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightLodFading(::ScenenLightManager::FadingState P0, ::System::Int32 P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightLodFading(::ScenenLightManager::FadingState P0, ::System::Int32 P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnSetSceneLightLod(::System::Int32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8F2113E4254FD70___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET))(this, P0);
	}
};
