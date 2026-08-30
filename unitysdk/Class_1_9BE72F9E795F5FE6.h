#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesGameplayTargetShowMode.h"
#include "unitysdk/System/Object.h"

class Class_1_50AC12A2F890597C;
class Class_1_5F4D64A4B97E38F9;
class Class_1_7C1B6F38E8E579A2;
class Class_1_A3520E3BCB4F735C;
class Class_1_D55DA8BFAC94B3A4_1;
class Class_1_E1F8E3E063D5EA1C;
namespace RPG::Client::ChenLingFes { class ChenLingFesGameBuffRewardWindow; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGamePhaseToastWindow; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameSettleInfoWindow; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayTargetWindow; }
namespace RPG::Client::ChenLingFes { class ChenLingFesWeekSettleInfoWindow; }
namespace System { class String; }

#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_0F76768B2DA32ECB_OFFSET UNITYSDK_OFFSET(0x15E38AF0)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_144B88E84EFFF05C_OFFSET UNITYSDK_OFFSET(0x15E38BA0)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_373FDABA7F1BAEBD_OFFSET UNITYSDK_OFFSET(0x15E38740)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_771E788F801E5686_1_OFFSET UNITYSDK_OFFSET(0x15E38C60)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_771E788F801E5686_OFFSET UNITYSDK_OFFSET(0x15E38890)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_8C86D84D981C8F66_OFFSET UNITYSDK_OFFSET(0x15E385D0)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_9CFB9781A4D821FA_OFFSET UNITYSDK_OFFSET(0x15E38950)
#define CLASS_1_9BE72F9E795F5FE6_METHOD_1_B6A25768F450176F_OFFSET UNITYSDK_OFFSET(0x15E38680)
#define CLASS_1_9BE72F9E795F5FE6__CTOR_OFFSET UNITYSDK_OFFSET(0x15E38D20)

inline static constexpr unsigned int Class_1_9BE72F9E795F5FE6_TypeDefinitionIndex = 79967;

class Class_1_9BE72F9E795F5FE6 : public ::System::Object
{
public:
	::Class_1_50AC12A2F890597C* CHAHLPHIGCN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C86D84D981C8F66(::Class_1_5F4D64A4B97E38F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_8C86D84D981C8F66_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetWindow* Method_1_B6A25768F450176F(::Class_1_5F4D64A4B97E38F9* a1, ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetShowMode a2)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetShowMode))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_B6A25768F450176F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastWindow* Method_1_373FDABA7F1BAEBD(::Class_1_5F4D64A4B97E38F9* a1, ::System::String* a2)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_373FDABA7F1BAEBD_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow* Method_1_771E788F801E5686(::Class_1_5F4D64A4B97E38F9* a1, ::Class_1_7C1B6F38E8E579A2* a2)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_7C1B6F38E8E579A2*))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_771E788F801E5686_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardWindow* Method_1_9CFB9781A4D821FA(::Class_1_5F4D64A4B97E38F9* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_9CFB9781A4D821FA_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow* Method_1_0F76768B2DA32ECB(::Class_1_5F4D64A4B97E38F9* a1, ::Class_1_D55DA8BFAC94B3A4_1* a2, ::System::UInt32 a3)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_D55DA8BFAC94B3A4_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_0F76768B2DA32ECB_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow* Method_1_144B88E84EFFF05C(::Class_1_5F4D64A4B97E38F9* a1, ::Class_1_E1F8E3E063D5EA1C* a2)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_E1F8E3E063D5EA1C*))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_144B88E84EFFF05C_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow* Method_1_771E788F801E5686_1(::Class_1_5F4D64A4B97E38F9* a1, ::Class_1_A3520E3BCB4F735C* a2)
	{
		return ((::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow*(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_A3520E3BCB4F735C*))((::PBYTE)hIl2Cpp + CLASS_1_9BE72F9E795F5FE6_METHOD_1_771E788F801E5686_1_OFFSET))(this, a1, a2);
	}
};
