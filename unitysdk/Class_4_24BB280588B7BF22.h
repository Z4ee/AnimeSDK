#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B3B7AD2B34783116.h"

class Class_0_16E4307DCC419505_445;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_24BB280588B7BF22_METHOD_4_66F447D5A5570D67_OFFSET UNITYSDK_OFFSET(0x18C31370)
#define CLASS_4_24BB280588B7BF22_METHOD_4_815684CAFA5E3BDA_OFFSET UNITYSDK_OFFSET(0x18C31740)
#define CLASS_4_24BB280588B7BF22_METHOD_4_DAD2A0DD29D324EE_OFFSET UNITYSDK_OFFSET(0x18C317F0)
#define CLASS_4_24BB280588B7BF22_METHOD_4_DF1F6BD41CBE3CDE_OFFSET UNITYSDK_OFFSET(0x18C31E50)
#define CLASS_4_24BB280588B7BF22__CTOR_OFFSET UNITYSDK_OFFSET(0x18C317A0)

inline static constexpr unsigned int Class_4_24BB280588B7BF22_TypeDefinitionIndex = 82777;

class Class_4_24BB280588B7BF22 : public ::Class_3_B3B7AD2B34783116
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24BB280588B7BF22__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_66F447D5A5570D67()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24BB280588B7BF22_METHOD_4_66F447D5A5570D67_OFFSET))(this);
	}

	::System::Void Method_4_815684CAFA5E3BDA(::System::Int32 a1, ::Class_0_16E4307DCC419505_445* a2, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_445*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + CLASS_4_24BB280588B7BF22_METHOD_4_815684CAFA5E3BDA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_DAD2A0DD29D324EE(::System::Int32 a1, ::Class_0_16E4307DCC419505_445* a2, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_445*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + CLASS_4_24BB280588B7BF22_METHOD_4_DAD2A0DD29D324EE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_DF1F6BD41CBE3CDE(::System::Int32 a1, ::Class_0_16E4307DCC419505_445* a2)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_445*))((::PBYTE)hIl2Cpp + CLASS_4_24BB280588B7BF22_METHOD_4_DF1F6BD41CBE3CDE_OFFSET))(this, a1, a2);
	}
};
