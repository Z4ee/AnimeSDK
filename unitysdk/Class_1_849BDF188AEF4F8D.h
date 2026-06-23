#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_0AFACF733846A6F9.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_849BDF188AEF4F8D_METHOD_1_0CE5CE29F53FFD7E_OFFSET UNITYSDK_OFFSET(0x109EB580)
#define CLASS_1_849BDF188AEF4F8D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x109EB4E0)
#define CLASS_1_849BDF188AEF4F8D_METHOD_1_D3F3EEAD69D1BA95_OFFSET UNITYSDK_OFFSET(0x109EB440)
#define CLASS_1_849BDF188AEF4F8D__CTOR_OFFSET UNITYSDK_OFFSET(0x109EB380)

inline static constexpr unsigned int Class_1_849BDF188AEF4F8D_TypeDefinitionIndex = 41350;

class Class_1_849BDF188AEF4F8D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_0AFACF733846A6F9>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_849BDF188AEF4F8D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D3F3EEAD69D1BA95(::MoleMole::HollowChessboard::HollowCell a1, ::Struct_2_0AFACF733846A6F9 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Struct_2_0AFACF733846A6F9))((::PBYTE)hIl2Cpp + CLASS_1_849BDF188AEF4F8D_METHOD_1_D3F3EEAD69D1BA95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_849BDF188AEF4F8D_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Struct_2_0AFACF733846A6F9 Method_1_0CE5CE29F53FFD7E(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Struct_2_0AFACF733846A6F9(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_849BDF188AEF4F8D_METHOD_1_0CE5CE29F53FFD7E_OFFSET))(this, a1);
	}
};
