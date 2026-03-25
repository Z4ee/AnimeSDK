#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_111F36CF5247BACE_3_METHOD_3_59E52142EB73E32E_OFFSET UNITYSDK_OFFSET(0x16C6AEB0)
#define CLASS_3_111F36CF5247BACE_3_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x16C6AF30)
#define CLASS_3_111F36CF5247BACE_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6AF00)

inline static constexpr unsigned int Class_3_111F36CF5247BACE_3_TypeDefinitionIndex = 20343;

class Class_3_111F36CF5247BACE_3 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_111F36CF5247BACE_3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_59E52142EB73E32E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_111F36CF5247BACE_3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_111F36CF5247BACE_3*&))((::PBYTE)hIl2Cpp + CLASS_3_111F36CF5247BACE_3_METHOD_3_59E52142EB73E32E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_111F36CF5247BACE_3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_111F36CF5247BACE_3*))((::PBYTE)hIl2Cpp + CLASS_3_111F36CF5247BACE_3_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
