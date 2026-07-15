#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_BAA2904334E372FE_METHOD_3_07947D5C71D40FC8_OFFSET UNITYSDK_OFFSET(0x103E5D20)
#define CLASS_3_BAA2904334E372FE_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x103E5C30)
#define CLASS_3_BAA2904334E372FE__CTOR_OFFSET UNITYSDK_OFFSET(0x103E5CC0)

inline static constexpr unsigned int Class_3_BAA2904334E372FE_TypeDefinitionIndex = 21350;

class Class_3_BAA2904334E372FE : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicString* Field_3_1; // 0x20
	::RPG::GameCore::DynamicString* Field_3_2; // 0x28
	::System::Boolean Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAA2904334E372FE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BAA2904334E372FE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BAA2904334E372FE*&))((::PBYTE)hIl2Cpp + CLASS_3_BAA2904334E372FE_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_07947D5C71D40FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BAA2904334E372FE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BAA2904334E372FE*))((::PBYTE)hIl2Cpp + CLASS_3_BAA2904334E372FE_METHOD_3_07947D5C71D40FC8_OFFSET))(a1, a2);
	}
};
