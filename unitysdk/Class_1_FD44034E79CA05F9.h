#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterSpecialIdleEntry; }

#define CLASS_1_FD44034E79CA05F9_METHOD_1_5BA2558DFC98379B_OFFSET UNITYSDK_OFFSET(0x17691C20)
#define CLASS_1_FD44034E79CA05F9_METHOD_1_CF2915206D64F090_OFFSET UNITYSDK_OFFSET(0x17691A60)

inline static constexpr unsigned int Class_1_FD44034E79CA05F9_TypeDefinitionIndex = 74335;

class Class_1_FD44034E79CA05F9 : public ::System::Object
{
public:
	static ::System::Void Method_1_CF2915206D64F090(::MoleMole::EntityHandle a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD44034E79CA05F9_METHOD_1_CF2915206D64F090_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5BA2558DFC98379B(::MoleMole::EntityHandle a1, ::MoleMole::MonsterSpecialIdleEntry* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::MoleMole::MonsterSpecialIdleEntry*))((::PBYTE)hIl2Cpp + CLASS_1_FD44034E79CA05F9_METHOD_1_5BA2558DFC98379B_OFFSET))(a1, a2);
	}
};
