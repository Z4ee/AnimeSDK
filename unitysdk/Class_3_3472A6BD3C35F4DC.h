#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AILeadWayState.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_8DC3A13A939A9841;
class Class_2_ED5B635C4D775055;
class Class_4_BFC5F7EEE5CF41E7;
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_3472A6BD3C35F4DC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AD2FA0)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15AD4A90)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_1FE30E223D995003_OFFSET UNITYSDK_OFFSET(0x15AD47E0)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_3AB2C5914EC55829_OFFSET UNITYSDK_OFFSET(0x15AD33F0)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15AD4B80)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x15AD46C0)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_7A8604A90B40E6A9_OFFSET UNITYSDK_OFFSET(0x15AD4560)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_947D2B8B7863EE1B_OFFSET UNITYSDK_OFFSET(0x15AD3A00)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15AD44A0)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_9DB6AC92003671D9_OFFSET UNITYSDK_OFFSET(0x15AD4180)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_D26AC14EBBDB9AAF_OFFSET UNITYSDK_OFFSET(0x15AD3920)
#define CLASS_3_3472A6BD3C35F4DC_METHOD_3_DDB0310B80AE817B_OFFSET UNITYSDK_OFFSET(0x15AD3680)
#define CLASS_3_3472A6BD3C35F4DC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AD2FF0)
#define CLASS_3_3472A6BD3C35F4DC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AD4600)
#define CLASS_3_3472A6BD3C35F4DC_TICK_OFFSET UNITYSDK_OFFSET(0x15AD3AC0)
#define CLASS_3_3472A6BD3C35F4DC__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AD4CA0)
#define CLASS_3_3472A6BD3C35F4DC__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD2DB0)

inline static constexpr unsigned int Class_3_3472A6BD3C35F4DC_TypeDefinitionIndex = 52208;

class Class_3_3472A6BD3C35F4DC : public ::RPG::GameCore::ST_Task_1<::Class_4_BFC5F7EEE5CF41E7*>
{
public:
	static ::System::Single* StaticGet_JFAIPJJIBKF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3472A6BD3C35F4DC_TypeDefinitionIndex)->GetStaticField(0x14DA0);
	}
	static ::System::Single* StaticGet_LAJAKIACCLH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3472A6BD3C35F4DC_TypeDefinitionIndex)->GetStaticField(0x14DA4);
	}
	static ::System::Single* StaticGet_MEMKAJABEON()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3472A6BD3C35F4DC_TypeDefinitionIndex)->GetStaticField(0x14DA8);
	}
	::Class_2_8DC3A13A939A9841* CPPIBGEOGNI; // 0x28
	::RPG::GameCore::TransformComponent* GGLEFOFHHCN; // 0x30
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x38
	::Class_2_ED5B635C4D775055* CNPNMBNLKFJ; // 0x40
	::System::Single IFPNFAEJNBI; // 0x48
	::RPG::GameCore::AILeadWayState JKGJBAPLKAF; // 0x4C
	::System::Boolean PLOJEHCOJPD; // 0x50
	::System::Single COALOIELFND; // 0x54
	::System::Single NGAEMPHCOAI; // 0x58

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

	::System::Boolean Method_3_DDB0310B80AE817B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3472A6BD3C35F4DC_METHOD_3_DDB0310B80AE817B_OFFSET))(this);
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
