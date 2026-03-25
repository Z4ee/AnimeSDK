#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_E7A54F49C408A228_METHOD_3_705C181AFDCF5689_OFFSET UNITYSDK_OFFSET(0x16DC6D40)
#define CLASS_3_E7A54F49C408A228_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x16DC6CB0)
#define CLASS_3_E7A54F49C408A228__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC6D10)

inline static constexpr unsigned int Class_3_E7A54F49C408A228_TypeDefinitionIndex = 20914;

class Class_3_E7A54F49C408A228 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean Field_3_1; // 0x18
	::System::Boolean Field_3_2; // 0x19
	::System::Boolean Field_3_4; // 0x1A
	::System::Boolean Field_3_3; // 0x1B
	::System::Boolean Field_3_0; // 0x1C
	::System::Single Field_3_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7A54F49C408A228__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E7A54F49C408A228*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E7A54F49C408A228*&))((::PBYTE)hIl2Cpp + CLASS_3_E7A54F49C408A228_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_705C181AFDCF5689(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E7A54F49C408A228* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E7A54F49C408A228*))((::PBYTE)hIl2Cpp + CLASS_3_E7A54F49C408A228_METHOD_3_705C181AFDCF5689_OFFSET))(a1, a2);
	}
};
