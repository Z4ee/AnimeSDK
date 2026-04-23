#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_E53DD2CB4E3DF392_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x182483D0)
#define CLASS_3_E53DD2CB4E3DF392_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x18248350)
#define CLASS_3_E53DD2CB4E3DF392__CTOR_OFFSET UNITYSDK_OFFSET(0x182483A0)

inline static constexpr unsigned int Class_3_E53DD2CB4E3DF392_TypeDefinitionIndex = 23157;

class Class_3_E53DD2CB4E3DF392 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x18
	::RPG::GameCore::RtLifeBindingConfig* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E53DD2CB4E3DF392__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E53DD2CB4E3DF392*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E53DD2CB4E3DF392*&))((::PBYTE)hIl2Cpp + CLASS_3_E53DD2CB4E3DF392_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E53DD2CB4E3DF392* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E53DD2CB4E3DF392*))((::PBYTE)hIl2Cpp + CLASS_3_E53DD2CB4E3DF392_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
