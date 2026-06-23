#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0D6706375CDAAE8C.h"
#include "unitysdk/Share/EItemType.h"

class Class_2_208CC9941471731A_1093;
class Class_2_208CC9941471731A_131;

#define CLASS_2_EE96EC8698C91490_METHOD_2_2DEAC7321A00774E_OFFSET UNITYSDK_OFFSET(0x15C86340)
#define CLASS_2_EE96EC8698C91490__CTOR_OFFSET UNITYSDK_OFFSET(0x15C86350)

inline static constexpr unsigned int Class_2_EE96EC8698C91490_TypeDefinitionIndex = 68774;

class Class_2_EE96EC8698C91490 : public ::Class_1_0D6706375CDAAE8C
{
public:
	::Class_2_208CC9941471731A_1093* Field_2_0; // 0x70

	::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_131* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::Class_2_208CC9941471731A_131*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EE96EC8698C91490__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Share::EItemType Method_2_2DEAC7321A00774E()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE96EC8698C91490_METHOD_2_2DEAC7321A00774E_OFFSET))(this);
	}
};
