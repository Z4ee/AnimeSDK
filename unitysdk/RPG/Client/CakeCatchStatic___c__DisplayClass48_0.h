#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeCatchModule; }

#define RPG_CLIENT_CAKECATCHSTATIC___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB4779E0)
#define RPG_CLIENT_CAKECATCHSTATIC___C__DISPLAYCLASS48_0__STARTCAKEPERFORMANCE_B__1_OFFSET UNITYSDK_OFFSET(0xB479090)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchStatic___c__DisplayClass48_0_TypeDefinitionIndex = 58921;

	class CakeCatchStatic___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeCatchModule* module; // 0x10
		::System::UInt32 performanceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartCakePerformance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C__DISPLAYCLASS48_0__STARTCAKEPERFORMANCE_B__1_OFFSET))(this);
		}
	};
}
