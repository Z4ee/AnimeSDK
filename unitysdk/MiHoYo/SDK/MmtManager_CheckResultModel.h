#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MmtManager_GeetestModel; }
namespace System { class String; }

#define MIHOYO_SDK_MMTMANAGER_CHECKRESULTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17581840)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MmtManager_CheckResultModel_TypeDefinitionIndex = 7075;

	class MmtManager_CheckResultModel : public ::System::Object
	{
	public:
		::System::String* action; // 0x10
		::System::String* id; // 0x18
		::MiHoYo::SDK::MmtManager_GeetestModel* geetest; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_CHECKRESULTMODEL__CTOR_OFFSET))(this);
		}
	};
}
