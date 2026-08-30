#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_E7A54F49C408A228_METHOD_3_705C181AFDCF5689_OFFSET UNITYSDK_OFFSET(0x1B4FA140)
#define CLASS_3_E7A54F49C408A228_METHOD_3_EF8BBA88A03D92A8_OFFSET UNITYSDK_OFFSET(0x1B4FA0F0)
#define CLASS_3_E7A54F49C408A228__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FA130)

inline static constexpr unsigned int Class_3_E7A54F49C408A228_TypeDefinitionIndex = 22472;

class Class_3_E7A54F49C408A228 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean KLCKBECJHFM; // 0x18
	::System::Boolean PGLPJMGJNMO; // 0x19
	::System::Single NEMDKBKDFDN; // 0x1C
	::System::Boolean EADOPLLMICI; // 0x20
	::System::Boolean GAFJFMNACDO; // 0x21
	::System::Boolean IGFNFLBGLEP; // 0x22

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7A54F49C408A228__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_EF8BBA88A03D92A8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E7A54F49C408A228*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E7A54F49C408A228*&))((::PBYTE)hIl2Cpp + CLASS_3_E7A54F49C408A228_METHOD_3_EF8BBA88A03D92A8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_705C181AFDCF5689(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E7A54F49C408A228* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E7A54F49C408A228*))((::PBYTE)hIl2Cpp + CLASS_3_E7A54F49C408A228_METHOD_3_705C181AFDCF5689_OFFSET))(a1, a2);
	}
};
