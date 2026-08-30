#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3689070D59DB42E6.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }

#define CLASS_4_B6AACEC5D32C6DA3_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x177A7D20)
#define CLASS_4_B6AACEC5D32C6DA3_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x177A8510)
#define CLASS_4_B6AACEC5D32C6DA3_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x177A81F0)
#define CLASS_4_B6AACEC5D32C6DA3_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x177A8260)
#define CLASS_4_B6AACEC5D32C6DA3_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x177A7EA0)
#define CLASS_4_B6AACEC5D32C6DA3_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x177A7F70)
#define CLASS_4_B6AACEC5D32C6DA3_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x177A8110)
#define CLASS_4_B6AACEC5D32C6DA3_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x177A83C0)
#define CLASS_4_B6AACEC5D32C6DA3_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x177A7D70)
#define CLASS_4_B6AACEC5D32C6DA3__CTOR_OFFSET UNITYSDK_OFFSET(0x177A7D10)

inline static constexpr unsigned int Class_4_B6AACEC5D32C6DA3_TypeDefinitionIndex = 49476;

class Class_4_B6AACEC5D32C6DA3 : public ::Class_3_3689070D59DB42E6
{
public:
	::System::Boolean GIKNGLNMPOO; // 0x50
	::System::Single CCIDCHOPEJO; // 0x54
	::System::Single DJPCKGAJFKP; // 0x58

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3__CTOR_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_GETTYPEID_OFFSET))(this);
	}
};
