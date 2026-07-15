#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDA320)
#define RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS53_0__GETCAKECAUGHTCOUNTINROOM_B__0_OFFSET UNITYSDK_OFFSET(0x18CDC220)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchModule___c__DisplayClass53_0_TypeDefinitionIndex = 60188;

	class CakeCatchModule___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::UInt32, ::System::Boolean>* __9__0; // 0x10
		::System::UInt32 roomOwnerUID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCakeCaughtCountInRoom_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS53_0__GETCAKECAUGHTCOUNTINROOM_B__0_OFFSET))(this, a1);
		}
	};
}
