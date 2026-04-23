#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimSurfacePoint; }

#define CLASS_1_F384E84DCC9C5633_METHOD_1_9A6EA76BC220EE72_OFFSET UNITYSDK_OFFSET(0x18053A60)

inline static constexpr unsigned int Class_1_F384E84DCC9C5633_TypeDefinitionIndex = 39405;

class Class_1_F384E84DCC9C5633 : public ::System::Object
{
public:
	static ::Struct_2_EAC1BB0F093534A5 Method_1_9A6EA76BC220EE72(::RPG::GameCore::FiveDimSurfacePoint* a1)
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::RPG::GameCore::FiveDimSurfacePoint*))((::PBYTE)hIl2Cpp + CLASS_1_F384E84DCC9C5633_METHOD_1_9A6EA76BC220EE72_OFFSET))(a1);
	}
};
