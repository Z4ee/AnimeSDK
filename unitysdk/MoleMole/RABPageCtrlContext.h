#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_863445FF70B314F5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_RABPAGECTRLCONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x12651340)
#define MOLEMOLE_RABPAGECTRLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x126512E0)
#define MOLEMOLE_RABPAGECTRLCONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x12651420)

namespace MoleMole
{
	inline static constexpr unsigned int RABPageCtrlContext_TypeDefinitionIndex = 85192;

	class RABPageCtrlContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		// static const ::System::String* KeyBackPageType; // 0x0
		::System::Action* AfterOpenAction; // 0x28
		::System::Int32 jumpParam; // 0x30
		::System::Boolean IsFromSwitchScene; // 0x34
		::Enum_3_863445FF70B314F5 PageType; // 0x38
		::Enum_3_863445FF70B314F5 BackPageType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABPAGECTRLCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABPAGECTRLCONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABPAGECTRLCONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
