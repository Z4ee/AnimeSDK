#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CB713CB61EC5443_2;
namespace RPG::Client { class CakeCatchModule; }

#define RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A138D00)
#define RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS30_0___ONTRAINCAKECATCHSEARCHSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0x1A13CEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchModule___c__DisplayClass30_0_TypeDefinitionIndex = 63035;

	class CakeCatchModule___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::Class_1_1CB713CB61EC5443_2* rsp; // 0x10
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
