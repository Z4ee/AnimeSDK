#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_WEAPONATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x12EAFBE0)

namespace MoleMole
{
	inline static constexpr unsigned int WeaponAttachPoint_TypeDefinitionIndex = 44746;

	class WeaponAttachPoint : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::Renderer* render; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WEAPONATTACHPOINT__CTOR_OFFSET))(this);
		}
	};
}
