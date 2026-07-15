#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_326AB3CF86F66189_1_METHOD_3_07947D5C71D40FC8_OFFSET UNITYSDK_OFFSET(0x1B5028A0)
#define CLASS_3_326AB3CF86F66189_1_METHOD_3_BFEE9074BE72CF8D_OFFSET UNITYSDK_OFFSET(0x1B502860)
#define CLASS_3_326AB3CF86F66189_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B502890)

inline static constexpr unsigned int Class_3_326AB3CF86F66189_1_TypeDefinitionIndex = 20661;

class Class_3_326AB3CF86F66189_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_326AB3CF86F66189_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_BFEE9074BE72CF8D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_326AB3CF86F66189_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_326AB3CF86F66189_1*&))((::PBYTE)hIl2Cpp + CLASS_3_326AB3CF86F66189_1_METHOD_3_BFEE9074BE72CF8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_07947D5C71D40FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_326AB3CF86F66189_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_326AB3CF86F66189_1*))((::PBYTE)hIl2Cpp + CLASS_3_326AB3CF86F66189_1_METHOD_3_07947D5C71D40FC8_OFFSET))(a1, a2);
	}
};
