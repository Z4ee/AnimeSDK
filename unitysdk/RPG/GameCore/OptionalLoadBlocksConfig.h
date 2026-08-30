#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicLoadBlockDataList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_OPTIONALLOADBLOCKSCONFIG_METHOD_2_75F792D6443E47DC_OFFSET UNITYSDK_OFFSET(0x1D301B20)
#define RPG_GAMECORE_OPTIONALLOADBLOCKSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D301C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OptionalLoadBlocksConfig_TypeDefinitionIndex = 18935;

	class OptionalLoadBlocksConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicLoadBlockDataList*>* BlocksConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALLOADBLOCKSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_75F792D6443E47DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OptionalLoadBlocksConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OptionalLoadBlocksConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALLOADBLOCKSCONFIG_METHOD_2_75F792D6443E47DC_OFFSET))(a1, a2);
		}
	};
}
