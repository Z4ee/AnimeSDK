#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENTMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x14F4A600)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleFragmentMono_TypeDefinitionIndex = 74847;

	class RotatePillarPuzzleFragmentMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* SelectSoundPath; // 0x18
		::System::Int32 FragPosition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENTMONO__CTOR_OFFSET))(this);
		}
	};
}
