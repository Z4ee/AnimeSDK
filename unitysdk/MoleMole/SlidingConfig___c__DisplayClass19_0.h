#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SlidingConfig; }
namespace System { class Action; }

#define MOLEMOLE_SLIDINGCONFIG___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17387D10)
#define MOLEMOLE_SLIDINGCONFIG___C__DISPLAYCLASS19_0__RELOADFROMFILE_G__LOADCALLBACK_0_OFFSET UNITYSDK_OFFSET(0x17387D20)

namespace MoleMole
{
	inline static constexpr unsigned int SlidingConfig___c__DisplayClass19_0_TypeDefinitionIndex = 42546;

	class SlidingConfig___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action* complete; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFile_g__LoadCallback_0(::MoleMole::SlidingConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SlidingConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG___C__DISPLAYCLASS19_0__RELOADFROMFILE_G__LOADCALLBACK_0_OFFSET))(this, config);
		}
	};
}
