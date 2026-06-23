#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_EOSPARAMETERSMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B97C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSParametersModel_TypeDefinitionIndex = 19653;

	class EOSParametersModel : public ::System::Object
	{
	public:
		::System::String* client_id; // 0x10
		::System::String* client_secret; // 0x18
		::System::String* product_id; // 0x20
		::System::String* sandbox_id; // 0x28
		::System::String* deployment_id; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* enable_envs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSPARAMETERSMODEL__CTOR_OFFSET))(this);
		}
	};
}
