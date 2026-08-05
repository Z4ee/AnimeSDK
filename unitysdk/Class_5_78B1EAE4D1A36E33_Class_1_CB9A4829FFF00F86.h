#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_5_78B1EAE4D1A36E33;
class Class_5_DCFF91E03A93C03C;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_CB9A4829FFF00F86_METHOD_1_077C3A3770995887_OFFSET UNITYSDK_OFFSET(0x1457C0C0)
#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_CB9A4829FFF00F86_METHOD_1_D62B9256DD010494_OFFSET UNITYSDK_OFFSET(0x1457C0F0)
#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_CB9A4829FFF00F86__CTOR_OFFSET UNITYSDK_OFFSET(0x1457C0B0)

inline static constexpr unsigned int Class_5_78B1EAE4D1A36E33_Class_1_CB9A4829FFF00F86_TypeDefinitionIndex = 58077;

class Class_5_78B1EAE4D1A36E33_Class_1_CB9A4829FFF00F86 : public ::System::Object
{
public:
	::Class_5_78B1EAE4D1A36E33* Field_1_0; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_5; // 0x18
	::Class_5_DCFF91E03A93C03C* Field_1_7; // 0x20
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_CB9A4829FFF00F86__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_077C3A3770995887(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_CB9A4829FFF00F86_METHOD_1_077C3A3770995887_OFFSET))(this, a1);
	}

	::System::Void Method_1_D62B9256DD010494()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_CB9A4829FFF00F86_METHOD_1_D62B9256DD010494_OFFSET))(this);
	}
};
