#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_E4CB20B056222958;
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace RPG::CustomRP { class StencilDelegate; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System { class String; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_765A00EE88349A01_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x17A16810)
#define CLASS_1_765A00EE88349A01_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x17A168F0)
#define CLASS_1_765A00EE88349A01_GET_LIGHTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x17A166D0)
#define CLASS_1_765A00EE88349A01_METHOD_1_27CB0F44F1936A47_OFFSET UNITYSDK_OFFSET(0x17A18290)
#define CLASS_1_765A00EE88349A01_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x17A16770)
#define CLASS_1_765A00EE88349A01_METHOD_1_5C41EBF67ECEFA12_1_OFFSET UNITYSDK_OFFSET(0x17A16AD0)
#define CLASS_1_765A00EE88349A01_METHOD_1_5C41EBF67ECEFA12_OFFSET UNITYSDK_OFFSET(0x17A16A70)
#define CLASS_1_765A00EE88349A01_METHOD_1_8CC9D262040F004A_OFFSET UNITYSDK_OFFSET(0x17A169C0)
#define CLASS_1_765A00EE88349A01_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17A16730)
#define CLASS_1_765A00EE88349A01_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17A166F0)
#define CLASS_1_765A00EE88349A01_METHOD_1_FDD9D091D27FA33F_OFFSET UNITYSDK_OFFSET(0x17A16940)
#define CLASS_1_765A00EE88349A01_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x17A18710)
#define CLASS_1_765A00EE88349A01_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x17A188E0)
#define CLASS_1_765A00EE88349A01_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x17A187A0)
#define CLASS_1_765A00EE88349A01_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x17A18980)
#define CLASS_1_765A00EE88349A01_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x17A18460)
#define CLASS_1_765A00EE88349A01_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x17A16860)
#define CLASS_1_765A00EE88349A01_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x17A168B0)
#define CLASS_1_765A00EE88349A01_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x17A18BC0)
#define CLASS_1_765A00EE88349A01_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x17A18B30)
#define CLASS_1_765A00EE88349A01_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x17A183E0)
#define CLASS_1_765A00EE88349A01_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x17A184F0)
#define CLASS_1_765A00EE88349A01_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x17A18670)
#define CLASS_1_765A00EE88349A01_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x17A18830)
#define CLASS_1_765A00EE88349A01_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x17A18A20)
#define CLASS_1_765A00EE88349A01_ONTURNOFF_OFFSET UNITYSDK_OFFSET(0x17A185F0)
#define CLASS_1_765A00EE88349A01_ONTURNON_OFFSET UNITYSDK_OFFSET(0x17A18570)
#define CLASS_1_765A00EE88349A01_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x17A18AB0)
#define CLASS_1_765A00EE88349A01_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x17A167C0)
#define CLASS_1_765A00EE88349A01_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x17A16B30)
#define CLASS_1_765A00EE88349A01__CTOR_OFFSET UNITYSDK_OFFSET(0x17A166E0)
#define CLASS_1_765A00EE88349A01__UNSERIALIZEASYNC_B__21_0_OFFSET UNITYSDK_OFFSET(0x17A18C40)
#define CLASS_1_765A00EE88349A01__UNSERIALIZEASYNC_B__21_1_OFFSET UNITYSDK_OFFSET(0x17A18CA0)
#define CLASS_1_765A00EE88349A01__UNSERIALIZEASYNC_B__21_2_OFFSET UNITYSDK_OFFSET(0x17A18CF0)
#define CLASS_1_765A00EE88349A01__UNSERIALIZEASYNC_B__21_3_OFFSET UNITYSDK_OFFSET(0x17A18D40)

inline static constexpr unsigned int Class_1_765A00EE88349A01_TypeDefinitionIndex = 47220;

class Class_1_765A00EE88349A01 : public ::System::Object
{
public:
	::RPG::CustomRP::CustomAdditionalLightData* Field_1_0; // 0x10
	::RPG::CustomRP::CustomAdditionalLightData* Field_1_1; // 0x18
	::UnityEngine::Light* Field_1_2; // 0x20
	::UnityEngine::Light* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* get_lightTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_GET_LIGHTTRANSFORM_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_GETTYPEID_OFFSET))(this);
	}

	::UnityEngine::Mesh* Method_1_FDD9D091D27FA33F()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_METHOD_1_FDD9D091D27FA33F_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 Method_1_8CC9D262040F004A()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_METHOD_1_8CC9D262040F004A_OFFSET))(this);
	}

	::System::Void Method_1_5C41EBF67ECEFA12(::UnityEngine::Light* a1, ::RPG::CustomRP::CustomAdditionalLightData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::RPG::CustomRP::CustomAdditionalLightData*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_METHOD_1_5C41EBF67ECEFA12_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C41EBF67ECEFA12_1(::UnityEngine::Light* a1, ::RPG::CustomRP::CustomAdditionalLightData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::RPG::CustomRP::CustomAdditionalLightData*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_METHOD_1_5C41EBF67ECEFA12_1_OFFSET))(this, a1, a2);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_27CB0F44F1936A47(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::RPG::CustomRP::StencilDelegate* a2, ::System::String* a3, ::System::Int64 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::RPG::CustomRP::StencilDelegate*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_METHOD_1_27CB0F44F1936A47_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnTurnOn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONTURNON_OFFSET))(this);
	}

	::System::Void OnTurnOff()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONTURNOFF_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnPreUnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__21_0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01__UNSERIALIZEASYNC_B__21_0_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__21_1(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01__UNSERIALIZEASYNC_B__21_1_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__21_2(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01__UNSERIALIZEASYNC_B__21_2_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__21_3(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01__UNSERIALIZEASYNC_B__21_3_OFFSET))(this, a1);
	}
};
