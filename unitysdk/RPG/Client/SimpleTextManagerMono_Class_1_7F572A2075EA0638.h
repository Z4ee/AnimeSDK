#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_CLASS_1_7F572A2075EA0638_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x196BF950)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_CLASS_1_7F572A2075EA0638_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x196C5260)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_CLASS_1_7F572A2075EA0638__CTOR_OFFSET UNITYSDK_OFFSET(0x196C8100)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono_Class_1_7F572A2075EA0638_TypeDefinitionIndex = 72571;

	class SimpleTextManagerMono_Class_1_7F572A2075EA0638 : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* HKHIMGIMIFI; // 0x10
		::UnityEngine::MeshRenderer* EMHJGPKACPK; // 0x18
		::UnityEngine::GameObject* IOHOMAPFIGH; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_CLASS_1_7F572A2075EA0638__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_D09831639F615812(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_CLASS_1_7F572A2075EA0638_METHOD_1_D09831639F615812_OFFSET))(this, a1);
		}

		::System::Void Method_1_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_CLASS_1_7F572A2075EA0638_METHOD_1_A239DF324AF4215D_OFFSET))(this);
		}
	};
}
