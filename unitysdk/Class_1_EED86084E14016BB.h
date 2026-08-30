#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C5CEA8DD589BD643;
class Class_1_D99E79D11786C05A;
namespace RPG::Client::B51Racing { class B51RacingScoreBoardPageViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_EED86084E14016BB_METHOD_1_4120886B2C24DD9B_OFFSET UNITYSDK_OFFSET(0x16EC49D0)
#define CLASS_1_EED86084E14016BB_METHOD_1_52702FB0C61A45EA_OFFSET UNITYSDK_OFFSET(0x16EC54B0)
#define CLASS_1_EED86084E14016BB_METHOD_1_602605A98D235C25_OFFSET UNITYSDK_OFFSET(0x16EC5270)
#define CLASS_1_EED86084E14016BB_METHOD_1_650CDA94515F8B9B_OFFSET UNITYSDK_OFFSET(0x16EC4960)
#define CLASS_1_EED86084E14016BB_METHOD_1_D175F70AA766422C_OFFSET UNITYSDK_OFFSET(0x16EC43D0)
#define CLASS_1_EED86084E14016BB__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC5790)

inline static constexpr unsigned int Class_1_EED86084E14016BB_TypeDefinitionIndex = 80641;

class Class_1_EED86084E14016BB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EED86084E14016BB__CTOR_OFFSET))(this);
	}

	::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* Method_1_D175F70AA766422C(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C5CEA8DD589BD643*>* a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C5CEA8DD589BD643*>*))((::PBYTE)hIl2Cpp + CLASS_1_EED86084E14016BB_METHOD_1_D175F70AA766422C_OFFSET))(this, a1);
	}

	::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* Method_1_650CDA94515F8B9B(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C5CEA8DD589BD643*>* a1, ::Class_1_D99E79D11786C05A* a2)
	{
		return ((::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C5CEA8DD589BD643*>*, ::Class_1_D99E79D11786C05A*))((::PBYTE)hIl2Cpp + CLASS_1_EED86084E14016BB_METHOD_1_650CDA94515F8B9B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* Method_1_4120886B2C24DD9B(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C5CEA8DD589BD643*>* a1, ::Class_1_D99E79D11786C05A* a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
	{
		return ((::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C5CEA8DD589BD643*>*, ::Class_1_D99E79D11786C05A*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_EED86084E14016BB_METHOD_1_4120886B2C24DD9B_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Int32 Method_1_602605A98D235C25(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C5CEA8DD589BD643*>* a1)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C5CEA8DD589BD643*>*))((::PBYTE)hIl2Cpp + CLASS_1_EED86084E14016BB_METHOD_1_602605A98D235C25_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_52702FB0C61A45EA(::System::UInt32 a1, ::Class_1_D99E79D11786C05A* a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
	{
		return ((::System::Int32(*)(::System::UInt32, ::Class_1_D99E79D11786C05A*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_EED86084E14016BB_METHOD_1_52702FB0C61A45EA_OFFSET))(a1, a2, a3);
	}
};
