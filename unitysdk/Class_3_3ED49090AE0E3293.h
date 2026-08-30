#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraFollowClampMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_3ED49090AE0E3293_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1CB6A480)
#define CLASS_3_3ED49090AE0E3293_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1CB6A4C0)
#define CLASS_3_3ED49090AE0E3293__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB6A4B0)

inline static constexpr unsigned int Class_3_3ED49090AE0E3293_TypeDefinitionIndex = 21202;

class Class_3_3ED49090AE0E3293 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* HCKELNILFPJ; // 0x18
	::System::Single JBBMBCMJBJM; // 0x20
	::System::Boolean HOPHHGMFDHD; // 0x24
	::RPG::GameCore::FiveDimCameraFollowClampMask HAPJILPJJGB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3ED49090AE0E3293__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3ED49090AE0E3293*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3ED49090AE0E3293*&))((::PBYTE)hIl2Cpp + CLASS_3_3ED49090AE0E3293_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3ED49090AE0E3293* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3ED49090AE0E3293*))((::PBYTE)hIl2Cpp + CLASS_3_3ED49090AE0E3293_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
