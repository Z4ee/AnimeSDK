#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BCEAF20494F55723.h"
#include "unitysdk/System/Object.h"

class Class_1_ADD6877A1FCC4AE7;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace MoleMole::HollowChessboard { class HollowRenderSequenceConfig; }

#define CLASS_1_788268E119852374_METHOD_1_4B80024D25A5763A_OFFSET UNITYSDK_OFFSET(0xD466EB0)
#define CLASS_1_788268E119852374__CTOR_OFFSET UNITYSDK_OFFSET(0xD466EA0)

inline static constexpr unsigned int Class_1_788268E119852374_TypeDefinitionIndex = 70458;

class Class_1_788268E119852374 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_788268E119852374__CTOR_OFFSET))(this);
	}

	::Class_1_ADD6877A1FCC4AE7* Method_1_4B80024D25A5763A(::MoleMole::HollowChessboard::HollowRenderSequenceConfig* a1, ::MoleMole::HollowChessboard::HollowEntity* a2, ::Enum_3_BCEAF20494F55723 a3)
	{
		return ((::Class_1_ADD6877A1FCC4AE7*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowRenderSequenceConfig*, ::MoleMole::HollowChessboard::HollowEntity*, ::Enum_3_BCEAF20494F55723))((::PBYTE)hIl2Cpp + CLASS_1_788268E119852374_METHOD_1_4B80024D25A5763A_OFFSET))(this, a1, a2, a3);
	}
};
