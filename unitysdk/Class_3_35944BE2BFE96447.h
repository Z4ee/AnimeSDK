#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_35944BE2BFE96447_METHOD_3_77BC119BD93E2767_OFFSET UNITYSDK_OFFSET(0x1CCFF570)
#define CLASS_3_35944BE2BFE96447_METHOD_3_92AC418AB3CED05A_OFFSET UNITYSDK_OFFSET(0x1CCFF5B0)
#define CLASS_3_35944BE2BFE96447__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFF5A0)

inline static constexpr unsigned int Class_3_35944BE2BFE96447_TypeDefinitionIndex = 19716;

class Class_3_35944BE2BFE96447 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Int32 AGFMMBCEPAO; // 0x18
	::System::Int32 GFOFKJMIGJJ; // 0x1C
	::System::Boolean CDIFPLFHIED; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_35944BE2BFE96447__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_77BC119BD93E2767(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_35944BE2BFE96447*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_35944BE2BFE96447*&))((::PBYTE)hIl2Cpp + CLASS_3_35944BE2BFE96447_METHOD_3_77BC119BD93E2767_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92AC418AB3CED05A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_35944BE2BFE96447* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_35944BE2BFE96447*))((::PBYTE)hIl2Cpp + CLASS_3_35944BE2BFE96447_METHOD_3_92AC418AB3CED05A_OFFSET))(a1, a2);
	}
};
