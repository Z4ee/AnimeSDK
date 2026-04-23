#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightModule; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS221_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA50C780)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS221_0___DOWNLOADCDNFILE_B__0_OFFSET UNITYSDK_OFFSET(0xA50C790)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass221_0_TypeDefinitionIndex = 59723;

	class GridFightModule___c__DisplayClass221_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::RPG::Client::GridFightModule* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS221_0__CTOR_OFFSET))(this);
		}

		::System::Void __DownloadCdnFile_b__0(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS221_0___DOWNLOADCDNFILE_B__0_OFFSET))(this, data);
		}
	};
}
