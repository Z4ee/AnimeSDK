#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_A85DD0CF7A2118D1.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
class Class_5_FCAF801AC482D3B5;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_12295D592E32B8BA_CLASS_1_EF2C6B724F58234C_METHOD_1_50AE1B79B340F141_OFFSET UNITYSDK_OFFSET(0x102DB940)
#define CLASS_5_12295D592E32B8BA_CLASS_1_EF2C6B724F58234C__CTOR_OFFSET UNITYSDK_OFFSET(0x102DB930)

inline static constexpr unsigned int Class_5_12295D592E32B8BA_Class_1_EF2C6B724F58234C_TypeDefinitionIndex = 65828;

class Class_5_12295D592E32B8BA_Class_1_EF2C6B724F58234C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_1; // 0x10
	::Class_5_FCAF801AC482D3B5* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_A85DD0CF7A2118D1>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_EF2C6B724F58234C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_50AE1B79B340F141(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_EF2C6B724F58234C_METHOD_1_50AE1B79B340F141_OFFSET))(this, a1);
	}
};
