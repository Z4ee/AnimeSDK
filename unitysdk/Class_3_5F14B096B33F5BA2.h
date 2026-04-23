#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_5F14B096B33F5BA2_METHOD_3_3AD4360E2346F7A3_OFFSET UNITYSDK_OFFSET(0x18374CA0)
#define CLASS_3_5F14B096B33F5BA2_METHOD_3_910CE6381099E090_OFFSET UNITYSDK_OFFSET(0x18374C20)
#define CLASS_3_5F14B096B33F5BA2__CTOR_OFFSET UNITYSDK_OFFSET(0x18374C70)

inline static constexpr unsigned int Class_3_5F14B096B33F5BA2_TypeDefinitionIndex = 10071;

class Class_3_5F14B096B33F5BA2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F14B096B33F5BA2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_910CE6381099E090(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5F14B096B33F5BA2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5F14B096B33F5BA2*&))((::PBYTE)hIl2Cpp + CLASS_3_5F14B096B33F5BA2_METHOD_3_910CE6381099E090_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3AD4360E2346F7A3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5F14B096B33F5BA2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5F14B096B33F5BA2*))((::PBYTE)hIl2Cpp + CLASS_3_5F14B096B33F5BA2_METHOD_3_3AD4360E2346F7A3_OFFSET))(a1, a2);
	}
};
