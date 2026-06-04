#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_BFB37C653626F70F_METHOD_1_0131B28D046A5D7C_OFFSET UNITYSDK_OFFSET(0x19771FB0)
#define CLASS_1_BFB37C653626F70F__CTOR_OFFSET UNITYSDK_OFFSET(0x1978D470)

inline static constexpr unsigned int Class_1_BFB37C653626F70F_TypeDefinitionIndex = 12311;

class Class_1_BFB37C653626F70F : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::RPG::GameCore::ChallengeGroupType Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFB37C653626F70F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0131B28D046A5D7C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_BFB37C653626F70F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_BFB37C653626F70F*&))((::PBYTE)hIl2Cpp + CLASS_1_BFB37C653626F70F_METHOD_1_0131B28D046A5D7C_OFFSET))(a1, a2);
	}
};
