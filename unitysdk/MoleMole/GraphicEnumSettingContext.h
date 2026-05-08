#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

namespace System { class String; }

#define MOLEMOLE_GRAPHICENUMSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1821C3D0)

namespace MoleMole
{
	inline static constexpr unsigned int GraphicEnumSettingContext_TypeDefinitionIndex = 77141;

	class GraphicEnumSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::String* GraphicKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRAPHICENUMSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
