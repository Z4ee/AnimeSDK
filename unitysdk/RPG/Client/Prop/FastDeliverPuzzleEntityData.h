#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEENTITYDATA_GET_ISROTATEFINISH_OFFSET UNITYSDK_OFFSET(0x1902E3E0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEENTITYDATA_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1902DF20)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEENTITYDATA_SET_ISROTATEFINISH_OFFSET UNITYSDK_OFFSET(0x1902E3F0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEENTITYDATA_STARTROTATE_OFFSET UNITYSDK_OFFSET(0x1902DA40)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEENTITYDATA_TICK_OFFSET UNITYSDK_OFFSET(0x1902DF80)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEENTITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1902E400)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int FastDeliverPuzzleEntityData_TypeDefinitionIndex = 74630;

	class FastDeliverPuzzleEntityData : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* HorizonRotateSound; // 0x0
		// static const ::System::String* VerticalRotateSound; // 0x0
		::System::Single AvgRotateSpeed; // 0x18
		::System::Single RotateGap; // 0x1C
		::System::Single AvgRotatePitchSpeed; // 0x20
		::UnityEngine::AnimationCurve* RotateCurve; // 0x28
		::System::Boolean _IsRotateFinish_k__BackingField; // 0x30
		::UnityEngine::GameObject* Field_5_7; // 0x38
		::System::Single Field_5_8; // 0x40
		::System::Single Field_5_9; // 0x44
		::System::Single Field_5_10; // 0x48
		::System::Single Field_5_11; // 0x4C
		::System::Single Field_5_12; // 0x50
		::UnityEngine::Quaternion Field_5_13; // 0x54
		::UnityEngine::Quaternion Field_5_14; // 0x64
		::RPG::GameCore::GameEntity* Field_5_15; // 0x78
		::System::Boolean Field_5_16; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEENTITYDATA__CTOR_OFFSET))(this);
		}

		::System::Void StartRotate(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::GameObject* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEENTITYDATA_STARTROTATE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEENTITYDATA_TICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEENTITYDATA_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean get_IsRotateFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEENTITYDATA_GET_ISROTATEFINISH_OFFSET))(this);
		}

		::System::Void set_IsRotateFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEENTITYDATA_SET_ISROTATEFINISH_OFFSET))(this, a1);
		}
	};
}
