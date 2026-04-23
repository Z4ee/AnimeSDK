#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8F7D3BAFD8C03B69.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_0_16E4307DCC419505_803;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_2_42F70F50178E1BCA_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x11E85BC0)
#define CLASS_2_42F70F50178E1BCA__CTOR_OFFSET UNITYSDK_OFFSET(0x11E85BB0)

inline static constexpr unsigned int Class_2_42F70F50178E1BCA_TypeDefinitionIndex = 61796;

class Class_2_42F70F50178E1BCA : public ::Class_1_8F7D3BAFD8C03B69
{
public:
	::RPG::Client::IRogueMiracleInfo* Field_2_0; // 0x20
	::Class_0_16E4307DCC419505_803* Field_2_1; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::IRogueMiracleInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::IRogueMiracleInfo*))((::PBYTE)hIl2Cpp + CLASS_2_42F70F50178E1BCA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_803* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_803*))((::PBYTE)hIl2Cpp + CLASS_2_42F70F50178E1BCA_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}
};
