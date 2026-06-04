#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_48EBA335142ABA61_METHOD_3_2DFC332AF3EA3B47_OFFSET UNITYSDK_OFFSET(0x18F5BA90)
#define CLASS_3_48EBA335142ABA61_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x18F5BB10)
#define CLASS_3_48EBA335142ABA61__CTOR_OFFSET UNITYSDK_OFFSET(0x18F5BAE0)

inline static constexpr unsigned int Class_3_48EBA335142ABA61_TypeDefinitionIndex = 22080;

class Class_3_48EBA335142ABA61 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::Il2CppArray<::System::String*>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48EBA335142ABA61__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2DFC332AF3EA3B47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_48EBA335142ABA61*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_48EBA335142ABA61*&))((::PBYTE)hIl2Cpp + CLASS_3_48EBA335142ABA61_METHOD_3_2DFC332AF3EA3B47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_48EBA335142ABA61* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_48EBA335142ABA61*))((::PBYTE)hIl2Cpp + CLASS_3_48EBA335142ABA61_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
