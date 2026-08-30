#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualizeDataSourceType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_303D5A33D1401D59;
class Class_1_5F7F520FBB2CFE23;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_GET_POLYMERADDCHILDOBJ_OFFSET UNITYSDK_OFFSET(0x1AE19B20)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_GET_VISUALIZEDATA_OFFSET UNITYSDK_OFFSET(0x1AE1A890)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_METHOD_5_E9A5554837CAC47B_OFFSET UNITYSDK_OFFSET(0x1AE19C30)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_ONPOLYMERREBUILDAFTERFADING_OFFSET UNITYSDK_OFFSET(0x1AE1A7F0)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET UNITYSDK_OFFSET(0x1AE1A740)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_SET_POLYMERADDCHILDOBJ_OFFSET UNITYSDK_OFFSET(0x1AE19B30)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_SET_VISUALIZEDATA_OFFSET UNITYSDK_OFFSET(0x1AE1A8A0)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE19A80)

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerEffectControllBase_TypeDefinitionIndex = 70269;

	class PolymerEffectControllBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_5F7F520FBB2CFE23* _VisualizeData_k__BackingField; // 0x18
		::RPG::Client::MusicVisualizeDataSourceType SourceType; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* PolymerChildren; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_PolymerAddChildObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_GET_POLYMERADDCHILDOBJ_OFFSET))(this);
		}

		::System::Void set_PolymerAddChildObj(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_SET_POLYMERADDCHILDOBJ_OFFSET))(this, a1);
		}

		::System::String* Method_5_E9A5554837CAC47B(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_METHOD_5_E9A5554837CAC47B_OFFSET))(this, a1, a2);
		}

		::System::Void OnPolymerRebuildBeforeFading(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnPolymerRebuildAfterFading(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_ONPOLYMERREBUILDAFTERFADING_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_5F7F520FBB2CFE23* get_VisualizeData()
		{
			return ((::Class_1_5F7F520FBB2CFE23*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_GET_VISUALIZEDATA_OFFSET))(this);
		}

		::System::Void set_VisualizeData(::Class_1_5F7F520FBB2CFE23* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F7F520FBB2CFE23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_SET_VISUALIZEDATA_OFFSET))(this, a1);
		}
	};
}
