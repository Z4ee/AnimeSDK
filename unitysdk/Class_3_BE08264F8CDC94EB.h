#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_BE08264F8CDC94EB_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x16D7B870)
#define CLASS_3_BE08264F8CDC94EB_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x16D7B7F0)
#define CLASS_3_BE08264F8CDC94EB__CTOR_OFFSET UNITYSDK_OFFSET(0x16D7B840)

inline static constexpr unsigned int Class_3_BE08264F8CDC94EB_TypeDefinitionIndex = 20521;

class Class_3_BE08264F8CDC94EB : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE08264F8CDC94EB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BE08264F8CDC94EB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BE08264F8CDC94EB*&))((::PBYTE)hIl2Cpp + CLASS_3_BE08264F8CDC94EB_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BE08264F8CDC94EB* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BE08264F8CDC94EB*))((::PBYTE)hIl2Cpp + CLASS_3_BE08264F8CDC94EB_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};
