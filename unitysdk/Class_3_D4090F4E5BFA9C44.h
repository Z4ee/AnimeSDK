#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_D4090F4E5BFA9C44_METHOD_3_4160F02640B2F8A6_OFFSET UNITYSDK_OFFSET(0x197811B0)
#define CLASS_3_D4090F4E5BFA9C44_METHOD_3_825AC3CA23639A85_OFFSET UNITYSDK_OFFSET(0x19781230)
#define CLASS_3_D4090F4E5BFA9C44__CTOR_OFFSET UNITYSDK_OFFSET(0x19781200)

inline static constexpr unsigned int Class_3_D4090F4E5BFA9C44_TypeDefinitionIndex = 9876;

class Class_3_D4090F4E5BFA9C44 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4090F4E5BFA9C44__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_4160F02640B2F8A6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D4090F4E5BFA9C44*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D4090F4E5BFA9C44*&))((::PBYTE)hIl2Cpp + CLASS_3_D4090F4E5BFA9C44_METHOD_3_4160F02640B2F8A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_825AC3CA23639A85(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D4090F4E5BFA9C44* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D4090F4E5BFA9C44*))((::PBYTE)hIl2Cpp + CLASS_3_D4090F4E5BFA9C44_METHOD_3_825AC3CA23639A85_OFFSET))(a1, a2);
	}
};
