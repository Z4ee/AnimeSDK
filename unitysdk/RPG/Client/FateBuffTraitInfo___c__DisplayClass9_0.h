#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffData; }

#define RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCF34580)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS9_0__GETBUFFDATA_B__0_OFFSET UNITYSDK_OFFSET(0xCF35DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffTraitInfo___c__DisplayClass9_0_TypeDefinitionIndex = 64067;

	class FateBuffTraitInfo___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::UInt32 buffId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBuffData_b__0(::RPG::Client::FateBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS9_0__GETBUFFDATA_B__0_OFFSET))(this, a1);
		}
	};
}
