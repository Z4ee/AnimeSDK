#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D63DE2EC2835DB62_Class_1_6516DDC30DD1EB36;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_CLASS_1_2C965BD9B9CA3DE5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC69C80)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_CLASS_1_2C965BD9B9CA3DE5_METHOD_1_5B2CAD1A0582F9BB_OFFSET UNITYSDK_OFFSET(0xDC69D80)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_CLASS_1_2C965BD9B9CA3DE5_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xDC69D00)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_CLASS_1_2C965BD9B9CA3DE5__CTOR_OFFSET UNITYSDK_OFFSET(0xDC69BE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallBallController_Class_1_2C965BD9B9CA3DE5_TypeDefinitionIndex = 78118;

	class GravityBallBallController_Class_1_2C965BD9B9CA3DE5 : public ::System::Object
	{
	public:
		// static const ::System::Single OKFMABJGOPI; // 0x0
		// static const ::System::String* IJIFHOEEBHJ; // 0x0
		::Class_1_D63DE2EC2835DB62_Class_1_6516DDC30DD1EB36* GCJINNEANCH; // 0x10
		::UnityEngine::Material* IMOHCDHKBAJ; // 0x18
		::System::Single PGMIOKKLHIE; // 0x20

		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_CLASS_1_2C965BD9B9CA3DE5__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_CLASS_1_2C965BD9B9CA3DE5_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_CLASS_1_2C965BD9B9CA3DE5_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_1_5B2CAD1A0582F9BB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_CLASS_1_2C965BD9B9CA3DE5_METHOD_1_5B2CAD1A0582F9BB_OFFSET))(this, a1);
		}
	};
}
