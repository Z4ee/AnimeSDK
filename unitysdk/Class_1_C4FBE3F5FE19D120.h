#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Buff/GameplayEffectModifier.h"
#include "unitysdk/System/Object.h"

class Class_1_446FF0195498B714;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4FBE3F5FE19D120_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1EBB0620)
#define CLASS_1_C4FBE3F5FE19D120_METHOD_1_2952700D94935B53_OFFSET UNITYSDK_OFFSET(0x1EBA86A0)
#define CLASS_1_C4FBE3F5FE19D120_METHOD_1_5DDBA7DEB1FDF85C_OFFSET UNITYSDK_OFFSET(0x1EBAF2C0)
#define CLASS_1_C4FBE3F5FE19D120_METHOD_1_60850E8B91781FF6_OFFSET UNITYSDK_OFFSET(0x1EBB0600)
#define CLASS_1_C4FBE3F5FE19D120_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1EBB05F0)
#define CLASS_1_C4FBE3F5FE19D120_METHOD_1_93ED49E51C6BC4A9_OFFSET UNITYSDK_OFFSET(0x1EBB05E0)
#define CLASS_1_C4FBE3F5FE19D120_METHOD_1_CFEE16364D990597_OFFSET UNITYSDK_OFFSET(0x1EBA7A80)
#define CLASS_1_C4FBE3F5FE19D120__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB05D0)

inline static constexpr unsigned int Class_1_C4FBE3F5FE19D120_TypeDefinitionIndex = 19614;

class Class_1_C4FBE3F5FE19D120 : public ::System::Object
{
public:
	::Class_1_446FF0195498B714* Field_1_0; // 0x10
	::Foundation::Buff::GameplayEffectModifier Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_93ED49E51C6BC4A9(::Foundation::Buff::GameplayEffectModifier a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Buff::GameplayEffectModifier))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120_METHOD_1_93ED49E51C6BC4A9_OFFSET))(this, a1);
	}

	static ::Class_1_C4FBE3F5FE19D120* Method_1_5DDBA7DEB1FDF85C(::Class_1_446FF0195498B714* a1, ::Foundation::Buff::GameplayEffectModifier a2)
	{
		return ((::Class_1_C4FBE3F5FE19D120*(*)(::Class_1_446FF0195498B714*, ::Foundation::Buff::GameplayEffectModifier))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120_METHOD_1_5DDBA7DEB1FDF85C_OFFSET))(a1, a2);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_446FF0195498B714* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_446FF0195498B714*))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4FBE3F5FE19D120*>* Method_1_CFEE16364D990597(::System::Collections::Generic::IReadOnlyList_1<::Foundation::Buff::GameplayEffectModifier>* a1, ::Class_1_446FF0195498B714* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4FBE3F5FE19D120*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::Foundation::Buff::GameplayEffectModifier>*, ::Class_1_446FF0195498B714*))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120_METHOD_1_CFEE16364D990597_OFFSET))(a1, a2);
	}

	::Foundation::Buff::GameplayEffectModifier Method_1_60850E8B91781FF6()
	{
		return ((::Foundation::Buff::GameplayEffectModifier(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120_METHOD_1_60850E8B91781FF6_OFFSET))(this);
	}

	::Class_1_446FF0195498B714* Method_1_24748FC20F375725()
	{
		return ((::Class_1_446FF0195498B714*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	static ::System::Void Method_1_2952700D94935B53(::System::Collections::Generic::List_1<::Class_1_C4FBE3F5FE19D120*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_C4FBE3F5FE19D120*>*))((::PBYTE)hIl2Cpp + CLASS_1_C4FBE3F5FE19D120_METHOD_1_2952700D94935B53_OFFSET))(a1);
	}
};
