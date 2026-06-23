#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_SLIDINGCONFIG___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19179A60)
#define MOLEMOLE_SLIDINGCONFIG___C__DISPLAYCLASS20_0__RELOADFROMFILEASYNC_G__LOADCALLBACK_0_OFFSET UNITYSDK_OFFSET(0x19179A70)

namespace MoleMole
{
	inline static constexpr unsigned int SlidingConfig___c__DisplayClass20_0_TypeDefinitionIndex = 42548;

	class SlidingConfig___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* finish; // 0x10
		::System::String* name; // 0x18
		::System::Action_1<::System::Single>* oneStep; // 0x20
		::System::Single span; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFileAsync_g__LoadCallback_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG___C__DISPLAYCLASS20_0__RELOADFROMFILEASYNC_G__LOADCALLBACK_0_OFFSET))(this);
		}
	};
}
