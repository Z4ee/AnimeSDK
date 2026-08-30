#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_2AEBF4D8F22111EA_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x16F234F0)
#define CLASS_3_2AEBF4D8F22111EA_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x16F23530)
#define CLASS_3_2AEBF4D8F22111EA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F23520)

inline static constexpr unsigned int Class_3_2AEBF4D8F22111EA_TypeDefinitionIndex = 22005;

class Class_3_2AEBF4D8F22111EA : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* GEKKHNPKLIB; // 0x18
	::Il2CppArray<::System::String*>* EBBDLBHHPGB; // 0x20
	::System::Boolean GHPBDLBCLFE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2AEBF4D8F22111EA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2AEBF4D8F22111EA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2AEBF4D8F22111EA*&))((::PBYTE)hIl2Cpp + CLASS_3_2AEBF4D8F22111EA_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2AEBF4D8F22111EA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2AEBF4D8F22111EA*))((::PBYTE)hIl2Cpp + CLASS_3_2AEBF4D8F22111EA_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
