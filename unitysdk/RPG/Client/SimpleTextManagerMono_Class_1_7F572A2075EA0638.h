#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_CLASS_1_7F572A2075EA0638_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB17EE90)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_CLASS_1_7F572A2075EA0638_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xB183620)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_CLASS_1_7F572A2075EA0638__CTOR_OFFSET UNITYSDK_OFFSET(0xB186090)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono_Class_1_7F572A2075EA0638_TypeDefinitionIndex = 66937;

	class SimpleTextManagerMono_Class_1_7F572A2075EA0638 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Field_1_2; // 0x10
		::UnityEngine::Mesh* Field_1_0; // 0x18
		::UnityEngine::MeshRenderer* Field_1_1; // 0x20

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
