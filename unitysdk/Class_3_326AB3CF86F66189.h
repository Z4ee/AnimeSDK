#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_326AB3CF86F66189_METHOD_3_07947D5C71D40FC8_OFFSET UNITYSDK_OFFSET(0x16D9D110)
#define CLASS_3_326AB3CF86F66189_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x16D9D090)
#define CLASS_3_326AB3CF86F66189__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9D0E0)

inline static constexpr unsigned int Class_3_326AB3CF86F66189_TypeDefinitionIndex = 19668;

class Class_3_326AB3CF86F66189 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_326AB3CF86F66189__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_326AB3CF86F66189*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_326AB3CF86F66189*&))((::PBYTE)hIl2Cpp + CLASS_3_326AB3CF86F66189_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_07947D5C71D40FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_326AB3CF86F66189* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_326AB3CF86F66189*))((::PBYTE)hIl2Cpp + CLASS_3_326AB3CF86F66189_METHOD_3_07947D5C71D40FC8_OFFSET))(a1, a2);
	}
};
