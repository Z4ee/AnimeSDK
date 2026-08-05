#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_611DAD94AB3EA361.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D16C8601E14688CD_METHOD_1_48700BD7175D559C_OFFSET UNITYSDK_OFFSET(0x18211930)
#define CLASS_1_D16C8601E14688CD_METHOD_1_7A0F67D0ABF6B357_OFFSET UNITYSDK_OFFSET(0x182112D0)
#define CLASS_1_D16C8601E14688CD_METHOD_1_8B202FDDEEDA5639_OFFSET UNITYSDK_OFFSET(0x18211700)
#define CLASS_1_D16C8601E14688CD_METHOD_1_ADA49E236E8374BF_OFFSET UNITYSDK_OFFSET(0x18211610)
#define CLASS_1_D16C8601E14688CD_METHOD_1_DA1939696B3A344A_OFFSET UNITYSDK_OFFSET(0x18211370)
#define CLASS_1_D16C8601E14688CD__CTOR_OFFSET UNITYSDK_OFFSET(0x182112C0)

inline static constexpr unsigned int Class_1_D16C8601E14688CD_TypeDefinitionIndex = 89776;

class Class_1_D16C8601E14688CD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16C8601E14688CD__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_7A0F67D0ABF6B357(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_D16C8601E14688CD_METHOD_1_7A0F67D0ABF6B357_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DA1939696B3A344A(::MoleMole::HollowChessboard::HollowCell a1, ::Enum_3_611DAD94AB3EA361 a2)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell, ::Enum_3_611DAD94AB3EA361))((::PBYTE)hIl2Cpp + CLASS_1_D16C8601E14688CD_METHOD_1_DA1939696B3A344A_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::HollowCell Method_1_8B202FDDEEDA5639(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_D16C8601E14688CD_METHOD_1_8B202FDDEEDA5639_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_ADA49E236E8374BF(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_D16C8601E14688CD_METHOD_1_ADA49E236E8374BF_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::HollowEntity* Method_1_48700BD7175D559C(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_D16C8601E14688CD_METHOD_1_48700BD7175D559C_OFFSET))(a1);
	}
};
