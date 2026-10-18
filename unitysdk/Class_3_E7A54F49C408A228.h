#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_E7A54F49C408A228_METHOD_3_705C181AFDCF5689_OFFSET UNITYSDK_OFFSET(0x1D1B53C0)
#define CLASS_3_E7A54F49C408A228_METHOD_3_EF8BBA88A03D92A8_OFFSET UNITYSDK_OFFSET(0x1D1B5370)
#define CLASS_3_E7A54F49C408A228__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B53B0)

inline static constexpr unsigned int Class_3_E7A54F49C408A228_TypeDefinitionIndex = 22727;

class Class_3_E7A54F49C408A228 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean GAFJFMNACDO; // 0x18
	::System::Boolean KLCKBECJHFM; // 0x19
	::System::Boolean EADOPLLMICI; // 0x1A
	::System::Boolean IGFNFLBGLEP; // 0x1B
	::System::Boolean PGLPJMGJNMO; // 0x1C
	::System::Single NEMDKBKDFDN; // 0x20

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
