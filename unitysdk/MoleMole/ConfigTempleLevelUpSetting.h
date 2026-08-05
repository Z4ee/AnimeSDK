#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTempleLevelUpEvent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGTEMPLELEVELUPSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB7C70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTempleLevelUpSetting_TypeDefinitionIndex = 45008;

	class ConfigTempleLevelUpSetting : public ::System::Object
	{
	public:
		::System::Int32 PerformID; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::ConfigTempleLevelUpEvent*>* Events; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUPSETTING__CTOR_OFFSET))(this);
		}
	};
}
