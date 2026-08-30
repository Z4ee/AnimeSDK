#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2839EDE8633A54DD;
class Class_1_5185963B66574CA6;
class Class_1_614D679AB9AEB872;
class Class_1_76F6F6F3F603AF89;
class Class_1_D065E7ED7DC532BE;
class Class_1_FEA15752D36306C9;
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class ExpeditionBattleRoute; }

#define CLASS_1_38457923AA4F98BB_METHOD_1_2F92216D4B18635A_OFFSET UNITYSDK_OFFSET(0xB93C5A0)
#define CLASS_1_38457923AA4F98BB_METHOD_1_C3DA95CEDC183ADB_OFFSET UNITYSDK_OFFSET(0xB93C400)
#define CLASS_1_38457923AA4F98BB_METHOD_1_D470232E0E45A980_OFFSET UNITYSDK_OFFSET(0xB93C7E0)
#define CLASS_1_38457923AA4F98BB__CTOR_OFFSET UNITYSDK_OFFSET(0xB93C3E0)

inline static constexpr unsigned int Class_1_38457923AA4F98BB_TypeDefinitionIndex = 63896;

class Class_1_38457923AA4F98BB : public ::System::Object
{
public:
	::Class_1_D065E7ED7DC532BE* JOHBJDFMNGA; // 0x10
	::Class_1_2839EDE8633A54DD* NGKPKBEGEGG; // 0x18
	::Class_1_614D679AB9AEB872* KDOBDEMBJCE; // 0x20
	::Class_1_FEA15752D36306C9* EFKNMBPNGEA; // 0x28
	::Class_1_5185963B66574CA6* MABDGPAHJCF; // 0x30

	::System::Void _ctor(::Class_1_D065E7ED7DC532BE* a1, ::Class_1_5185963B66574CA6* a2, ::Class_1_2839EDE8633A54DD* a3, ::Class_1_614D679AB9AEB872* a4, ::Class_1_FEA15752D36306C9* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D065E7ED7DC532BE*, ::Class_1_5185963B66574CA6*, ::Class_1_2839EDE8633A54DD*, ::Class_1_614D679AB9AEB872*, ::Class_1_FEA15752D36306C9*))((::PBYTE)hIl2Cpp + CLASS_1_38457923AA4F98BB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::ExpeditionBattleMap* Method_1_C3DA95CEDC183ADB(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleMap*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_38457923AA4F98BB_METHOD_1_C3DA95CEDC183ADB_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleRoute* Method_1_2F92216D4B18635A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::ExpeditionBattleRoute*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_38457923AA4F98BB_METHOD_1_2F92216D4B18635A_OFFSET))(this, a1, a2);
	}

	::Class_1_76F6F6F3F603AF89* Method_1_D470232E0E45A980(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_76F6F6F3F603AF89*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_38457923AA4F98BB_METHOD_1_D470232E0E45A980_OFFSET))(this, a1, a2);
	}
};
