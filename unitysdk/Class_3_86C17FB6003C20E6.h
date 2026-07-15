#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_86C17FB6003C20E6_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1B2D38D0)
#define CLASS_3_86C17FB6003C20E6_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1B2D3890)
#define CLASS_3_86C17FB6003C20E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D38C0)

inline static constexpr unsigned int Class_3_86C17FB6003C20E6_TypeDefinitionIndex = 19496;

class Class_3_86C17FB6003C20E6 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::Il2CppArray<::System::String*>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86C17FB6003C20E6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_86C17FB6003C20E6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_86C17FB6003C20E6*&))((::PBYTE)hIl2Cpp + CLASS_3_86C17FB6003C20E6_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_86C17FB6003C20E6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_86C17FB6003C20E6*))((::PBYTE)hIl2Cpp + CLASS_3_86C17FB6003C20E6_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
