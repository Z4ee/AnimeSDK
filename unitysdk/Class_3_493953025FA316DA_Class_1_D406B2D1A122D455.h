#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
template <typename T> class Class_1_1D2D64B0F11327D7;

#define CLASS_3_493953025FA316DA_CLASS_1_D406B2D1A122D455_METHOD_1_476ED10B573CD6F9_OFFSET UNITYSDK_OFFSET(0xD21D380)
#define CLASS_3_493953025FA316DA_CLASS_1_D406B2D1A122D455__CTOR_OFFSET UNITYSDK_OFFSET(0xD21D370)

inline static constexpr unsigned int Class_3_493953025FA316DA_Class_1_D406B2D1A122D455_TypeDefinitionIndex = 53816;

class Class_3_493953025FA316DA_Class_1_D406B2D1A122D455 : public ::System::Object
{
public:
	::System::Func_4<::System::Boolean, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Double>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_CLASS_1_D406B2D1A122D455__CTOR_OFFSET))(this);
	}

	::System::Double Method_1_476ED10B573CD6F9(::Class_1_1D2D64B0F11327D7<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Double(*)(::PVOID, ::Class_1_1D2D64B0F11327D7<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_CLASS_1_D406B2D1A122D455_METHOD_1_476ED10B573CD6F9_OFFSET))(this, a1);
	}
};
