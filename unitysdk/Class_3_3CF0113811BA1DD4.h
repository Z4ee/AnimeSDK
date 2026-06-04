#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_3CF0113811BA1DD4_METHOD_3_92AC418AB3CED05A_OFFSET UNITYSDK_OFFSET(0x19198310)
#define CLASS_3_3CF0113811BA1DD4_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x19198290)
#define CLASS_3_3CF0113811BA1DD4__CTOR_OFFSET UNITYSDK_OFFSET(0x191982E0)

inline static constexpr unsigned int Class_3_3CF0113811BA1DD4_TypeDefinitionIndex = 20249;

class Class_3_3CF0113811BA1DD4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::Il2CppArray<::System::String*>* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF0113811BA1DD4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3CF0113811BA1DD4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3CF0113811BA1DD4*&))((::PBYTE)hIl2Cpp + CLASS_3_3CF0113811BA1DD4_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92AC418AB3CED05A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3CF0113811BA1DD4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3CF0113811BA1DD4*))((::PBYTE)hIl2Cpp + CLASS_3_3CF0113811BA1DD4_METHOD_3_92AC418AB3CED05A_OFFSET))(a1, a2);
	}
};
