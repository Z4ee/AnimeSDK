#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_386;
class Class_1_C0BFEE1D316B82F5;

#define CLASS_1_BB505CFCA176BF03_METHOD_1_1FCC85A147E9D2FD_OFFSET UNITYSDK_OFFSET(0xC4E90A0)
#define CLASS_1_BB505CFCA176BF03_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xC4E9140)
#define CLASS_1_BB505CFCA176BF03__CTOR_OFFSET UNITYSDK_OFFSET(0xC4E9130)

inline static constexpr unsigned int Class_1_BB505CFCA176BF03_TypeDefinitionIndex = 45131;

class Class_1_BB505CFCA176BF03 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_386* Field_1_4; // 0x10
	::RPG::GameCore::FixPoint Field_1_2; // 0x18
	::System::UInt32 Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::RPG::GameCore::FixPoint Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB505CFCA176BF03__CTOR_OFFSET))(this);
	}

	::Class_1_BB505CFCA176BF03* Method_1_1FCC85A147E9D2FD()
	{
		return ((::Class_1_BB505CFCA176BF03*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB505CFCA176BF03_METHOD_1_1FCC85A147E9D2FD_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_C0BFEE1D316B82F5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C0BFEE1D316B82F5*))((::PBYTE)hIl2Cpp + CLASS_1_BB505CFCA176BF03_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
