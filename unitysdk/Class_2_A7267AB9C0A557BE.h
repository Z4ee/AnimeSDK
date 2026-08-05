#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A7267AB9C0A557BE_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x111628F0)
#define CLASS_2_A7267AB9C0A557BE_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x111626B0)
#define CLASS_2_A7267AB9C0A557BE__CTOR_OFFSET UNITYSDK_OFFSET(0x11162880)

inline static constexpr unsigned int Class_2_A7267AB9C0A557BE_TypeDefinitionIndex = 53985;

class Class_2_A7267AB9C0A557BE : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_6; // 0x80
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::Int32>* Field_2_1; // 0x88
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_7; // 0x90
	::System::Int32 Field_2_0; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7267AB9C0A557BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7267AB9C0A557BE_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7267AB9C0A557BE_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
