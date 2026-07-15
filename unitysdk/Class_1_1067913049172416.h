#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarServantRowWrap; }

#define CLASS_1_1067913049172416_METHOD_1_1992FF48DA07BCFB_OFFSET UNITYSDK_OFFSET(0x13A4D600)

inline static constexpr unsigned int Class_1_1067913049172416_TypeDefinitionIndex = 59880;

class Class_1_1067913049172416 : public ::System::Object
{
public:
	static ::RPG::GameCore::IAvatarServantRowWrap* Method_1_1992FF48DA07BCFB(::Struct_2_F1C4ECC5EFDCA1EF_2 a1)
	{
		return ((::RPG::GameCore::IAvatarServantRowWrap*(*)(::Struct_2_F1C4ECC5EFDCA1EF_2))((::PBYTE)hIl2Cpp + CLASS_1_1067913049172416_METHOD_1_1992FF48DA07BCFB_OFFSET))(a1);
	}
};
