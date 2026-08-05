#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_5_78B1EAE4D1A36E33_Class_1_DC19A1F07A189AC6_2;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_B6B921B762BD5EA8_METHOD_1_661519F26C1A304D_OFFSET UNITYSDK_OFFSET(0x144170E0)
#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_B6B921B762BD5EA8_METHOD_1_D62B9256DD010494_OFFSET UNITYSDK_OFFSET(0x144170B0)
#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_B6B921B762BD5EA8__CTOR_OFFSET UNITYSDK_OFFSET(0x144170A0)

inline static constexpr unsigned int Class_5_78B1EAE4D1A36E33_Class_1_B6B921B762BD5EA8_TypeDefinitionIndex = 58075;

class Class_5_78B1EAE4D1A36E33_Class_1_B6B921B762BD5EA8 : public ::System::Object
{
public:
	::Class_5_78B1EAE4D1A36E33_Class_1_DC19A1F07A189AC6_2* Field_1_6; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_7; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_B6B921B762BD5EA8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D62B9256DD010494()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_B6B921B762BD5EA8_METHOD_1_D62B9256DD010494_OFFSET))(this);
	}

	::System::Void Method_1_661519F26C1A304D(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_B6B921B762BD5EA8_METHOD_1_661519F26C1A304D_OFFSET))(this, a1);
	}
};
