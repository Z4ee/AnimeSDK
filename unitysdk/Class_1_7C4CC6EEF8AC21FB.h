#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7C4CC6EEF8AC21FB_Enum_3_DF0BDF73D5FF6D1D.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_A85DD0CF7A2118D1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_7C4CC6EEF8AC21FB__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD4670)

inline static constexpr unsigned int Class_1_7C4CC6EEF8AC21FB_TypeDefinitionIndex = 56961;

class Class_1_7C4CC6EEF8AC21FB : public ::System::Object
{
public:
	::System::Collections::Generic::IDictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_A85DD0CF7A2118D1>* Field_1_1; // 0x10
	::Class_1_7C4CC6EEF8AC21FB_Enum_3_DF0BDF73D5FF6D1D Field_1_2; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CC6EEF8AC21FB__CTOR_OFFSET))(this);
	}
};
