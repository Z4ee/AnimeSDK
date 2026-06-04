#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_7A8FB7EDAFC5C8F4_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x1927ED00)
#define CLASS_1_7A8FB7EDAFC5C8F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1927EE30)

inline static constexpr unsigned int Class_1_7A8FB7EDAFC5C8F4_TypeDefinitionIndex = 13692;

class Class_1_7A8FB7EDAFC5C8F4 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::RPG::GameCore::ELevelPerformanceType Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A8FB7EDAFC5C8F4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_7A8FB7EDAFC5C8F4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_7A8FB7EDAFC5C8F4*&))((::PBYTE)hIl2Cpp + CLASS_1_7A8FB7EDAFC5C8F4_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};
