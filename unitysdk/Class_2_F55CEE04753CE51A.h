#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F55CEE04753CE51A_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x12775110)
#define CLASS_2_F55CEE04753CE51A_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x12774ED0)
#define CLASS_2_F55CEE04753CE51A__CTOR_OFFSET UNITYSDK_OFFSET(0x127750A0)

inline static constexpr unsigned int Class_2_F55CEE04753CE51A_TypeDefinitionIndex = 76239;

class Class_2_F55CEE04753CE51A : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::Int32>* Field_2_0; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0x88
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x90
	::System::Int32 Field_2_1; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F55CEE04753CE51A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F55CEE04753CE51A_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F55CEE04753CE51A_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
