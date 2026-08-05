#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_B71CA39446BBFDC7;
class Class_5_DCFF91E03A93C03C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8563E9CDD5B0FAFD_METHOD_1_34CCE9A092DC6D10_OFFSET UNITYSDK_OFFSET(0x1A2A9900)
#define CLASS_1_8563E9CDD5B0FAFD_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1A2A9C00)
#define CLASS_1_8563E9CDD5B0FAFD_METHOD_1_DC78E8F135451113_OFFSET UNITYSDK_OFFSET(0x1A2A9C80)
#define CLASS_1_8563E9CDD5B0FAFD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A2A9BF0)
#define CLASS_1_8563E9CDD5B0FAFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A98F0)

inline static constexpr unsigned int Class_1_8563E9CDD5B0FAFD_TypeDefinitionIndex = 63833;

class Class_1_8563E9CDD5B0FAFD : public ::System::Object
{
public:
	::Class_5_DCFF91E03A93C03C* Field_1_1; // 0x10
	::Class_1_B71CA39446BBFDC7* Field_1_3; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::System::Boolean Field_1_2; // 0x21

	::System::Void _ctor(::Class_5_DCFF91E03A93C03C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + CLASS_1_8563E9CDD5B0FAFD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_34CCE9A092DC6D10(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_8563E9CDD5B0FAFD_METHOD_1_34CCE9A092DC6D10_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8563E9CDD5B0FAFD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8563E9CDD5B0FAFD_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DC78E8F135451113(::MoleMole::Vector2Int a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8563E9CDD5B0FAFD_METHOD_1_DC78E8F135451113_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
