#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_E4CB20B056222958;
namespace RPG::CustomRP { class CRPProbe; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D9C9260AA8685D3A_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x15863110)
#define CLASS_1_D9C9260AA8685D3A_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x15863070)
#define CLASS_1_D9C9260AA8685D3A_GET_LIGHTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x15862EF0)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x15862F90)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_8CC9D262040F004A_OFFSET UNITYSDK_OFFSET(0x158631E0)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_9519692C1DBF10E6_1_OFFSET UNITYSDK_OFFSET(0x158632F0)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_9519692C1DBF10E6_OFFSET UNITYSDK_OFFSET(0x15863290)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15862F50)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15862F00)
#define CLASS_1_D9C9260AA8685D3A_METHOD_1_FDD9D091D27FA33F_OFFSET UNITYSDK_OFFSET(0x15863160)
#define CLASS_1_D9C9260AA8685D3A_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15863A80)
#define CLASS_1_D9C9260AA8685D3A_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15863C50)
#define CLASS_1_D9C9260AA8685D3A_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15863B10)
#define CLASS_1_D9C9260AA8685D3A_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15863CF0)
#define CLASS_1_D9C9260AA8685D3A_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x158637D0)
#define CLASS_1_D9C9260AA8685D3A_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x15863020)
#define CLASS_1_D9C9260AA8685D3A_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x15862FE0)
#define CLASS_1_D9C9260AA8685D3A_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x15863F30)
#define CLASS_1_D9C9260AA8685D3A_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x15863EA0)
#define CLASS_1_D9C9260AA8685D3A_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x15863750)
#define CLASS_1_D9C9260AA8685D3A_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x15863860)
#define CLASS_1_D9C9260AA8685D3A_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x158639E0)
#define CLASS_1_D9C9260AA8685D3A_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15863BA0)
#define CLASS_1_D9C9260AA8685D3A_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x15863D90)
#define CLASS_1_D9C9260AA8685D3A_ONTURNOFF_OFFSET UNITYSDK_OFFSET(0x15863960)
#define CLASS_1_D9C9260AA8685D3A_ONTURNON_OFFSET UNITYSDK_OFFSET(0x158638E0)
#define CLASS_1_D9C9260AA8685D3A_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x15863E20)
#define CLASS_1_D9C9260AA8685D3A_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x158630C0)
#define CLASS_1_D9C9260AA8685D3A_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x15863350)
#define CLASS_1_D9C9260AA8685D3A__CTOR_OFFSET UNITYSDK_OFFSET(0x15862F40)
#define CLASS_1_D9C9260AA8685D3A__UNSERIALIZEASYNC_B__21_0_OFFSET UNITYSDK_OFFSET(0x15863FB0)
#define CLASS_1_D9C9260AA8685D3A__UNSERIALIZEASYNC_B__21_1_OFFSET UNITYSDK_OFFSET(0x15864010)

inline static constexpr unsigned int Class_1_D9C9260AA8685D3A_TypeDefinitionIndex = 49503;

class Class_1_D9C9260AA8685D3A : public ::System::Object
{
public:
	::RPG::CustomRP::CRPProbe* GMIOPBAGHNN; // 0x10
	::RPG::CustomRP::CRPProbe* BHNADPMKCDF; // 0x18
	::UnityEngine::ReflectionProbe* FMKHAJEINDH; // 0x20
	::UnityEngine::ReflectionProbe* DFDGGMEIICL; // 0x28
	::System::Boolean KAIGPKAJOAM; // 0x30
	::System::Boolean OINDCKEEHPF; // 0x31

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

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
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

	::UnityEngine::Mesh* Method_1_FDD9D091D27FA33F()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_METHOD_1_FDD9D091D27FA33F_OFFSET))(this);
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

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
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

	::System::Void OnPreUnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__21_0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A__UNSERIALIZEASYNC_B__21_0_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__21_1(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D9C9260AA8685D3A__UNSERIALIZEASYNC_B__21_1_OFFSET))(this, a1);
	}
};
