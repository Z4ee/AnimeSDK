#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CB7E78BA68D9659D_1_METHOD_1_00D67D9ADFB3DDA2_OFFSET UNITYSDK_OFFSET(0x175C4680)

inline static constexpr unsigned int Class_1_CB7E78BA68D9659D_1_TypeDefinitionIndex = 72628;

class Class_1_CB7E78BA68D9659D_1 : public ::System::Object
{
public:
	static ::System::String* Method_1_00D67D9ADFB3DDA2(::MoleMole::Config::DamageHitType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::DamageHitType))((::PBYTE)hIl2Cpp + CLASS_1_CB7E78BA68D9659D_1_METHOD_1_00D67D9ADFB3DDA2_OFFSET))(a1);
	}
};
