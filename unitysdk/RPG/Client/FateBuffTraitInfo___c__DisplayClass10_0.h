#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateTraitData; }

#define RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9676390)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS10_0__GETTRAITDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9677780)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffTraitInfo___c__DisplayClass10_0_TypeDefinitionIndex = 51918;

	class FateBuffTraitInfo___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraitData_b__0(::RPG::Client::FateTraitData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateTraitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS10_0__GETTRAITDATA_B__0_OFFSET))(this, x);
		}
	};
}
