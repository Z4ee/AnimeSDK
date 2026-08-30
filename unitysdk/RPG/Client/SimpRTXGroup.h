#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class SimpRTXProxy; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_SIMPRTXGROUP_METHOD_1_9DBC9E6BCD10AD9A_OFFSET UNITYSDK_OFFSET(0xE08D5A0)
#define RPG_CLIENT_SIMPRTXGROUP_METHOD_1_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0xE08D710)
#define RPG_CLIENT_SIMPRTXGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xE08D8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXGroup_TypeDefinitionIndex = 70150;

	class SimpRTXGroup : public ::System::Object
	{
	public:
		::System::String* groupName; // 0x10
		::UnityEngine::Vector3 position; // 0x18
		::System::Single rotateY; // 0x24
		::UnityEngine::Vector2 scale; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::SimpRTXProxy*>* proxies; // 0x30
		::System::Int32 atlasResolution; // 0x38
		::UnityEngine::Texture2D* atlasTexture; // 0x40
		::System::Boolean showGroupGizmos; // 0x48
		::UnityEngine::Color groupGizmosColor; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 Method_1_9DBC9E6BCD10AD9A()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXGROUP_METHOD_1_9DBC9E6BCD10AD9A_OFFSET))(this);
		}

		::System::Void Method_1_EBAC71FBE1837205()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXGROUP_METHOD_1_EBAC71FBE1837205_OFFSET))(this);
		}
	};
}
