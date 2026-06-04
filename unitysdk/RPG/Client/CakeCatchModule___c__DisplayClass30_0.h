#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_51AD4A996C8C1E92_4;
namespace RPG::Client { class CakeCatchModule; }

#define RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB471AE0)
#define RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS30_0___ONTRAINCAKECATCHSEARCHSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xB475ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchModule___c__DisplayClass30_0_TypeDefinitionIndex = 58916;

	class CakeCatchModule___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::Class_1_51AD4A996C8C1E92_4* rsp; // 0x10
		::RPG::Client::CakeCatchModule* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnTrainCakeCatchSearchScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS30_0___ONTRAINCAKECATCHSEARCHSCRSP_B__0_OFFSET))(this);
		}
	};
}
