#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_59B8D4D1943D9E41.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class MatPropertyData; }
namespace MoleMole::HollowChessboard { class PieceMaterialChangeEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EBACA96C31DAB7D8_METHOD_1_A5453DCD1168E46B_OFFSET UNITYSDK_OFFSET(0x1609EDE0)
#define CLASS_1_EBACA96C31DAB7D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1609ED90)

inline static constexpr unsigned int Class_1_EBACA96C31DAB7D8_TypeDefinitionIndex = 76503;

class Class_1_EBACA96C31DAB7D8 : public ::System::Object
{
public:
	::Struct_2_59B8D4D1943D9E41 Field_1_0; // 0x10
	::Struct_2_59B8D4D1943D9E41 Field_1_1; // 0x18

	::System::Void _ctor(::MoleMole::HollowChessboard::PieceMaterialChangeEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::PieceMaterialChangeEntry*))((::PBYTE)hIl2Cpp + CLASS_1_EBACA96C31DAB7D8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5453DCD1168E46B(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::MatPropertyData*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::MatPropertyData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::MatPropertyData*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowChessboard::MatPropertyData*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBACA96C31DAB7D8_METHOD_1_A5453DCD1168E46B_OFFSET))(this, a1, a2);
	}
};
