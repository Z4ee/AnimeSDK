#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_5ABA18BB3DF738C4_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1CBEAA60)
#define CLASS_3_5ABA18BB3DF738C4_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1CBEABC0)
#define CLASS_3_5ABA18BB3DF738C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEABB0)

inline static constexpr unsigned int Class_3_5ABA18BB3DF738C4_TypeDefinitionIndex = 21306;

class Class_3_5ABA18BB3DF738C4 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Single CKIFAIJPDEN; // 0x18
	::System::Boolean ICJMOAILNCH; // 0x1C
	::System::UInt32 PHFMCACHFIJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5ABA18BB3DF738C4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5ABA18BB3DF738C4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5ABA18BB3DF738C4*&))((::PBYTE)hIl2Cpp + CLASS_3_5ABA18BB3DF738C4_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5ABA18BB3DF738C4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5ABA18BB3DF738C4*))((::PBYTE)hIl2Cpp + CLASS_3_5ABA18BB3DF738C4_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
