#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class LightRubikCubePuzzleCube; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0CA6A0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJ_INITOBJECT_OFFSET UNITYSDK_OFFSET(0xA0C9970)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJ_SETFINISH_OFFSET UNITYSDK_OFFSET(0xA0CA5E0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJ_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA0CA790)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0xA0CA890)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LightRubikCubePuzzleConditionObj_TypeDefinitionIndex = 64132;

	class LightRubikCubePuzzleConditionObj : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Color; // 0x18
		::UnityEngine::Material* NormalMaterial; // 0x20
		::UnityEngine::Material* FinishMaterial; // 0x28
		::System::String* ConditionObjFinishCustomString; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* ColorMaterial; // 0x38
		::RPG::GameCore::GameEntity* Field_5_5; // 0x40
		::RPG::Client::Prop::LightRubikCubePuzzleCube* Field_5_6; // 0x48
		::UnityEngine::Renderer* Field_5_7; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJ__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJ_DISPOSE_OFFSET))(this);
		}

		::System::Void InitObject(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::LightRubikCubePuzzleCube* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::LightRubikCubePuzzleCube*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJ_INITOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Void SetMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJ_SETMATERIAL_OFFSET))(this, a1);
		}

		::System::Void SetFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJ_SETFINISH_OFFSET))(this, a1);
		}
	};
}
