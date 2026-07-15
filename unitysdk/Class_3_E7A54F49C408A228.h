#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_E7A54F49C408A228_METHOD_3_705C181AFDCF5689_OFFSET UNITYSDK_OFFSET(0x1941E860)
#define CLASS_3_E7A54F49C408A228_METHOD_3_EF8BBA88A03D92A8_OFFSET UNITYSDK_OFFSET(0x1941E810)
#define CLASS_3_E7A54F49C408A228__CTOR_OFFSET UNITYSDK_OFFSET(0x1941E850)

inline static constexpr unsigned int Class_3_E7A54F49C408A228_TypeDefinitionIndex = 21908;

class Class_3_E7A54F49C408A228 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x19
	::System::Boolean Field_3_2; // 0x1A
	::System::Boolean Field_3_3; // 0x1B
	::System::Boolean Field_3_4; // 0x1C
	::System::Single Field_3_5; // 0x20

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
