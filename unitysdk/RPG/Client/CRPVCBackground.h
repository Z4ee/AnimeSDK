#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_CRPVCBACKGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0xC97F8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CRPVCBackground_TypeDefinitionIndex = 69674;

	class CRPVCBackground : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::UnityEngine::MeshRenderer* MeshRenderer; // 0x18
		::UnityEngine::Color Color; // 0x20
		::System::String* TexturePath; // 0x30
		::UnityEngine::Vector2 Scale; // 0x38
		::UnityEngine::Vector2 Offset; // 0x40
		::System::Single Rotation; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPVCBACKGROUND__CTOR_OFFSET))(this);
		}
	};
}
