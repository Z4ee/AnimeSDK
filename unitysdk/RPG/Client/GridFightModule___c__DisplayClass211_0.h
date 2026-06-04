#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightModule; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS211_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB3530)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS211_0___DOWNLOADCDNFILE_B__0_OFFSET UNITYSDK_OFFSET(0xBBB3540)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass211_0_TypeDefinitionIndex = 60658;

	class GridFightModule___c__DisplayClass211_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::RPG::Client::GridFightModule* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS211_0__CTOR_OFFSET))(this);
		}

		::System::Void __DownloadCdnFile_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS211_0___DOWNLOADCDNFILE_B__0_OFFSET))(this, a1);
		}
	};
}
