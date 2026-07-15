#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class Transform; }

#define CLASS_3_4D01A2E7B479D8DE_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x17A9D0F0)
#define CLASS_3_4D01A2E7B479D8DE_GET_LIGHTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x17A9D040)
#define CLASS_3_4D01A2E7B479D8DE_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x17A9D700)
#define CLASS_3_4D01A2E7B479D8DE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17A9D6C0)
#define CLASS_3_4D01A2E7B479D8DE_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x17A9D3D0)
#define CLASS_3_4D01A2E7B479D8DE_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x17A9D4E0)
#define CLASS_3_4D01A2E7B479D8DE_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x17A9D420)
#define CLASS_3_4D01A2E7B479D8DE_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x17A9D540)
#define CLASS_3_4D01A2E7B479D8DE_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x17A9D210)
#define CLASS_3_4D01A2E7B479D8DE_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x17A9D140)
#define CLASS_3_4D01A2E7B479D8DE_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x17A9D190)
#define CLASS_3_4D01A2E7B479D8DE_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x17A9D680)
#define CLASS_3_4D01A2E7B479D8DE_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x17A9D630)
#define CLASS_3_4D01A2E7B479D8DE_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x17A9D1D0)
#define CLASS_3_4D01A2E7B479D8DE_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x17A9D260)
#define CLASS_3_4D01A2E7B479D8DE_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x17A9D370)
#define CLASS_3_4D01A2E7B479D8DE_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x17A9D470)
#define CLASS_3_4D01A2E7B479D8DE_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x17A9D5A0)
#define CLASS_3_4D01A2E7B479D8DE_ONTURNOFF_OFFSET UNITYSDK_OFFSET(0x17A9D330)
#define CLASS_3_4D01A2E7B479D8DE_ONTURNON_OFFSET UNITYSDK_OFFSET(0x17A9D2F0)
#define CLASS_3_4D01A2E7B479D8DE_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x17A9D5F0)
#define CLASS_3_4D01A2E7B479D8DE_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x17A9D2A0)
#define CLASS_3_4D01A2E7B479D8DE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A9D750)

inline static constexpr unsigned int Class_3_4D01A2E7B479D8DE_TypeDefinitionIndex = 47217;

class Class_3_4D01A2E7B479D8DE : public ::RPG::Client::TABehaviorBase
{
public:
	::Class_1_E4CB20B056222958* Field_3_0; // 0x38
	::System::Boolean Field_3_1; // 0x40
	::System::Boolean Field_3_2; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* get_lightTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_GET_LIGHTTRANSFORM_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONRELEASE_OFFSET))(this);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Void OnTurnOn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONTURNON_OFFSET))(this);
	}

	::System::Void OnTurnOff()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONTURNOFF_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnPreUnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
