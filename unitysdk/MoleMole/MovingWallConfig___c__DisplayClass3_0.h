#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_MOVINGWALLCONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16062510)
#define MOLEMOLE_MOVINGWALLCONFIG___C__DISPLAYCLASS3_0__RELOADFROMFILEASYNC_G__LOADCALLBACK_0_OFFSET UNITYSDK_OFFSET(0x16062520)

namespace MoleMole
{
	inline static constexpr unsigned int MovingWallConfig___c__DisplayClass3_0_TypeDefinitionIndex = 63968;

	class MovingWallConfig___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* finish; // 0x10
		::System::Action_1<::System::Single>* oneStep; // 0x18
		::System::String* name; // 0x20
		::System::Single span; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLCONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFileAsync_g__LoadCallback_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLCONFIG___C__DISPLAYCLASS3_0__RELOADFROMFILEASYNC_G__LOADCALLBACK_0_OFFSET))(this);
		}
	};
}
