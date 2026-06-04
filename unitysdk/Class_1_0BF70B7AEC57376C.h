#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UseSkillErrorCode.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class DynamicToastConfig; }

#define CLASS_1_0BF70B7AEC57376C_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13B61CF0)
#define CLASS_1_0BF70B7AEC57376C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B61D70)

inline static constexpr unsigned int Class_1_0BF70B7AEC57376C_TypeDefinitionIndex = 53895;

class Class_1_0BF70B7AEC57376C : public ::System::Object
{
public:
	::Class_1_5F51D4049EA87B7B* Field_1_0; // 0x10
	::RPG::GameCore::DynamicToastConfig* Field_1_1; // 0x18
	::RPG::GameCore::UseSkillErrorCode Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF70B7AEC57376C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF70B7AEC57376C_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
