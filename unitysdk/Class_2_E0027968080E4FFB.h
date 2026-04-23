#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ChessBoardState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

class Class_0_16E4307DCC419505_209;
class Class_0_16E4307DCC419505_85;
class Class_1_867B6CE75953535A;
class Class_1_E05E7A6D9DE9138B;
class Class_2_9850514C0F89B91A;
class Class_3_1A9D32B2B1D681B8;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client::LittleGame { class MatchThreeTimelineBattleField; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_E0027968080E4FFB_METHOD_2_17E92CEBCBCC2368_OFFSET UNITYSDK_OFFSET(0xAFE3C00)
#define CLASS_2_E0027968080E4FFB_METHOD_2_194D9F2FF8786248_OFFSET UNITYSDK_OFFSET(0xAFE4950)
#define CLASS_2_E0027968080E4FFB_METHOD_2_2E3BB0891D74C5B2_OFFSET UNITYSDK_OFFSET(0xAFE3C60)
#define CLASS_2_E0027968080E4FFB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAFE3D20)
#define CLASS_2_E0027968080E4FFB_METHOD_2_68BDD8E6DCAFCBD2_OFFSET UNITYSDK_OFFSET(0xAFE3E10)
#define CLASS_2_E0027968080E4FFB_METHOD_2_907E24F785836BA0_1_OFFSET UNITYSDK_OFFSET(0xAFE4860)
#define CLASS_2_E0027968080E4FFB_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0xAFE4290)
#define CLASS_2_E0027968080E4FFB_METHOD_2_946C86AFF9AAA632_OFFSET UNITYSDK_OFFSET(0xAFE4F00)
#define CLASS_2_E0027968080E4FFB_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xAFE3CD0)
#define CLASS_2_E0027968080E4FFB_METHOD_2_B24B73121F9886EF_OFFSET UNITYSDK_OFFSET(0xAFE3DD0)
#define CLASS_2_E0027968080E4FFB_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xAFE4170)
#define CLASS_2_E0027968080E4FFB_METHOD_2_CCF480ADCBEB5655_OFFSET UNITYSDK_OFFSET(0xAFE3BA0)
#define CLASS_2_E0027968080E4FFB_METHOD_2_D259E4250C1AB76E_OFFSET UNITYSDK_OFFSET(0xAFE4F80)
#define CLASS_2_E0027968080E4FFB_METHOD_2_D30D9BF795A30989_OFFSET UNITYSDK_OFFSET(0xAFE4560)
#define CLASS_2_E0027968080E4FFB_METHOD_2_D7E45BF325084F16_OFFSET UNITYSDK_OFFSET(0xAFE3E50)
#define CLASS_2_E0027968080E4FFB_METHOD_2_DF77B1D9F320B387_OFFSET UNITYSDK_OFFSET(0xAFE43A0)
#define CLASS_2_E0027968080E4FFB_METHOD_2_E9BCC4C7DCC8C682_OFFSET UNITYSDK_OFFSET(0xAFE4480)
#define CLASS_2_E0027968080E4FFB_METHOD_2_EDEBDEAB1529B747_OFFSET UNITYSDK_OFFSET(0xAFE3D80)
#define CLASS_2_E0027968080E4FFB_METHOD_2_FA41BF00469AE66D_OFFSET UNITYSDK_OFFSET(0xAFE3FE0)
#define CLASS_2_E0027968080E4FFB__CTOR_OFFSET UNITYSDK_OFFSET(0xAFE3950)

inline static constexpr unsigned int Class_2_E0027968080E4FFB_TypeDefinitionIndex = 70325;

class Class_2_E0027968080E4FFB : public ::Class_1_FD893FD36F6A3A6D
{
public:
	::Class_1_E05E7A6D9DE9138B* Field_2_4; // 0x18
	::Class_1_867B6CE75953535A* Field_2_2; // 0x20
	::RPG::Client::LittleGame::MatchThreeTimelineBattleField* Field_2_0; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::Match3::ChessBoardState>* Field_2_5; // 0x30
	::Class_3_1A9D32B2B1D681B8* Field_2_3; // 0x38
	::RPG::Client::MatchThreeBoard* Field_2_1; // 0x40

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2, ::RPG::Client::MatchThreeBoard* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CCF480ADCBEB5655(::RPG::Client::LittleGame::MatchThreeTimelineBattleField* a1, ::RPG::Client::MatchThreeBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField*, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_CCF480ADCBEB5655_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_17E92CEBCBCC2368(::Class_0_16E4307DCC419505_85* a1, ::Class_2_9850514C0F89B91A* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_2_9850514C0F89B91A*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_17E92CEBCBCC2368_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2E3BB0891D74C5B2(::Class_0_16E4307DCC419505_85* a1, ::Class_2_9850514C0F89B91A* a2, ::System::String* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_2_9850514C0F89B91A*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_2E3BB0891D74C5B2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_9850514C0F89B91A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
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

	::System::Void Method_2_D7E45BF325084F16(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_D7E45BF325084F16_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FA41BF00469AE66D(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_FA41BF00469AE66D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_907E24F785836BA0_OFFSET))(this);
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

	::System::Void Method_2_907E24F785836BA0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_907E24F785836BA0_1_OFFSET))(this);
	}

	::System::Void Method_2_194D9F2FF8786248(::RPG::Client::LittleGame::Match3::OpponentRole a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_194D9F2FF8786248_OFFSET))(this, a1);
	}

	::System::Void Method_2_946C86AFF9AAA632(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_946C86AFF9AAA632_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_209* Method_2_D259E4250C1AB76E(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_209*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0027968080E4FFB_METHOD_2_D259E4250C1AB76E_OFFSET))(this, a1);
	}
};
