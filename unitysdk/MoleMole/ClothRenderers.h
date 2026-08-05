#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CLOTHRENDERERS__CTOR_OFFSET UNITYSDK_OFFSET(0xF12C820)

namespace MoleMole
{
	inline static constexpr unsigned int ClothRenderers_TypeDefinitionIndex = 62192;

	class ClothRenderers : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* Renderers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOTHRENDERERS__CTOR_OFFSET))(this);
		}
	};
}
