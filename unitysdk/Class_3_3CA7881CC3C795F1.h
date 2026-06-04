#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"
#include "unitysdk/RPG/GameCore/AILeadWayState.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"

class Class_2_19E76B515E7B257C;
class Class_2_9D4DD2F4235F8658;
class Class_2_A0580152EB393340;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdvSetAILeadWay; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_3CA7881CC3C795F1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14326580)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x143283C0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x143285E0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14328770)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x143275A0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_7A8604A90B40E6A9_OFFSET UNITYSDK_OFFSET(0x143280E0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_841E1F33C77D2AFF_OFFSET UNITYSDK_OFFSET(0x143278C0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_947D2B8B7863EE1B_OFFSET UNITYSDK_OFFSET(0x14326EB0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_9DF32A38C8C42AFC_OFFSET UNITYSDK_OFFSET(0x14328180)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_B8817F4F77EFC234_OFFSET UNITYSDK_OFFSET(0x143276C0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_D26AC14EBBDB9AAF_OFFSET UNITYSDK_OFFSET(0x14326DD0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x14327F10)
#define CLASS_3_3CA7881CC3C795F1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14326650)
#define CLASS_3_3CA7881CC3C795F1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x143284B0)
#define CLASS_3_3CA7881CC3C795F1_TICK_OFFSET UNITYSDK_OFFSET(0x14326F70)
#define CLASS_3_3CA7881CC3C795F1__CCTOR_OFFSET UNITYSDK_OFFSET(0x14328890)
#define CLASS_3_3CA7881CC3C795F1__CTOR_OFFSET UNITYSDK_OFFSET(0x14326450)
#define CLASS_3_3CA7881CC3C795F1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143288B0)

inline static constexpr unsigned int Class_3_3CA7881CC3C795F1_TypeDefinitionIndex = 49088;

class Class_3_3CA7881CC3C795F1 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	static ::System::Single* StaticGet_Field_3_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CA7881CC3C795F1_TypeDefinitionIndex)->GetStaticField(0x9C60);
	}
	static ::System::Single* StaticGet_Field_3_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CA7881CC3C795F1_TypeDefinitionIndex)->GetStaticField(0x9C64);
	}
	static ::System::Single* StaticGet_Field_3_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CA7881CC3C795F1_TypeDefinitionIndex)->GetStaticField(0x9C68);
	}
	::Class_2_9D4DD2F4235F8658* Field_3_3; // 0x30
	::Class_2_A0580152EB393340* Field_3_4; // 0x38
	::RPG::GameCore::AdvSetAILeadWay* Field_3_5; // 0x40
	::Class_3_07C3C4D2990C49EE* Field_3_6; // 0x48
	::RPG::GameCore::TransformComponent* Field_3_7; // 0x50
	::Class_2_19E76B515E7B257C* Field_3_8; // 0x58
	::System::Single Field_3_9; // 0x60
	::System::Boolean Field_3_10; // 0x64
	::System::Boolean Field_3_11; // 0x65
	::RPG::GameCore::AILeadWayState Field_3_12; // 0x68
	::System::Single Field_3_13; // 0x6C
	::System::Single Field_3_14; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAILeadWay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAILeadWay*))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_TICK_OFFSET))(this, a1);
	}

	::System::Single Method_3_841E1F33C77D2AFF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_841E1F33C77D2AFF_OFFSET))(this);
	}

	::System::Boolean Method_3_B8817F4F77EFC234()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_B8817F4F77EFC234_OFFSET))(this);
	}

	::System::Void Method_3_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_3_9DF32A38C8C42AFC(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_9DF32A38C8C42AFC_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_D26AC14EBBDB9AAF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_D26AC14EBBDB9AAF_OFFSET))(this, a1);
	}

	::System::Void Method_3_947D2B8B7863EE1B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_947D2B8B7863EE1B_OFFSET))(this, a1);
	}

	::System::Void Method_3_7A8604A90B40E6A9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_7A8604A90B40E6A9_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
