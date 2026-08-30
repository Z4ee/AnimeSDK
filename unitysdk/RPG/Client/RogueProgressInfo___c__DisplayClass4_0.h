#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueAreaData; }

#define RPG_CLIENT_ROGUEPROGRESSINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA05120)
#define RPG_CLIENT_ROGUEPROGRESSINFO___C__DISPLAYCLASS4_0__GETAREADATABYID_B__0_OFFSET UNITYSDK_OFFSET(0x1BA057C0)
#define RPG_CLIENT_ROGUEPROGRESSINFO___C__DISPLAYCLASS4_0__GETAREADATABYID_B__1_OFFSET UNITYSDK_OFFSET(0x1BA057E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueProgressInfo___c__DisplayClass4_0_TypeDefinitionIndex = 67463;

	class RogueProgressInfo___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 areaID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAreaDataByID_b__0(::RPG::Client::RogueAreaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO___C__DISPLAYCLASS4_0__GETAREADATABYID_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAreaDataByID_b__1(::RPG::Client::RogueAreaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO___C__DISPLAYCLASS4_0__GETAREADATABYID_B__1_OFFSET))(this, a1);
		}
	};
}
