#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CREATEORIGAMIBYPROPSTATECHANGE_METHOD_3_94E600800FFCCF36_OFFSET UNITYSDK_OFFSET(0x1713CBC0)
#define RPG_GAMECORE_CREATEORIGAMIBYPROPSTATECHANGE_METHOD_3_ED4ED28C0C96C672_OFFSET UNITYSDK_OFFSET(0x1713CC40)
#define RPG_GAMECORE_CREATEORIGAMIBYPROPSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1713CC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateOrigamiByPropStateChange_TypeDefinitionIndex = 19472;

	class CreateOrigamiByPropStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEORIGAMIBYPROPSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94E600800FFCCF36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateOrigamiByPropStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateOrigamiByPropStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEORIGAMIBYPROPSTATECHANGE_METHOD_3_94E600800FFCCF36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED4ED28C0C96C672(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateOrigamiByPropStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateOrigamiByPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEORIGAMIBYPROPSTATECHANGE_METHOD_3_ED4ED28C0C96C672_OFFSET))(a1, a2);
		}
	};
}
