#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesPosition; }

#define CLASS_3_C53C3A88959D9B6E_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0xBBE3F50)
#define CLASS_3_C53C3A88959D9B6E_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0xBBE3F90)
#define CLASS_3_C53C3A88959D9B6E__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE3F80)

inline static constexpr unsigned int Class_3_C53C3A88959D9B6E_TypeDefinitionIndex = 23457;

class Class_3_C53C3A88959D9B6E : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesPosition* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C53C3A88959D9B6E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C53C3A88959D9B6E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C53C3A88959D9B6E*&))((::PBYTE)hIl2Cpp + CLASS_3_C53C3A88959D9B6E_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C53C3A88959D9B6E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C53C3A88959D9B6E*))((::PBYTE)hIl2Cpp + CLASS_3_C53C3A88959D9B6E_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
