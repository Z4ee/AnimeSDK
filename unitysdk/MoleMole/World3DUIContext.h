#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_WORLD3DUICONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B21690)

namespace MoleMole
{
	inline static constexpr unsigned int World3DUIContext_TypeDefinitionIndex = 77900;

	class World3DUIContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* CustomPropertyName; // 0x28
		::System::String* AttachPointName; // 0x30
		::System::UInt32 EntityID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLD3DUICONTEXT__CTOR_OFFSET))(this);
		}
	};
}
