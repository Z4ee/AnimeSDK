#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_3_D97525674BFD9AB4_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1837B330)
#define CLASS_3_D97525674BFD9AB4_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1837B210)
#define CLASS_3_D97525674BFD9AB4__CTOR_OFFSET UNITYSDK_OFFSET(0x1837B2B0)

inline static constexpr unsigned int Class_3_D97525674BFD9AB4_TypeDefinitionIndex = 10070;

class Class_3_D97525674BFD9AB4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::System::String* Field_3_3; // 0x20
	::Il2CppArray<::System::String*>* Field_3_4; // 0x28
	::Il2CppArray<::System::String*>* Field_3_6; // 0x30
	::System::String* Field_3_1; // 0x38
	::System::String* Field_3_5; // 0x40
	::System::String* Field_3_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D97525674BFD9AB4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D97525674BFD9AB4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D97525674BFD9AB4*&))((::PBYTE)hIl2Cpp + CLASS_3_D97525674BFD9AB4_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D97525674BFD9AB4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D97525674BFD9AB4*))((::PBYTE)hIl2Cpp + CLASS_3_D97525674BFD9AB4_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
