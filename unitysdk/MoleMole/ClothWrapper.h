#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class TextAsset; }

#define MOLEMOLE_CLOTHWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x174323F0)

namespace MoleMole
{
	inline static constexpr unsigned int ClothWrapper_TypeDefinitionIndex = 72018;

	class ClothWrapper : public ::System::Object
	{
	public:
		::UnityEngine::TextAsset* Cloth; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOTHWRAPPER__CTOR_OFFSET))(this);
		}
	};
}
