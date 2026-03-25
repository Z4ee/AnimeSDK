#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/MonopolyGameState.h"

class Class_1_A05547227AB13156;
class Class_1_A4F0FA6F81B0B135;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A51EA64DAB51EC60_METHOD_2_14C25E069782ABC9_OFFSET UNITYSDK_OFFSET(0x168F7280)
#define CLASS_2_A51EA64DAB51EC60_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x168F74B0)
#define CLASS_2_A51EA64DAB51EC60_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x168F70E0)
#define CLASS_2_A51EA64DAB51EC60_METHOD_2_97EA00B772867F5C_OFFSET UNITYSDK_OFFSET(0x168F7150)
#define CLASS_2_A51EA64DAB51EC60_METHOD_2_B64C60973842FE45_1_OFFSET UNITYSDK_OFFSET(0x168F7400)
#define CLASS_2_A51EA64DAB51EC60_METHOD_2_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x168F7030)
#define CLASS_2_A51EA64DAB51EC60_METHOD_2_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0x168F73B0)
#define CLASS_2_A51EA64DAB51EC60__CTOR_OFFSET UNITYSDK_OFFSET(0x168F7520)

inline static constexpr unsigned int Class_2_A51EA64DAB51EC60_TypeDefinitionIndex = 32605;

class Class_2_A51EA64DAB51EC60 : public ::Entitas::Entity
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A51EA64DAB51EC60__CTOR_OFFSET))(this);
	}

	::Class_1_A05547227AB13156* Method_2_B64C60973842FE45()
	{
		return ((::Class_1_A05547227AB13156*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A51EA64DAB51EC60_METHOD_2_B64C60973842FE45_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A51EA64DAB51EC60_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_97EA00B772867F5C(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Class_1_A4F0FA6F81B0B135*>* a3, ::Class_1_A4F0FA6F81B0B135* a4, ::RPG::Client::LittleGame::MonopolyGameState a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_A4F0FA6F81B0B135*>*, ::Class_1_A4F0FA6F81B0B135*, ::RPG::Client::LittleGame::MonopolyGameState))((::PBYTE)hIl2Cpp + CLASS_2_A51EA64DAB51EC60_METHOD_2_97EA00B772867F5C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_14C25E069782ABC9(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Class_1_A4F0FA6F81B0B135*>* a3, ::Class_1_A4F0FA6F81B0B135* a4, ::RPG::Client::LittleGame::MonopolyGameState a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_A4F0FA6F81B0B135*>*, ::Class_1_A4F0FA6F81B0B135*, ::RPG::Client::LittleGame::MonopolyGameState))((::PBYTE)hIl2Cpp + CLASS_2_A51EA64DAB51EC60_METHOD_2_14C25E069782ABC9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_D20F759FC2EC43FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A51EA64DAB51EC60_METHOD_2_D20F759FC2EC43FB_OFFSET))(this);
	}

	::Class_1_A05547227AB13156* Method_2_B64C60973842FE45_1()
	{
		return ((::Class_1_A05547227AB13156*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A51EA64DAB51EC60_METHOD_2_B64C60973842FE45_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A51EA64DAB51EC60_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}
};
