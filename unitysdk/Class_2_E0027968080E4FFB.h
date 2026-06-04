#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ChessBoardState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

class Class_0_16E4307DCC419505_219;
class Class_0_16E4307DCC419505_84;
class Class_1_D33B7D6901AE39E9;
class Class_1_E05E7A6D9DE9138B;
class Class_2_FD51057495DB654F;
class Class_3_1A9D32B2B1D681B8;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client::LittleGame { class MatchThreeTimelineBattleField; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_E0027968080E4FFB_METHOD_2_17E92CEBCBCC2368_OFFSET UNITYSDK_OFFSET(0xA6D21A0)
#define CLASS_2_E0027968080E4FFB_METHOD_2_194D9F2FF8786248_OFFSET UNITYSDK_OFFSET(0xA6D2EF0)
#define CLASS_2_E0027968080E4FFB_METHOD_2_2E3BB0891D74C5B2_OFFSET UNITYSDK_OFFSET(0xA6D2200)
#define CLASS_2_E0027968080E4FFB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA6D22C0)
#define CLASS_2_E0027968080E4FFB_METHOD_2_68BDD8E6DCAFCBD2_OFFSET UNITYSDK_OFFSET(0xA6D23B0)
#define CLASS_2_E0027968080E4FFB_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xA6D2270)
#define CLASS_2_E0027968080E4FFB_METHOD_2_9DECED7353B7CDFA_OFFSET UNITYSDK_OFFSET(0xA6D34B0)
#define CLASS_2_E0027968080E4FFB_METHOD_2_B24B73121F9886EF_OFFSET UNITYSDK_OFFSET(0xA6D2370)
#define CLASS_2_E0027968080E4FFB_METHOD_2_B9A97467188E4B69_1_OFFSET UNITYSDK_OFFSET(0xA6D2830)
#define CLASS_2_E0027968080E4FFB_METHOD_2_B9A97467188E4B69_2_OFFSET UNITYSDK_OFFSET(0xA6D2E00)
#define CLASS_2_E0027968080E4FFB_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xA6D2710)
#define CLASS_2_E0027968080E4FFB_METHOD_2_CCF480ADCBEB5655_OFFSET UNITYSDK_OFFSET(0xA6D2140)
#define CLASS_2_E0027968080E4FFB_METHOD_2_D259E4250C1AB76E_OFFSET UNITYSDK_OFFSET(0xA6D3530)
#define CLASS_2_E0027968080E4FFB_METHOD_2_D30D9BF795A30989_OFFSET UNITYSDK_OFFSET(0xA6D2B00)
#define CLASS_2_E0027968080E4FFB_METHOD_2_DF77B1D9F320B387_OFFSET UNITYSDK_OFFSET(0xA6D2940)
#define CLASS_2_E0027968080E4FFB_METHOD_2_E9BCC4C7DCC8C682_OFFSET UNITYSDK_OFFSET(0xA6D2A20)
#define CLASS_2_E0027968080E4FFB_METHOD_2_EDEBDEAB1529B747_OFFSET UNITYSDK_OFFSET(0xA6D2320)
#define CLASS_2_E0027968080E4FFB_METHOD_2_F871BE5B20D679E4_1_OFFSET UNITYSDK_OFFSET(0xA6D2580)
#define CLASS_2_E0027968080E4FFB_METHOD_2_F871BE5B20D679E4_OFFSET UNITYSDK_OFFSET(0xA6D23F0)
#define CLASS_2_E0027968080E4FFB__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D1EF0)

inline static constexpr unsigned int Class_2_E0027968080E4FFB_TypeDefinitionIndex = 71141;

class Class_2_E0027968080E4FFB : public ::Class_1_FD893FD36F6A3A6D
{
public:
	::RPG::Client::MatchThreeBoard* Field_2_0; // 0x18
	::Class_1_E05E7A6D9DE9138B* Field_2_1; // 0x20
	::Class_1_D33B7D6901AE39E9* Field_2_2; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::Match3::ChessBoardState>* Field_2_3; // 0x30
	::RPG::Client::LittleGame::MatchThreeTimelineBattleField* Field_2_4; // 0x38
	::Class_3_1A9D32B2B1D681B8* Field_2_5; // 0x40

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_1A9D32B2B1D681B8* a2, ::RPG::Client::MatchThreeBoard* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_1A9D32B2B1D681B8*, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CCF480ADCBEB5655(::RPG::Client::LittleGame::MatchThreeTimelineBattleField* a1, ::RPG::Client::MatchThreeBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField*, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_CCF480ADCBEB5655_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_17E92CEBCBCC2368(::Class_0_16E4307DCC419505_84* a1, ::Class_2_FD51057495DB654F* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_84*, ::Class_2_FD51057495DB654F*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_17E92CEBCBCC2368_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2E3BB0891D74C5B2(::Class_0_16E4307DCC419505_84* a1, ::Class_2_FD51057495DB654F* a2, ::System::String* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_84*, ::Class_2_FD51057495DB654F*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_2E3BB0891D74C5B2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_EDEBDEAB1529B747(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_EDEBDEAB1529B747_OFFSET))(this, a1);
	}

	::RPG::Client::MatchThreeBoard* Method_2_B24B73121F9886EF()
	{
		return ((::RPG::Client::MatchThreeBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_B24B73121F9886EF_OFFSET))(this);
	}

	::RPG::Client::LittleGame::MatchThreeTimelineBattleField* Method_2_68BDD8E6DCAFCBD2()
	{
		return ((::RPG::Client::LittleGame::MatchThreeTimelineBattleField*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_68BDD8E6DCAFCBD2_OFFSET))(this);
	}

	::System::Void Method_2_F871BE5B20D679E4(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_F871BE5B20D679E4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F871BE5B20D679E4_1(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_F871BE5B20D679E4_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_B9A97467188E4B69_1_OFFSET))(this);
	}

	::System::Void Method_2_DF77B1D9F320B387(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::Match3::OpponentRole a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_DF77B1D9F320B387_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E9BCC4C7DCC8C682(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_E9BCC4C7DCC8C682_OFFSET))(this, a1);
	}

	::System::Void Method_2_D30D9BF795A30989(::RPG::Client::LittleGame::Match3::OpponentRole a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_D30D9BF795A30989_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9A97467188E4B69_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_B9A97467188E4B69_2_OFFSET))(this);
	}

	::System::Void Method_2_194D9F2FF8786248(::RPG::Client::LittleGame::Match3::OpponentRole a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_194D9F2FF8786248_OFFSET))(this, a1);
	}

	::System::Void Method_2_9DECED7353B7CDFA(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_9DECED7353B7CDFA_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_219* Method_2_D259E4250C1AB76E(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_219*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_D259E4250C1AB76E_OFFSET))(this, a1);
	}
};
