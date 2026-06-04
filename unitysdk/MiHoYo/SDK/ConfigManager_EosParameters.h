#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class EOSParametersModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_EOSPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1820A8C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_EosParameters_TypeDefinitionIndex = 8151;

	class ConfigManager_EosParameters : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::EOSParametersModel*>* eos_parameters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_EOSPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}
