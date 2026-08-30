#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_EDITORIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCDBDB80)

namespace RPG::Client
{
	inline static constexpr unsigned int EditorImage_TypeDefinitionIndex = 72455;

	class EditorImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EDITORIMAGE__CTOR_OFFSET))(this);
		}
	};
}
