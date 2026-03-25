#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_618;
namespace RPG::Client::NavMap { class ICartographer; }

#define RPG_CLIENT_FINDCHESTMODULE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96C52E0)
#define RPG_CLIENT_FINDCHESTMODULE___C__DISPLAYCLASS4_0__TRIGGERFINDCHEST_B__0_OFFSET UNITYSDK_OFFSET(0x96C6E50)

namespace RPG::Client
{
	inline static constexpr unsigned int FindChestModule___c__DisplayClass4_0_TypeDefinitionIndex = 52118;

	class FindChestModule___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::ICartographer* playerCartographer; // 0x10
		::RPG::MVector3 avatarWorldPos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _TriggerFindChest_b__0(::Class_0_16E4307DCC419505_618* x, ::Class_0_16E4307DCC419505_618* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_618*, ::Class_0_16E4307DCC419505_618*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C__DISPLAYCLASS4_0__TRIGGERFINDCHEST_B__0_OFFSET))(this, x, y);
		}
	};
}
