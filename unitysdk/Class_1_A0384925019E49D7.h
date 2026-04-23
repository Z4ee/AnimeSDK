#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_61449724F4025E5E.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarServantRowWrap; }

#define CLASS_1_A0384925019E49D7_METHOD_1_654FEBAB05021CA0_OFFSET UNITYSDK_OFFSET(0x9E1E220)

inline static constexpr unsigned int Class_1_A0384925019E49D7_TypeDefinitionIndex = 57790;

class Class_1_A0384925019E49D7 : public ::System::Object
{
public:
	static ::RPG::GameCore::IAvatarServantRowWrap* Method_1_654FEBAB05021CA0(::Struct_2_61449724F4025E5E a1)
	{
		return ((::RPG::GameCore::IAvatarServantRowWrap*(*)(::Struct_2_61449724F4025E5E))((::PBYTE)hIl2Cpp + CLASS_1_A0384925019E49D7_METHOD_1_654FEBAB05021CA0_OFFSET))(a1);
	}
};
