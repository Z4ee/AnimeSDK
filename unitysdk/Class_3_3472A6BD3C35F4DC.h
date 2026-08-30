#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AILeadWayState.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_19E76B515E7B257C;
class Class_2_A0580152EB393340;
class Class_4_BFC5F7EEE5CF41E7;
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_3472A6BD3C35F4DC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157DCEA0)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x157DE930)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_1FE30E223D995003_OFFSET UNITYSDK_OFFSET(0x157DE680)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_3AB2C5914EC55829_OFFSET UNITYSDK_OFFSET(0x157DD2F0)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x157DEA20)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x157DE560)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_7A8604A90B40E6A9_OFFSET UNITYSDK_OFFSET(0x157DE400)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_947D2B8B7863EE1B_OFFSET UNITYSDK_OFFSET(0x157DD8D0)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x157DE340)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_9DB6AC92003671D9_OFFSET UNITYSDK_OFFSET(0x157DE020)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_D26AC14EBBDB9AAF_OFFSET UNITYSDK_OFFSET(0x157DD7F0)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_DE8AAC3B400CA5F2_OFFSET UNITYSDK_OFFSET(0x157DD580)
#define CLASS_3_3472A6BD3C35F4DC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157DCEF0)
#define CLASS_3_3472A6BD3C35F4DC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157DE4A0)
#define CLASS_3_3472A6BD3C35F4DC_TICK_OFFSET UNITYSDK_OFFSET(0x157DD990)
#define CLASS_3_3472A6BD3C35F4DC__CCTOR_OFFSET UNITYSDK_OFFSET(0x157DEB40)
#define CLASS_3_3472A6BD3C35F4DC__CTOR_OFFSET UNITYSDK_OFFSET(0x157DCCE0)

inline static constexpr unsigned int Class_3_3472A6BD3C35F4DC_TypeDefinitionIndex = 52494;

class Class_3_3472A6BD3C35F4DC : public ::RPG::GameCore::ST_Task_1<::Class_4_BFC5F7EEE5CF41E7*>
{
public:
	static ::System::Single* StaticGet_JFAIPJJIBKF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3472A6BD3C35F4DC_TypeDefinitionIndex)->GetStaticField(0x10720);
	}
	static ::System::Single* StaticGet_MEMKAJABEON()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3472A6BD3C35F4DC_TypeDefinitionIndex)->GetStaticField(0x10724);
	}
	static ::System::Single* StaticGet_LAJAKIACCLH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3472A6BD3C35F4DC_TypeDefinitionIndex)->GetStaticField(0x10728);
	}
	::RPG::GameCore::TransformComponent* GGLEFOFHHCN; // 0x28
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x30
	::Class_2_A0580152EB393340* CNPNMBNLKFJ; // 0x38
	::Class_2_19E76B515E7B257C* CPPIBGEOGNI; // 0x40
	::RPG::GameCore::AILeadWayState JKGJBAPLKAF; // 0x48
	::System::Single IFPNFAEJNBI; // 0x4C
	::System::Single NGAEMPHCOAI; // 0x50
	::System::Single COALOIELFND; // 0x54
	::System::Boolean PLOJEHCOJPD; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_BFC5F7EEE5CF41E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_BFC5F7EEE5CF41E7*))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_3_3AB2C5914EC55829(::RPG::Client::Map* a1, ::System::UInt32 a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Map*, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_METHOD_3_3AB2C5914EC55829_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_3_9DB6AC92003671D9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_METHOD_3_9DB6AC92003671D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_DE8AAC3B400CA5F2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_METHOD_3_DE8AAC3B400CA5F2_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_1FE30E223D995003(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_METHOD_3_1FE30E223D995003_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_3_D26AC14EBBDB9AAF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_METHOD_3_D26AC14EBBDB9AAF_OFFSET))(this, a1);
	}

	::System::Void Method_3_947D2B8B7863EE1B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_METHOD_3_947D2B8B7863EE1B_OFFSET))(this, a1);
	}

	::System::Void Method_3_7A8604A90B40E6A9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_METHOD_3_7A8604A90B40E6A9_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_METHOD_3_79830F666EE579C0_OFFSET))(this);
	}
};
