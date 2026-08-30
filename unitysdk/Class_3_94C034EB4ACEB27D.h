#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_94C034EB4ACEB27D_METHOD_3_77BC119BD93E2767_OFFSET UNITYSDK_OFFSET(0x1CF3B630)
#define CLASS_3_94C034EB4ACEB27D_METHOD_3_92AC418AB3CED05A_OFFSET UNITYSDK_OFFSET(0x1CF3B670)
#define CLASS_3_94C034EB4ACEB27D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF3B660)

inline static constexpr unsigned int Class_3_94C034EB4ACEB27D_TypeDefinitionIndex = 21195;

class Class_3_94C034EB4ACEB27D : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* MMMJJJOGBBI; // 0x18
	::RPG::GameCore::DynamicString* ODMPMJCAHPN; // 0x20
	::System::Boolean GEOPPFCKACN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_94C034EB4ACEB27D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_77BC119BD93E2767(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_94C034EB4ACEB27D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_94C034EB4ACEB27D*&))((::PBYTE)hIl2Cpp + CLASS_3_94C034EB4ACEB27D_METHOD_3_77BC119BD93E2767_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92AC418AB3CED05A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_94C034EB4ACEB27D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_94C034EB4ACEB27D*))((::PBYTE)hIl2Cpp + CLASS_3_94C034EB4ACEB27D_METHOD_3_92AC418AB3CED05A_OFFSET))(a1, a2);
	}
};
