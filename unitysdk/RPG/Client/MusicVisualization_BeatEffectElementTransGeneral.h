#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_159F4A26A6FBCACF;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x9DE5A00)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_METHOD_2_868FC0444E82D574_OFFSET UNITYSDK_OFFSET(0x9DE59B0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_METHOD_2_9F9ED25754A7CAB9_OFFSET UNITYSDK_OFFSET(0x9DE5D70)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_METHOD_2_B660F70070F2A271_OFFSET UNITYSDK_OFFSET(0x9DE5AC0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE5D00)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementTransGeneral_TypeDefinitionIndex = 58021;

	class MusicVisualization_BeatEffectElementTransGeneral : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::System::Boolean IsAffectTransLocalPos; // 0x30
		::UnityEngine::Vector3 AxisScale; // 0x34
		::System::Boolean IsAffectTransLocalRotate; // 0x40
		::UnityEngine::Vector3 EularAngleScale; // 0x44
		::System::Boolean IsAffectTransLocalScale; // 0x50
		::UnityEngine::Vector3 ScaleScale; // 0x54
		::System::Boolean IncludeChild; // 0x60
		::System::Boolean SetGOActive; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_868FC0444E82D574(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_METHOD_2_868FC0444E82D574_OFFSET))(this, a1);
		}

		::System::Void Method_2_097468641FDED14E(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
		}

		::System::Void Method_2_B660F70070F2A271(::Class_1_159F4A26A6FBCACF* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_METHOD_2_B660F70070F2A271_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_9F9ED25754A7CAB9(::Class_1_159F4A26A6FBCACF* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTTRANSGENERAL_METHOD_2_9F9ED25754A7CAB9_OFFSET))(this, P0);
		}
	};
}
