#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define CLASS_3_67940806B8DF2797_METHOD_3_4160F02640B2F8A6_OFFSET UNITYSDK_OFFSET(0x1897C270)
#define CLASS_3_67940806B8DF2797_METHOD_3_825AC3CA23639A85_OFFSET UNITYSDK_OFFSET(0x1897C2F0)
#define CLASS_3_67940806B8DF2797__CTOR_OFFSET UNITYSDK_OFFSET(0x1897C2C0)

inline static constexpr unsigned int Class_3_67940806B8DF2797_TypeDefinitionIndex = 23227;

class Class_3_67940806B8DF2797 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::SkillType>* Field_3_1; // 0x18
	::Il2CppArray<::System::String*>* Field_3_0; // 0x20
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67940806B8DF2797__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_4160F02640B2F8A6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_67940806B8DF2797*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_67940806B8DF2797*&))((::PBYTE)hIl2Cpp + CLASS_3_67940806B8DF2797_METHOD_3_4160F02640B2F8A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_825AC3CA23639A85(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_67940806B8DF2797* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_67940806B8DF2797*))((::PBYTE)hIl2Cpp + CLASS_3_67940806B8DF2797_METHOD_3_825AC3CA23639A85_OFFSET))(a1, a2);
	}
};
