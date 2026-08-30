#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_2743E377166CF934_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1DAD24E0)
#define CLASS_3_2743E377166CF934_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x1DAD2520)
#define CLASS_3_2743E377166CF934__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD2510)

inline static constexpr unsigned int Class_3_2743E377166CF934_TypeDefinitionIndex = 21231;

class Class_3_2743E377166CF934 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* KCFDJIGEJCF; // 0x18
	::RPG::GameCore::TargetEvaluator* GCBNEHBJBPH; // 0x20
	::RPG::GameCore::DynamicString* ODMPMJCAHPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2743E377166CF934__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2743E377166CF934*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2743E377166CF934*&))((::PBYTE)hIl2Cpp + CLASS_3_2743E377166CF934_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2743E377166CF934* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2743E377166CF934*))((::PBYTE)hIl2Cpp + CLASS_3_2743E377166CF934_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
