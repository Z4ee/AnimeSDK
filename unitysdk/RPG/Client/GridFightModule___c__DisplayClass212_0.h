#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightModule; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS212_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC4A720)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS212_0___DOWNLOADCDNFILE_B__0_OFFSET UNITYSDK_OFFSET(0x1BC4A730)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass212_0_TypeDefinitionIndex = 64932;

	class GridFightModule___c__DisplayClass212_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightModule* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS212_0__CTOR_OFFSET))(this);
		}

		::System::Void __DownloadCdnFile_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS212_0___DOWNLOADCDNFILE_B__0_OFFSET))(this, a1);
		}
	};
}
