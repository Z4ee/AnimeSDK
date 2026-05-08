#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralBuffRowContext_EBuffType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }

#define MOLEMOLE_GENERALBUFFROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17811BF0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralBuffRowContext_TypeDefinitionIndex = 42587;

	class GeneralBuffRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Object* BuffInfo; // 0x28
		::MoleMole::GeneralBuffRowContext_EBuffType BuffType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALBUFFROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
