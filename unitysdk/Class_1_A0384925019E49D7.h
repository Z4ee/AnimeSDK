#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarServantRowWrap; }

#define CLASS_1_A0384925019E49D7_METHOD_1_654FEBAB05021CA0_OFFSET UNITYSDK_OFFSET(0x1138AD30)

inline static constexpr unsigned int Class_1_A0384925019E49D7_TypeDefinitionIndex = 50910;

class Class_1_A0384925019E49D7 : public ::System::Object
{
public:
	static ::RPG::GameCore::IAvatarServantRowWrap* Method_1_654FEBAB05021CA0(::Struct_2_90E529DB4DCB014F a1)
	{
		return ((::RPG::GameCore::IAvatarServantRowWrap*(*)(::Struct_2_90E529DB4DCB014F))((::PBYTE)hIl2Cpp + CLASS_1_A0384925019E49D7_METHOD_1_654FEBAB05021CA0_OFFSET))(a1);
	}
};
