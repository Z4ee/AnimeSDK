#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/System/Object.h"

class Class_1_2D33D4E16DA6E537;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_87966CE34106C362_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1589A780)
#define CLASS_1_87966CE34106C362_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1589AA20)
#define CLASS_1_87966CE34106C362_METHOD_1_641B0E011994D7E4_OFFSET UNITYSDK_OFFSET(0x1589A920)
#define CLASS_1_87966CE34106C362_METHOD_1_D51D17D73C43E7A0_OFFSET UNITYSDK_OFFSET(0x1589AB30)
#define CLASS_1_87966CE34106C362__CTOR_OFFSET UNITYSDK_OFFSET(0x1589A710)

inline static constexpr unsigned int Class_1_87966CE34106C362_TypeDefinitionIndex = 78088;

class Class_1_87966CE34106C362 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_2D33D4E16DA6E537*>*>* IKLHJKCLHCF; // 0x10
	::System::Collections::Generic::List_1<::Class_1_2D33D4E16DA6E537*>* IKMGNAONFMJ; // 0x18
	::System::Int32 FLBNKDEDJPB; // 0x20
	::System::Int32 GJENFEMGNAN; // 0x24
	::System::Int32 EONBOLJMAIH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87966CE34106C362__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87966CE34106C362_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_641B0E011994D7E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87966CE34106C362_METHOD_1_641B0E011994D7E4_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87966CE34106C362_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_D51D17D73C43E7A0(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::Prop::ChessDirection a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::ChessDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87966CE34106C362_METHOD_1_D51D17D73C43E7A0_OFFSET))(this, a1, a2, a3, a4);
	}
};
