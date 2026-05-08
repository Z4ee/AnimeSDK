#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_5_12295D592E32B8BA_Class_1_DC19A1F07A189AC6;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_5_12295D592E32B8BA_CLASS_1_90E0285D5BC6814F_METHOD_1_BC696679C2A13DC4_OFFSET UNITYSDK_OFFSET(0x13F9C800)
#define CLASS_5_12295D592E32B8BA_CLASS_1_90E0285D5BC6814F_METHOD_1_D62B9256DD010494_OFFSET UNITYSDK_OFFSET(0x13F9C7D0)
#define CLASS_5_12295D592E32B8BA_CLASS_1_90E0285D5BC6814F__CTOR_OFFSET UNITYSDK_OFFSET(0x13F9C7C0)

inline static constexpr unsigned int Class_5_12295D592E32B8BA_Class_1_90E0285D5BC6814F_TypeDefinitionIndex = 37972;

class Class_5_12295D592E32B8BA_Class_1_90E0285D5BC6814F : public ::System::Object
{
public:
	::Class_5_12295D592E32B8BA_Class_1_DC19A1F07A189AC6* Field_1_2; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_90E0285D5BC6814F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D62B9256DD010494()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_90E0285D5BC6814F_METHOD_1_D62B9256DD010494_OFFSET))(this);
	}

	::System::Void Method_1_BC696679C2A13DC4(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_90E0285D5BC6814F_METHOD_1_BC696679C2A13DC4_OFFSET))(this, a1);
	}
};
