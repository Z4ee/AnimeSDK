#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_671780733A8844ED;
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_AFFIXUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9008C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int AffixUiData_TypeDefinitionIndex = 75110;

	class AffixUiData : public ::System::Object
	{
	public:
		::System::String* DisplayValue; // 0x10
		::System::String* Icon; // 0x18
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor(::Class_1_671780733A8844ED* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_671780733A8844ED*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AFFIXUIDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
