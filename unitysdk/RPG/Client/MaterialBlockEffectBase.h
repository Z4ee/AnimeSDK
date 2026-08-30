#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialBlockEffectPropertyType.h"
#include "unitysdk/RPG/Client/PolymerEffectControllBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_303D5A33D1401D59;
namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace RPG::Client { class MaterialBlockEffectBase_Class_1_00B8630D1668D264; }
namespace RPG::Client { class MaterialBlockEffectBase_PropEffectItem; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ADDONEMATERIALBLOCK_OFFSET UNITYSDK_OFFSET(0xD679F00)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD67A310)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD679EC0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ENDLODTRANSITION_OFFSET UNITYSDK_OFFSET(0xD6798B0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_METHOD_6_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xD67AAC0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_METHOD_6_6A4774248EB22533_OFFSET UNITYSDK_OFFSET(0xD67A180)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_METHOD_6_8B4B595B09EC9421_OFFSET UNITYSDK_OFFSET(0xD67AC40)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_METHOD_6_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0xD679A50)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_METHOD_6_E0752335E9613972_OFFSET UNITYSDK_OFFSET(0xD67B4E0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD67A3C0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ONPOLYMERREBUILDAFTERFADING_OFFSET UNITYSDK_OFFSET(0xD679840)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET UNITYSDK_OFFSET(0xD679400)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_RESET_OFFSET UNITYSDK_OFFSET(0xD67A570)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_SETMATERIALBLOCKEFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0xD67A470)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD679A00)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_STARTLODTRANSITION_OFFSET UNITYSDK_OFFSET(0xD679510)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_TICK_OFFSET UNITYSDK_OFFSET(0xD67A6D0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEKEYWORDDATA_OFFSET UNITYSDK_OFFSET(0xD67B2C0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEPROPERTYDATA_1_OFFSET UNITYSDK_OFFSET(0xD67AFB0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEPROPERTYDATA_2_OFFSET UNITYSDK_OFFSET(0xD67B120)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0xD67AE30)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0xD67B690)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xD67B680)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialBlockEffectBase_TypeDefinitionIndex = 70612;

	class MaterialBlockEffectBase : public ::RPG::Client::PolymerEffectControllBase
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_EffectPropertyIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MaterialBlockEffectBase_TypeDefinitionIndex)->GetStaticField(0x58100);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_EffectPropertyNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialBlockEffectBase_TypeDefinitionIndex)->GetStaticField(0x58108);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_CGCHEOALOEI()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(MaterialBlockEffectBase_TypeDefinitionIndex)->GetStaticField(0x58110);
		}
		::Il2CppArray<::RPG::Client::MaterialBlockEffectBase_PropEffectItem*>* PropTargets; // 0x30
		::System::Boolean IsDebugMode; // 0x38
		::Il2CppArray<::RPG::Client::CommonEffectMaterialBlockOne*>* IJENHDPDCFI; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* KNBONFMHEON; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::MaterialBlockEffectBase_Class_1_00B8630D1668D264*>* KACJANEJBGP; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::MaterialBlockEffectBase_Class_1_00B8630D1668D264*>* ONDPCJAPJFG; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE__CCTOR_OFFSET))();
		}

		::System::Void OnPolymerRebuildBeforeFading(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnPolymerRebuildAfterFading(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ONPOLYMERREBUILDAFTERFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_DESPAWNED_OFFSET))(this);
		}

		::System::Void AddOneMaterialBlock(::RPG::Client::CommonEffectMaterialBlockOne* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CommonEffectMaterialBlockOne*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ADDONEMATERIALBLOCK_OFFSET))(this, a1);
		}

		::System::Void StartLODTransition(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_STARTLODTRANSITION_OFFSET))(this, a1);
		}

		::System::Void EndLODTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ENDLODTRANSITION_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetMaterialBlockEffectActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_SETMATERIALBLOCKEFFECTACTIVE_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_RESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_6_0868EF727040C390()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_METHOD_6_0868EF727040C390_OFFSET))(this);
		}

		::System::Void Method_6_8B4B595B09EC9421(::RPG::Client::MaterialBlockEffectBase_Class_1_00B8630D1668D264* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectBase_Class_1_00B8630D1668D264*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_METHOD_6_8B4B595B09EC9421_OFFSET))(this, a1);
		}

		::System::Void UpdatePropertyData(::RPG::Client::MaterialBlockEffectPropertyType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectPropertyType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEPROPERTYDATA_OFFSET))(this, a1, a2);
		}

		::System::Void UpdatePropertyData_1(::RPG::Client::MaterialBlockEffectPropertyType a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectPropertyType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEPROPERTYDATA_1_OFFSET))(this, a1, a2);
		}

		::System::Void UpdatePropertyData_2(::RPG::Client::MaterialBlockEffectPropertyType a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectPropertyType, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEPROPERTYDATA_2_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateKeywordData(::RPG::Client::MaterialBlockEffectPropertyType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectPropertyType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEKEYWORDDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_DB67EEFB041425EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_METHOD_6_DB67EEFB041425EC_OFFSET))(this);
		}

		::System::Void Method_6_6A4774248EB22533(::System::Collections::Generic::List_1<::RPG::Client::MaterialBlockEffectBase_Class_1_00B8630D1668D264*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MaterialBlockEffectBase_Class_1_00B8630D1668D264*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_METHOD_6_6A4774248EB22533_OFFSET))(this, a1);
		}

		::System::Void Method_6_E0752335E9613972(::RPG::Client::CommonEffectMaterialBlockOne* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CommonEffectMaterialBlockOne*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_METHOD_6_E0752335E9613972_OFFSET))(this, a1);
		}
	};
}
