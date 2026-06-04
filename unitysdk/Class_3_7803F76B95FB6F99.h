#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_7803F76B95FB6F99_METHOD_3_4160F02640B2F8A6_OFFSET UNITYSDK_OFFSET(0x192B7BD0)
#define CLASS_3_7803F76B95FB6F99_METHOD_3_825AC3CA23639A85_OFFSET UNITYSDK_OFFSET(0x192B7C50)
#define CLASS_3_7803F76B95FB6F99__CTOR_OFFSET UNITYSDK_OFFSET(0x192B7C20)

inline static constexpr unsigned int Class_3_7803F76B95FB6F99_TypeDefinitionIndex = 9884;

class Class_3_7803F76B95FB6F99 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7803F76B95FB6F99__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_4160F02640B2F8A6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7803F76B95FB6F99*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7803F76B95FB6F99*&))((::PBYTE)hIl2Cpp + CLASS_3_7803F76B95FB6F99_METHOD_3_4160F02640B2F8A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_825AC3CA23639A85(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7803F76B95FB6F99* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7803F76B95FB6F99*))((::PBYTE)hIl2Cpp + CLASS_3_7803F76B95FB6F99_METHOD_3_825AC3CA23639A85_OFFSET))(a1, a2);
	}
};
