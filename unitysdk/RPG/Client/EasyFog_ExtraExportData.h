#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_EASYFOG_EXTRAEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA1AFE80)

namespace RPG::Client
{
	inline static constexpr unsigned int EasyFog_ExtraExportData_TypeDefinitionIndex = 65272;

	class EasyFog_ExtraExportData : public ::System::Object
	{
	public:
		::System::String* fogNormalMapPath; // 0x10
		::System::String* opacityMapPath; // 0x18
		::System::String* easyFogTemplateMaterialPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EASYFOG_EXTRAEXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
