#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_JSONENUMCONFIG_METHOD_2_1FE402EB0677D429_OFFSET UNITYSDK_OFFSET(0x1C1083F0)
#define RPG_GAMECORE_JSONENUMCONFIG_METHOD_2_90D8319C0D612532_OFFSET UNITYSDK_OFFSET(0x1C1084E0)
#define RPG_GAMECORE_JSONENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1084D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonEnumConfig_TypeDefinitionIndex = 16928;

	class JsonEnumConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Values; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _ValueToStringMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1FE402EB0677D429(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonEnumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonEnumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMCONFIG_METHOD_2_1FE402EB0677D429_OFFSET))(a1, a2);
		}

		::System::String* Method_2_90D8319C0D612532(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMCONFIG_METHOD_2_90D8319C0D612532_OFFSET))(this, a1);
		}
	};
}
