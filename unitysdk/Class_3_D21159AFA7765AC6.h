#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_D21159AFA7765AC6_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x1C8A96D0)
#define CLASS_3_D21159AFA7765AC6_METHOD_3_825AC3CA23639A85_OFFSET UNITYSDK_OFFSET(0x1C8A9710)
#define CLASS_3_D21159AFA7765AC6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A9700)

inline static constexpr unsigned int Class_3_D21159AFA7765AC6_TypeDefinitionIndex = 21909;

class Class_3_D21159AFA7765AC6 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* PKBDBFBPLEN; // 0x18
	::RPG::GameCore::DynamicString* BFLIFKBEOPJ; // 0x20
	::RPG::GameCore::DynamicString* LKDLEDLIANP; // 0x28
	::Il2CppArray<::RPG::GameCore::DynamicString*>* HNFMNLPOMNK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D21159AFA7765AC6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D21159AFA7765AC6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D21159AFA7765AC6*&))((::PBYTE)hIl2Cpp + CLASS_3_D21159AFA7765AC6_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_825AC3CA23639A85(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D21159AFA7765AC6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D21159AFA7765AC6*))((::PBYTE)hIl2Cpp + CLASS_3_D21159AFA7765AC6_METHOD_3_825AC3CA23639A85_OFFSET))(a1, a2);
	}
};
