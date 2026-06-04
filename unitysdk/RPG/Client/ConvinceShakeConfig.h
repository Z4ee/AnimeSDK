#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConvinceShakeConfig_ConvinceShakeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONVINCESHAKECONFIG_METHOD_1_2A03A99FB45FAF69_OFFSET UNITYSDK_OFFSET(0xB712CD0)
#define RPG_CLIENT_CONVINCESHAKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB712E10)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvinceShakeConfig_TypeDefinitionIndex = 56707;

	class ConvinceShakeConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ConvinceShakeConfig_ConvinceShakeData*>* Datas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCESHAKECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::ConvinceShakeConfig_ConvinceShakeData* Method_1_2A03A99FB45FAF69(::System::String* a1)
		{
			return ((::RPG::Client::ConvinceShakeConfig_ConvinceShakeData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCESHAKECONFIG_METHOD_1_2A03A99FB45FAF69_OFFSET))(this, a1);
		}
	};
}
