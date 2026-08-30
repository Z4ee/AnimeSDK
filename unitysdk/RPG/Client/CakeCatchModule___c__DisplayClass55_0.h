#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeCatchCatData; }

#define RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A13B710)
#define RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS55_0__ISCAKELOCALAVAILABLE_B__0_OFFSET UNITYSDK_OFFSET(0x1A13D460)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchModule___c__DisplayClass55_0_TypeDefinitionIndex = 63037;

	class CakeCatchModule___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::UInt32 cakeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsCakeLocalAvailable_b__0(::RPG::Client::CakeCatchCatData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS55_0__ISCAKELOCALAVAILABLE_B__0_OFFSET))(this, a1);
		}
	};
}
