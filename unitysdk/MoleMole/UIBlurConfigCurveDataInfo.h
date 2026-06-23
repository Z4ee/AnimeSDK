#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigCurveDataInfo; }
namespace System { class String; }

#define MOLEMOLE_UIBLURCONFIGCURVEDATAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A69920)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlurConfigCurveDataInfo_TypeDefinitionIndex = 70595;

	class UIBlurConfigCurveDataInfo : public ::System::Object
	{
	public:
		::System::String* UIBlurKey; // 0x10
		::MoleMole::ConfigCurveDataInfo* ConfigCurveDataInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURCONFIGCURVEDATAINFO__CTOR_OFFSET))(this);
		}
	};
}
