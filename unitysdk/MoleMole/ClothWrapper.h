#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class TextAsset; }

#define MOLEMOLE_CLOTHWRAPPER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x150E48A0)
#define MOLEMOLE_CLOTHWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x150E48F0)

namespace MoleMole
{
	inline static constexpr unsigned int ClothWrapper_TypeDefinitionIndex = 49412;

	class ClothWrapper : public ::System::Object
	{
	public:
		::UnityEngine::TextAsset* Cloth; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOTHWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOTHWRAPPER_COMPARETO_OFFSET))(this, a1);
		}
	};
}
