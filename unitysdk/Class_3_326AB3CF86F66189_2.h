#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_326AB3CF86F66189_2_METHOD_3_07947D5C71D40FC8_OFFSET UNITYSDK_OFFSET(0x1C7A4DD0)
#define CLASS_3_326AB3CF86F66189_2_METHOD_3_BFEE9074BE72CF8D_OFFSET UNITYSDK_OFFSET(0x1C7A4D90)
#define CLASS_3_326AB3CF86F66189_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7A4DC0)

inline static constexpr unsigned int Class_3_326AB3CF86F66189_2_TypeDefinitionIndex = 22361;

class Class_3_326AB3CF86F66189_2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* PPBNKKKIIIN; // 0x18
	::RPG::GameCore::DynamicFloat* EIMIIHEDKFM; // 0x20
	::System::Boolean MFIBFJPLCOG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_326AB3CF86F66189_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_BFEE9074BE72CF8D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_326AB3CF86F66189_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_326AB3CF86F66189_2*&))((::PBYTE)hIl2Cpp + CLASS_3_326AB3CF86F66189_2_METHOD_3_BFEE9074BE72CF8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_07947D5C71D40FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_326AB3CF86F66189_2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_326AB3CF86F66189_2*))((::PBYTE)hIl2Cpp + CLASS_3_326AB3CF86F66189_2_METHOD_3_07947D5C71D40FC8_OFFSET))(a1, a2);
	}
};
