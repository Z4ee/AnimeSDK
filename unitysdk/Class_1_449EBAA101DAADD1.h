#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9876AE41D0DC17C7;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define CLASS_1_449EBAA101DAADD1_METHOD_1_AB42CBDD34451F06_OFFSET UNITYSDK_OFFSET(0x15A01170)

inline static constexpr unsigned int Class_1_449EBAA101DAADD1_TypeDefinitionIndex = 90194;

class Class_1_449EBAA101DAADD1 : public ::System::Object
{
public:
	static ::Class_1_9876AE41D0DC17C7* Method_1_AB42CBDD34451F06(::MoleMole::HollowChessboard::HollowEntity* a1, ::System::String* a2)
	{
		return ((::Class_1_9876AE41D0DC17C7*(*)(::MoleMole::HollowChessboard::HollowEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_449EBAA101DAADD1_METHOD_1_AB42CBDD34451F06_OFFSET))(a1, a2);
	}
};
