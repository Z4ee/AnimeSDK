#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_09D70B9EED699290.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B3B7AD2B34783116_METHOD_3_1B41D161CA402231_OFFSET UNITYSDK_OFFSET(0x1106AF20)
#define CLASS_3_B3B7AD2B34783116_METHOD_3_8DA3BE630096BABE_OFFSET UNITYSDK_OFFSET(0x1106B0E0)
#define CLASS_3_B3B7AD2B34783116__CTOR_OFFSET UNITYSDK_OFFSET(0x1106AED0)

inline static constexpr unsigned int Class_3_B3B7AD2B34783116_TypeDefinitionIndex = 51816;

class Class_3_B3B7AD2B34783116 : public ::Class_2_09D70B9EED699290
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3B7AD2B34783116__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1B41D161CA402231(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B3B7AD2B34783116_METHOD_3_1B41D161CA402231_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_3_8DA3BE630096BABE()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3B7AD2B34783116_METHOD_3_8DA3BE630096BABE_OFFSET))(this);
	}
};
