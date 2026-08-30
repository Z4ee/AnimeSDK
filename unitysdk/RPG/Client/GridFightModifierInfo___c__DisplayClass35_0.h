#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightPrayQuestFinishType; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD2009E0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS35_0__ISPRAYQUESTACTIVITED_B__0_OFFSET UNITYSDK_OFFSET(0xD200DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass35_0_TypeDefinitionIndex = 65111;

	class GridFightModifierInfo___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::UInt32 questID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsPrayQuestActivited_b__0(::RPG::Client::GridFightPrayQuestFinishType* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPrayQuestFinishType*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS35_0__ISPRAYQUESTACTIVITED_B__0_OFFSET))(this, a1);
		}
	};
}
