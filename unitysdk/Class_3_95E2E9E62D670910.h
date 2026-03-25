#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_0D6DCA0BBF51AD7A;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_95E2E9E62D670910_METHOD_3_92AC418AB3CED05A_OFFSET UNITYSDK_OFFSET(0x16D66050)
#define CLASS_3_95E2E9E62D670910_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x16D65FC0)
#define CLASS_3_95E2E9E62D670910__CTOR_OFFSET UNITYSDK_OFFSET(0x16D66020)

inline static constexpr unsigned int Class_3_95E2E9E62D670910_TypeDefinitionIndex = 21069;

class Class_3_95E2E9E62D670910 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x18
	::Class_2_0D6DCA0BBF51AD7A* Field_3_0; // 0x20
	::System::Single Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95E2E9E62D670910__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_95E2E9E62D670910*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_95E2E9E62D670910*&))((::PBYTE)hIl2Cpp + CLASS_3_95E2E9E62D670910_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92AC418AB3CED05A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_95E2E9E62D670910* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_95E2E9E62D670910*))((::PBYTE)hIl2Cpp + CLASS_3_95E2E9E62D670910_METHOD_3_92AC418AB3CED05A_OFFSET))(a1, a2);
	}
};
