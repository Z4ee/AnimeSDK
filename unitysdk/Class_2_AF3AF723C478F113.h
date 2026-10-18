#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_899245DF777FB0AD.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_E4CB20B056222958;
class Class_3_F9239572AE67D4C2;
namespace RPG::Client { class BillboardController; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_AF3AF723C478F113_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x15B53200)
#define CLASS_2_AF3AF723C478F113_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x15B53170)
#define CLASS_2_AF3AF723C478F113_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x15B530D0)
#define CLASS_2_AF3AF723C478F113_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x15B53B40)
#define CLASS_2_AF3AF723C478F113_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x15B531C0)
#define CLASS_2_AF3AF723C478F113_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x15B53AD0)
#define CLASS_2_AF3AF723C478F113_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15B53250)
#define CLASS_2_AF3AF723C478F113_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x15B539C0)
#define CLASS_2_AF3AF723C478F113_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x15B53120)
#define CLASS_2_AF3AF723C478F113_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x15B532D0)
#define CLASS_2_AF3AF723C478F113__CTOR_OFFSET UNITYSDK_OFFSET(0x15B52FE0)
#define CLASS_2_AF3AF723C478F113__UNSERIALIZEASYNC_B__12_0_OFFSET UNITYSDK_OFFSET(0x15B53B80)
#define CLASS_2_AF3AF723C478F113__UNSERIALIZEASYNC_B__12_1_OFFSET UNITYSDK_OFFSET(0x15B53BB0)

inline static constexpr unsigned int Class_2_AF3AF723C478F113_TypeDefinitionIndex = 49039;

class Class_2_AF3AF723C478F113 : public ::Class_1_899245DF777FB0AD
{
public:
	::RPG::Client::BillboardController* LBMMAIOMDAM; // 0x20
	::Class_3_F9239572AE67D4C2* HINIKDOHFHL; // 0x28
	::UnityEngine::GameObject* PANGKOPAOML; // 0x30
	::System::Single CBKEAPEHIMO; // 0x38

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONPUTTOPOOL_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__12_0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113__UNSERIALIZEASYNC_B__12_0_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__12_1(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113__UNSERIALIZEASYNC_B__12_1_OFFSET))(this, a1);
	}
};
