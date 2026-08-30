#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarServantRowWrap; }

#define CLASS_1_A0384925019E49D7_METHOD_1_654FEBAB05021CA0_OFFSET UNITYSDK_OFFSET(0xBCD0C40)

inline static constexpr unsigned int Class_1_A0384925019E49D7_TypeDefinitionIndex = 62726;

class Class_1_A0384925019E49D7 : public ::System::Object
{
public:
	static ::RPG::GameCore::IAvatarServantRowWrap* Method_1_654FEBAB05021CA0(::Struct_2_F1C4ECC5EFDCA1EF_2 a1)
	{
		return ((::RPG::GameCore::IAvatarServantRowWrap*(*)(::Struct_2_F1C4ECC5EFDCA1EF_2))((::PBYTE)hIl2Cpp + CLASS_1_A0384925019E49D7_METHOD_1_654FEBAB05021CA0_OFFSET))(a1);
	}
};
