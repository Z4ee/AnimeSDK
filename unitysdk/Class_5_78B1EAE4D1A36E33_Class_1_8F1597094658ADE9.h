#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_A85DD0CF7A2118D1.h"
#include "unitysdk/System/Object.h"

class Class_5_78B1EAE4D1A36E33;
class Class_5_DCFF91E03A93C03C;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_8F1597094658ADE9_METHOD_1_5CB83AD7761D82D4_OFFSET UNITYSDK_OFFSET(0x10D0E680)
#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_8F1597094658ADE9_METHOD_1_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x10D0E610)
#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_8F1597094658ADE9__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0E600)

inline static constexpr unsigned int Class_5_78B1EAE4D1A36E33_Class_1_8F1597094658ADE9_TypeDefinitionIndex = 58079;

class Class_5_78B1EAE4D1A36E33_Class_1_8F1597094658ADE9 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_A85DD0CF7A2118D1>* Field_1_1; // 0x18
	::Class_5_78B1EAE4D1A36E33* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_8F1597094658ADE9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_8F1597094658ADE9_METHOD_1_CB8CF89038C44C8A_OFFSET))(this);
	}

	::System::Void Method_1_5CB83AD7761D82D4(::Class_5_DCFF91E03A93C03C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_8F1597094658ADE9_METHOD_1_5CB83AD7761D82D4_OFFSET))(this, a1);
	}
};
