#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB;
class Class_1_E4CB20B056222958;
namespace RPG::CustomRP { class CRPProbe; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D9C9260AA8685D3A_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0xD7C4E10)
#define CLASS_1_D9C9260AA8685D3A_GETTYPEID_OFFSET UNITYSDK_OFFSET(0xD7C4D70)
#define CLASS_1_D9C9260AA8685D3A_GET_LIGHTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD7C4BF0)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xD7C4C90)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_56DA2DEC73AA9CE8_OFFSET UNITYSDK_OFFSET(0xD7C4E60)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_8CC9D262040F004A_OFFSET UNITYSDK_OFFSET(0xD7C4EE0)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_9519692C1DBF10E6_1_OFFSET UNITYSDK_OFFSET(0xD7C4FF0)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_9519692C1DBF10E6_OFFSET UNITYSDK_OFFSET(0xD7C4F90)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD7C4C50)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD7C4C00)
#define CLASS_1_D9C9260AA8685D3A_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xD7C5740)
#define CLASS_1_D9C9260AA8685D3A_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xD7C5910)
#define CLASS_1_D9C9260AA8685D3A_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xD7C57D0)
#define CLASS_1_D9C9260AA8685D3A_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xD7C59B0)
#define CLASS_1_D9C9260AA8685D3A_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0xD7C5490)
#define CLASS_1_D9C9260AA8685D3A_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0xD7C4D20)
#define CLASS_1_D9C9260AA8685D3A_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0xD7C4CE0)
#define CLASS_1_D9C9260AA8685D3A_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0xD7C5BF0)
#define CLASS_1_D9C9260AA8685D3A_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xD7C5B60)
#define CLASS_1_D9C9260AA8685D3A_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0xD7C5410)
#define CLASS_1_D9C9260AA8685D3A_ONRELEASE_OFFSET UNITYSDK_OFFSET(0xD7C5520)
#define CLASS_1_D9C9260AA8685D3A_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xD7C56A0)
#define CLASS_1_D9C9260AA8685D3A_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xD7C5860)
#define CLASS_1_D9C9260AA8685D3A_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0xD7C5A50)
#define CLASS_1_D9C9260AA8685D3A_ONTURNOFF_OFFSET UNITYSDK_OFFSET(0xD7C5620)
#define CLASS_1_D9C9260AA8685D3A_ONTURNON_OFFSET UNITYSDK_OFFSET(0xD7C55A0)
#define CLASS_1_D9C9260AA8685D3A_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0xD7C5AE0)
#define CLASS_1_D9C9260AA8685D3A_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0xD7C4DC0)
#define CLASS_1_D9C9260AA8685D3A_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xD7C5050)
#define CLASS_1_D9C9260AA8685D3A__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C4C40)
#define CLASS_1_D9C9260AA8685D3A__UNSERIALIZEASYNC_B__21_0_OFFSET UNITYSDK_OFFSET(0xD7C5C70)
#define CLASS_1_D9C9260AA8685D3A__UNSERIALIZEASYNC_B__21_1_OFFSET UNITYSDK_OFFSET(0xD7C5CD0)

inline static constexpr unsigned int Class_1_D9C9260AA8685D3A_TypeDefinitionIndex = 39766;

class Class_1_D9C9260AA8685D3A : public ::System::Object
{
public:
	::RPG::CustomRP::CRPProbe* Field_1_5; // 0x10
	::UnityEngine::ReflectionProbe* Field_1_2; // 0x18
	::UnityEngine::ReflectionProbe* Field_1_3; // 0x20
	::RPG::CustomRP::CRPProbe* Field_1_4; // 0x28
	::System::Boolean Field_1_1; // 0x30
	::System::Boolean Field_1_0; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* get_lightTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_GET_LIGHTTRANSFORM_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_GETTYPEID_OFFSET))(this);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_GETQUALITYFILTER_OFFSET))(this);
	}

	::UnityEngine::Mesh* Method_1_56DA2DEC73AA9CE8()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_METHOD_1_56DA2DEC73AA9CE8_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 Method_1_8CC9D262040F004A()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_METHOD_1_8CC9D262040F004A_OFFSET))(this);
	}

	::System::Void Method_1_9519692C1DBF10E6(::UnityEngine::ReflectionProbe* a1, ::RPG::CustomRP::CRPProbe* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ReflectionProbe*, ::RPG::CustomRP::CRPProbe*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_METHOD_1_9519692C1DBF10E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9519692C1DBF10E6_1(::UnityEngine::ReflectionProbe* a1, ::RPG::CustomRP::CRPProbe* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ReflectionProbe*, ::RPG::CustomRP::CRPProbe*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_METHOD_1_9519692C1DBF10E6_1_OFFSET))(this, a1, a2);
	}

	::System::Void UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnTurnOn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONTURNON_OFFSET))(this);
	}

	::System::Void OnTurnOff()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONTURNOFF_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnPreUnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__21_0(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A__UNSERIALIZEASYNC_B__21_0_OFFSET))(this, m);
	}

	::System::Void _UnserializeAsync_b__21_1(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A__UNSERIALIZEASYNC_B__21_1_OFFSET))(this, m);
	}
};
