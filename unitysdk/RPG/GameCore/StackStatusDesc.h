#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STACKSTATUSDESC_METHOD_3_BE4E6D857328E0A3_OFFSET UNITYSDK_OFFSET(0x1D0B9EE0)
#define RPG_GAMECORE_STACKSTATUSDESC_METHOD_3_C85A7FB485808E38_OFFSET UNITYSDK_OFFSET(0x1D0B9EA0)
#define RPG_GAMECORE_STACKSTATUSDESC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B9ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackStatusDesc_TypeDefinitionIndex = 23368;

	class StackStatusDesc : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID TextID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSDESC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C85A7FB485808E38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackStatusDesc*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackStatusDesc*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSDESC_METHOD_3_C85A7FB485808E38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE4E6D857328E0A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackStatusDesc* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackStatusDesc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSDESC_METHOD_3_BE4E6D857328E0A3_OFFSET))(a1, a2);
		}
	};
}
