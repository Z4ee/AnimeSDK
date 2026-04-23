#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_METHOD_3_0C29FF75D3E0CFB2_OFFSET UNITYSDK_OFFSET(0x1865E010)
#define RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_METHOD_3_AF6814BA5128241B_OFFSET UNITYSDK_OFFSET(0x1865E090)
#define RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1865E060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerRemoveAttachment_TypeDefinitionIndex = 20038;

	class AdvPlayerRemoveAttachment : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0C29FF75D3E0CFB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerRemoveAttachment*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerRemoveAttachment*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_METHOD_3_0C29FF75D3E0CFB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF6814BA5128241B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerRemoveAttachment* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerRemoveAttachment*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERREMOVEATTACHMENT_METHOD_3_AF6814BA5128241B_OFFSET))(a1, a2);
		}
	};
}
