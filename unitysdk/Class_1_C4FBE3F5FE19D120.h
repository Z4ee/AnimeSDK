#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Buff/GameplayEffectModifier.h"
#include "unitysdk/System/Object.h"

class Class_1_CED4C4BADCBE81C2;

#define CLASS_1_C4FBE3F5FE19D120_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1D289EF0)
#define CLASS_1_C4FBE3F5FE19D120_METHOD_1_5DDBA7DEB1FDF85C_OFFSET UNITYSDK_OFFSET(0x1D289B60)
#define CLASS_1_C4FBE3F5FE19D120_METHOD_1_60850E8B91781FF6_OFFSET UNITYSDK_OFFSET(0x1D289ED0)
#define CLASS_1_C4FBE3F5FE19D120_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1D289B40)
#define CLASS_1_C4FBE3F5FE19D120_METHOD_1_93ED49E51C6BC4A9_OFFSET UNITYSDK_OFFSET(0x1D289B50)
#define CLASS_1_C4FBE3F5FE19D120__CTOR_OFFSET UNITYSDK_OFFSET(0x1D289B30)

inline static constexpr unsigned int Class_1_C4FBE3F5FE19D120_TypeDefinitionIndex = 19232;

class Class_1_C4FBE3F5FE19D120 : public ::System::Object
{
public:
	::Foundation::Buff::GameplayEffectModifier Field_1_1; // 0x10
	::Class_1_CED4C4BADCBE81C2* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_CED4C4BADCBE81C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CED4C4BADCBE81C2*))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_93ED49E51C6BC4A9(::Foundation::Buff::GameplayEffectModifier a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Buff::GameplayEffectModifier))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120_METHOD_1_93ED49E51C6BC4A9_OFFSET))(this, a1);
	}

	static ::Class_1_C4FBE3F5FE19D120* Method_1_5DDBA7DEB1FDF85C(::Class_1_CED4C4BADCBE81C2* a1, ::Foundation::Buff::GameplayEffectModifier a2)
	{
		return ((::Class_1_C4FBE3F5FE19D120*(*)(::Class_1_CED4C4BADCBE81C2*, ::Foundation::Buff::GameplayEffectModifier))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120_METHOD_1_5DDBA7DEB1FDF85C_OFFSET))(a1, a2);
	}

	::Foundation::Buff::GameplayEffectModifier Method_1_60850E8B91781FF6()
	{
		return ((::Foundation::Buff::GameplayEffectModifier(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120_METHOD_1_60850E8B91781FF6_OFFSET))(this);
	}

	::Class_1_CED4C4BADCBE81C2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_CED4C4BADCBE81C2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
