#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_100.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_913.h"

class Class_0_16E4307DCC419505_7;
class Class_2_208CC9941471731A_477;

#define CLASS_2_D834A6D890CA2D26_METHOD_2_F4A9EB0302EE7715_OFFSET UNITYSDK_OFFSET(0x17406640)
#define CLASS_2_D834A6D890CA2D26__CTOR_OFFSET UNITYSDK_OFFSET(0x17406630)

inline static constexpr unsigned int Class_2_D834A6D890CA2D26_TypeDefinitionIndex = 13519;

class Class_2_D834A6D890CA2D26 : public ::Class_1_D9FAA3DCCFE14DB8_100
{
public:
	::Il2CppArray<::Class_2_208CC9941471731A_477*>* Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_913 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_913, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_D834A6D890CA2D26__CTOR_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_477*>* Method_2_F4A9EB0302EE7715()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_477*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D834A6D890CA2D26_METHOD_2_F4A9EB0302EE7715_OFFSET))(this);
	}
};
