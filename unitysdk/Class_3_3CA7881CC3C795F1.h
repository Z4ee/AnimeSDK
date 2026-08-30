#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"
#include "unitysdk/RPG/GameCore/AILeadWayState.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"

class Class_2_19E76B515E7B257C;
class Class_2_21055A9FA74B791E;
class Class_2_A0580152EB393340;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdvSetAILeadWay; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_3CA7881CC3C795F1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162CA750)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x162CB370)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x162CCE30)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x162CCBB0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_1FE30E223D995003_OFFSET UNITYSDK_OFFSET(0x162CC900)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_238F29AF8F83C109_OFFSET UNITYSDK_OFFSET(0x162CBE40)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x162CD0E0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x162CA8F0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x162CBAB0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_7A8604A90B40E6A9_OFFSET UNITYSDK_OFFSET(0x162CC860)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x162CC640)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_947D2B8B7863EE1B_OFFSET UNITYSDK_OFFSET(0x162CB2B0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_D26AC14EBBDB9AAF_OFFSET UNITYSDK_OFFSET(0x162CB1D0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_DE8AAC3B400CA5F2_OFFSET UNITYSDK_OFFSET(0x162CBBD0)
#define CLASS_3_3CA7881CC3C795F1_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x162CD060)
#define CLASS_3_3CA7881CC3C795F1_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x162CD010)
#define CLASS_3_3CA7881CC3C795F1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162CA950)
#define CLASS_3_3CA7881CC3C795F1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162CCCA0)
#define CLASS_3_3CA7881CC3C795F1_TICK_OFFSET UNITYSDK_OFFSET(0x162CB430)
#define CLASS_3_3CA7881CC3C795F1__CCTOR_OFFSET UNITYSDK_OFFSET(0x162CD200)
#define CLASS_3_3CA7881CC3C795F1__CTOR_OFFSET UNITYSDK_OFFSET(0x162CA620)

inline static constexpr unsigned int Class_3_3CA7881CC3C795F1_TypeDefinitionIndex = 52763;

class Class_3_3CA7881CC3C795F1 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	static ::System::Single* StaticGet_LAJAKIACCLH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CA7881CC3C795F1_TypeDefinitionIndex)->GetStaticField(0x12FC0);
	}
	static ::System::Single* StaticGet_MEMKAJABEON()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CA7881CC3C795F1_TypeDefinitionIndex)->GetStaticField(0x12FC4);
	}
	static ::System::Single* StaticGet_JFAIPJJIBKF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CA7881CC3C795F1_TypeDefinitionIndex)->GetStaticField(0x12FC8);
	}
	::RPG::GameCore::CharacterModelComponent* NMGPLIMPCBC; // 0x30
	::RPG::GameCore::AdvSetAILeadWay* OFKGLJOAMLD; // 0x38
	::RPG::GameCore::TransformComponent* CGFABMFILCD; // 0x40
	::Class_2_19E76B515E7B257C* DKAFJFPFIFF; // 0x48
	::Class_2_A0580152EB393340* GEPFAIOOOGB; // 0x50
	::Class_2_21055A9FA74B791E* IPFNHFDJKKL; // 0x58
	::Class_3_07C3C4D2990C49EE* KANMJJLKMMI; // 0x60
	::System::Single IFPNFAEJNBI; // 0x68
	::System::Single NGAEMPHCOAI; // 0x6C
	::System::Boolean PLOJEHCOJPD; // 0x70
	::System::Boolean FNEJMBKLEIP; // 0x71
	::System::Single COALOIELFND; // 0x74
	::RPG::GameCore::AILeadWayState JKGJBAPLKAF; // 0x78

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

	::System::Single Method_3_238F29AF8F83C109()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_238F29AF8F83C109_OFFSET))(this);
	}

	::System::Boolean Method_3_DE8AAC3B400CA5F2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_DE8AAC3B400CA5F2_OFFSET))(this);
	}

	::System::Void Method_3_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_3_1FE30E223D995003(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_1FE30E223D995003_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_3_D26AC14EBBDB9AAF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_D26AC14EBBDB9AAF_OFFSET))(this, a1);
	}

	::System::Void Method_3_947D2B8B7863EE1B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_947D2B8B7863EE1B_OFFSET))(this, a1);
	}

	::System::Void Method_3_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_7A8604A90B40E6A9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_7A8604A90B40E6A9_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_3_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_79830F666EE579C0_OFFSET))(this);
	}
};
