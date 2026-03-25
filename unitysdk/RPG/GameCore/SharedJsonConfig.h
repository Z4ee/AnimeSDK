#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicJsonConfig; }

#define RPG_GAMECORE_SHAREDJSONCONFIG_METHOD_3_85D22C255258C41D_OFFSET UNITYSDK_OFFSET(0x176EE360)
#define RPG_GAMECORE_SHAREDJSONCONFIG_METHOD_3_BC3909DB1B22D7E8_OFFSET UNITYSDK_OFFSET(0x176EE250)
#define RPG_GAMECORE_SHAREDJSONCONFIG_METHOD_3_EBFA7384E69D815F_OFFSET UNITYSDK_OFFSET(0x176EE290)
#define RPG_GAMECORE_SHAREDJSONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x176EE280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedJsonConfig_TypeDefinitionIndex = 16805;

	class SharedJsonConfig : public ::RPG::GameCore::SharedValue
	{
	public:
		::RPG::GameCore::DynamicJsonConfig* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC3909DB1B22D7E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedJsonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedJsonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIG_METHOD_3_BC3909DB1B22D7E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EBFA7384E69D815F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedJsonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedJsonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIG_METHOD_3_EBFA7384E69D815F_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType Method_3_85D22C255258C41D()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDJSONCONFIG_METHOD_3_85D22C255258C41D_OFFSET))(this);
		}
	};
}
