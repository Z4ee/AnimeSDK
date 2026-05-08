#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class RegionSwitchFunc; }
namespace System { class String; }

#define MOLEMOLE_REGIONEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x16069F10)

namespace MoleMole
{
	inline static constexpr unsigned int RegionExtension_TypeDefinitionIndex = 81154;

	class RegionExtension : public ::System::Object
	{
	public:
		::MoleMole::RegionSwitchFunc* func_switch; // 0x10
		::System::String* feedback_url; // 0x18
		::System::String* exchange_url; // 0x20
		::System::Int32 pgc_webview_method; // 0x28
		::System::Int32 character_build_method; // 0x2C
		::System::String* mtrNap; // 0x30
		::System::String* mtrSdk; // 0x38
		::System::String* urlCheckNap; // 0x40
		::System::String* urlCheckSdk; // 0x48
		::System::String* squad_tool_cdn_file_url; // 0x50
		::System::String* squad_tool_env; // 0x58
		::System::String* squad_tool_api_url; // 0x60
		::System::String* squad_tool_detail_webview; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REGIONEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
