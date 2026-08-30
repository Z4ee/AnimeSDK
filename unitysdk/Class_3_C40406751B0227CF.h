#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_C40406751B0227CF_METHOD_3_07947D5C71D40FC8_OFFSET UNITYSDK_OFFSET(0x1CC2BD70)
#define CLASS_3_C40406751B0227CF_METHOD_3_BFEE9074BE72CF8D_OFFSET UNITYSDK_OFFSET(0x1CC2BD30)
#define CLASS_3_C40406751B0227CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2BD60)

inline static constexpr unsigned int Class_3_C40406751B0227CF_TypeDefinitionIndex = 20002;

class Class_3_C40406751B0227CF : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean DLPKOCANCMM; // 0x18
	::System::Boolean EKGDOELGLFK; // 0x19
	::System::Single CKBMJFBJOFH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C40406751B0227CF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_BFEE9074BE72CF8D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C40406751B0227CF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C40406751B0227CF*&))((::PBYTE)hIl2Cpp + CLASS_3_C40406751B0227CF_METHOD_3_BFEE9074BE72CF8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_07947D5C71D40FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C40406751B0227CF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C40406751B0227CF*))((::PBYTE)hIl2Cpp + CLASS_3_C40406751B0227CF_METHOD_3_07947D5C71D40FC8_OFFSET))(a1, a2);
	}
};
