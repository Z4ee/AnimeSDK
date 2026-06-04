#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesGameplayTargetShowMode.h"
#include "unitysdk/System/Object.h"

class Class_1_333B902B2174BECA_1;
class Class_1_50AC12A2F890597C;
class Class_1_5623C129675A2671;
class Class_1_5F4D64A4B97E38F9;
class Class_1_A3520E3BCB4F735C;
class Class_1_E1F8E3E063D5EA1C;
namespace RPG::Client::ChenLingFes { class ChenLingFesGameBuffRewardWindow; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGamePhaseToastWindow; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameSettleInfoWindow; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayTargetWindow; }
namespace RPG::Client::ChenLingFes { class ChenLingFesWeekSettleInfoWindow; }
namespace System { class String; }

#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_0F76768B2DA32ECB_OFFSET UNITYSDK_OFFSET(0xB503E40)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_144B88E84EFFF05C_OFFSET UNITYSDK_OFFSET(0xB503EF0)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_373FDABA7F1BAEBD_OFFSET UNITYSDK_OFFSET(0xB503A10)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_9CFB9781A4D821FA_OFFSET UNITYSDK_OFFSET(0xB503CA0)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_B0DA1E1C883D2ECB_OFFSET UNITYSDK_OFFSET(0xB503810)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_B6A25768F450176F_OFFSET UNITYSDK_OFFSET(0xB503950)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_E60BA57529411535_1_OFFSET UNITYSDK_OFFSET(0xB503FB0)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_E60BA57529411535_OFFSET UNITYSDK_OFFSET(0xB503B50)
#define CLASS_1_9BE72F9E795F5FE6__CTOR_OFFSET UNITYSDK_OFFSET(0xB504100)

inline static constexpr unsigned int Class_1_9BE72F9E795F5FE6_TypeDefinitionIndex = 73952;

class Class_1_9BE72F9E795F5FE6 : public ::System::Object
{
public:
	::Class_1_50AC12A2F890597C* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B0DA1E1C883D2ECB(::Class_1_5F4D64A4B97E38F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_B0DA1E1C883D2ECB_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetWindow* Method_1_B6A25768F450176F(::Class_1_5F4D64A4B97E38F9* a1, ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetShowMode a2)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetShowMode))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_B6A25768F450176F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastWindow* Method_1_373FDABA7F1BAEBD(::Class_1_5F4D64A4B97E38F9* a1, ::System::String* a2)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_373FDABA7F1BAEBD_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow* Method_1_E60BA57529411535(::Class_1_5F4D64A4B97E38F9* a1, ::Class_1_333B902B2174BECA_1* a2)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_333B902B2174BECA_1*))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_E60BA57529411535_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardWindow* Method_1_9CFB9781A4D821FA(::Class_1_5F4D64A4B97E38F9* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_9CFB9781A4D821FA_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow* Method_1_0F76768B2DA32ECB(::Class_1_5F4D64A4B97E38F9* a1, ::Class_1_5623C129675A2671* a2, ::System::UInt32 a3)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_5623C129675A2671*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_0F76768B2DA32ECB_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow* Method_1_144B88E84EFFF05C(::Class_1_5F4D64A4B97E38F9* a1, ::Class_1_E1F8E3E063D5EA1C* a2)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_E1F8E3E063D5EA1C*))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_144B88E84EFFF05C_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow* Method_1_E60BA57529411535_1(::Class_1_5F4D64A4B97E38F9* a1, ::Class_1_A3520E3BCB4F735C* a2)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_A3520E3BCB4F735C*))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_E60BA57529411535_1_OFFSET))(this, a1, a2);
	}
};
