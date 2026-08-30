#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_METHOD_3_20A46914C7F4BE48_OFFSET UNITYSDK_OFFSET(0x1CDD55F0)
#define RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_METHOD_3_AF6814BA5128241B_OFFSET UNITYSDK_OFFSET(0x1CDD5630)
#define RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD5620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerRemoveAttachment_TypeDefinitionIndex = 20812;

	class AdvPlayerRemoveAttachment : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_20A46914C7F4BE48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerRemoveAttachment*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerRemoveAttachment*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_METHOD_3_20A46914C7F4BE48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF6814BA5128241B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerRemoveAttachment* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerRemoveAttachment*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_METHOD_3_AF6814BA5128241B_OFFSET))(a1, a2);
		}
	};
}
