#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenStatGradeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_4B6B1EA474B8E7B0_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x17734D80)
#define CLASS_1_4B6B1EA474B8E7B0__CTOR_OFFSET UNITYSDK_OFFSET(0x17734EB0)

inline static constexpr unsigned int Class_1_4B6B1EA474B8E7B0_TypeDefinitionIndex = 10823;

class Class_1_4B6B1EA474B8E7B0 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::RPG::GameCore::HipplenStatGradeType Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B6B1EA474B8E7B0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_4B6B1EA474B8E7B0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_4B6B1EA474B8E7B0*&))((::PBYTE)hIl2Cpp + CLASS_1_4B6B1EA474B8E7B0_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};
