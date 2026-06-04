#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_E17385498AE9F75C_METHOD_3_4160F02640B2F8A6_OFFSET UNITYSDK_OFFSET(0x19E8B8C0)
#define CLASS_3_E17385498AE9F75C_METHOD_3_825AC3CA23639A85_OFFSET UNITYSDK_OFFSET(0x19E8B940)
#define CLASS_3_E17385498AE9F75C__CTOR_OFFSET UNITYSDK_OFFSET(0x19E8B910)

inline static constexpr unsigned int Class_3_E17385498AE9F75C_TypeDefinitionIndex = 20933;

class Class_3_E17385498AE9F75C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::DynamicString*>* Field_3_1; // 0x20
	::RPG::GameCore::DynamicString* Field_3_2; // 0x28
	::RPG::GameCore::DynamicString* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E17385498AE9F75C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_4160F02640B2F8A6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E17385498AE9F75C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E17385498AE9F75C*&))((::PBYTE)hIl2Cpp + CLASS_3_E17385498AE9F75C_METHOD_3_4160F02640B2F8A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_825AC3CA23639A85(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E17385498AE9F75C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E17385498AE9F75C*))((::PBYTE)hIl2Cpp + CLASS_3_E17385498AE9F75C_METHOD_3_825AC3CA23639A85_OFFSET))(a1, a2);
	}
};
