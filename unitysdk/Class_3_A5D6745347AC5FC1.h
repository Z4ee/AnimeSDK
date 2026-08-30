#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_A5D6745347AC5FC1_METHOD_3_77BC119BD93E2767_OFFSET UNITYSDK_OFFSET(0x1C7241C0)
#define CLASS_3_A5D6745347AC5FC1_METHOD_3_92AC418AB3CED05A_OFFSET UNITYSDK_OFFSET(0x1C724200)
#define CLASS_3_A5D6745347AC5FC1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7241F0)

inline static constexpr unsigned int Class_3_A5D6745347AC5FC1_TypeDefinitionIndex = 10214;

class Class_3_A5D6745347AC5FC1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean ENJBCDBBPFN; // 0x18
	::System::UInt32 LCLPEGNKIBF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5D6745347AC5FC1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_77BC119BD93E2767(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A5D6745347AC5FC1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A5D6745347AC5FC1*&))((::PBYTE)hIl2Cpp + CLASS_3_A5D6745347AC5FC1_METHOD_3_77BC119BD93E2767_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92AC418AB3CED05A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A5D6745347AC5FC1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A5D6745347AC5FC1*))((::PBYTE)hIl2Cpp + CLASS_3_A5D6745347AC5FC1_METHOD_3_92AC418AB3CED05A_OFFSET))(a1, a2);
	}
};
