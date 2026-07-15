#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_D21159AFA7765AC6_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x1B141C70)
#define CLASS_3_D21159AFA7765AC6_METHOD_3_825AC3CA23639A85_OFFSET UNITYSDK_OFFSET(0x1B141CB0)
#define CLASS_3_D21159AFA7765AC6__CTOR_OFFSET UNITYSDK_OFFSET(0x1B141CA0)

inline static constexpr unsigned int Class_3_D21159AFA7765AC6_TypeDefinitionIndex = 21348;

class Class_3_D21159AFA7765AC6 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::DynamicString*>* Field_3_0; // 0x18
	::RPG::GameCore::DynamicString* Field_3_1; // 0x20
	::RPG::GameCore::DynamicString* Field_3_2; // 0x28
	::RPG::GameCore::DynamicString* Field_3_3; // 0x30

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
