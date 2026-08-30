#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_22F2C11890A26E37;
class Class_2_A99F83DAD2431A0F;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_BE5AFEF4939F3D38_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1D5D99D0)
#define CLASS_3_BE5AFEF4939F3D38_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1D5D9A20)
#define CLASS_3_BE5AFEF4939F3D38__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D9A10)

inline static constexpr unsigned int Class_3_BE5AFEF4939F3D38_TypeDefinitionIndex = 22613;

class Class_3_BE5AFEF4939F3D38 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* GJFJDHNLFFP; // 0x18
	::Class_2_A99F83DAD2431A0F* GCFLIIPMBJK; // 0x20
	::Class_2_22F2C11890A26E37* LJOMJKINJPG; // 0x28
	::System::Single CIBJGHGKPMI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE5AFEF4939F3D38__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BE5AFEF4939F3D38*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BE5AFEF4939F3D38*&))((::PBYTE)hIl2Cpp + CLASS_3_BE5AFEF4939F3D38_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BE5AFEF4939F3D38* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BE5AFEF4939F3D38*))((::PBYTE)hIl2Cpp + CLASS_3_BE5AFEF4939F3D38_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
