#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SkinPreviewDataOfAvatar; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_SKINPREVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x115E8760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SkinPreviewData_TypeDefinitionIndex = 46106;

	class SkinPreviewData : public ::System::Object
	{
	public:
		::System::Int32 AvatarID; // 0x10
		::System::String* Tips; // 0x18
		::MoleMole::Config::SkinPreviewDataOfAvatar* Config; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SKINPREVIEWDATA__CTOR_OFFSET))(this);
		}
	};
}
