#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_72FF3C03F0F06A80;
class Class_1_DB9575801298F699;
class Class_2_E3332B678B8C5C07;
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class SharedValue; }
namespace RPG::GameCore { class StartSummonUnitGameplay; }
namespace RPG::GameCore { class SummonUnitGameplayConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4ADEDD8727CD40E0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFAAE80)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0xBFACCE0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_1D9665FEAF2CECC3_OFFSET UNITYSDK_OFFSET(0xBFAC4C0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xBFACA00)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_2B82A6C640A9C940_OFFSET UNITYSDK_OFFSET(0xBFADA80)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xBFABBF0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_8C1C9660B1FCE875_OFFSET UNITYSDK_OFFSET(0xBFAD170)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBFAB880)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_9DC685F3E3A2FC2F_OFFSET UNITYSDK_OFFSET(0xBFAB1D0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_A07EA6C551ECC2CC_OFFSET UNITYSDK_OFFSET(0xBFAD7F0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xBFAD010)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_DB423A05B471042F_OFFSET UNITYSDK_OFFSET(0xBFAD550)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_DF2A78D8DB25ED05_1_OFFSET UNITYSDK_OFFSET(0xBFACC20)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0xBFAC9B0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_E0F3A7E0D78CF15F_OFFSET UNITYSDK_OFFSET(0xBFABC90)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_E49FC3D0AC1CB0F6_OFFSET UNITYSDK_OFFSET(0xBFAD120)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_F5447CD65612575D_1_OFFSET UNITYSDK_OFFSET(0xBFAD4E0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xBFACC70)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0xBFABB30)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_FADBDF6B666E37DE_OFFSET UNITYSDK_OFFSET(0xBFAB960)
#define CLASS_2_4ADEDD8727CD40E0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFAAFF0)
#define CLASS_2_4ADEDD8727CD40E0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFAAF20)
#define CLASS_2_4ADEDD8727CD40E0_TICK_OFFSET UNITYSDK_OFFSET(0xBFAAF80)
#define CLASS_2_4ADEDD8727CD40E0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAAD20)

inline static constexpr unsigned int Class_2_4ADEDD8727CD40E0_TypeDefinitionIndex = 58877;

class Class_2_4ADEDD8727CD40E0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::LevelGraphConfig* INCIKECJNHK; // 0x20
	::RPG::GameCore::SummonUnitGameplayConfig* IOFNMCBADNM; // 0x28
	::Class_2_E3332B678B8C5C07* KFEEIIIHPJM; // 0x30
	::Class_1_DB9575801298F699* EPGIOAEIACN; // 0x38
	::RPG::GameCore::StartSummonUnitGameplay* OFKGLJOAMLD; // 0x40
	::Class_1_72FF3C03F0F06A80* AFNDGMJDPIC; // 0x48
	::System::UInt32 ACOIPMDKLPJ; // 0x50
	::System::Boolean HFAPCECJFPM; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartSummonUnitGameplay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartSummonUnitGameplay*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_2_9DC685F3E3A2FC2F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_9DC685F3E3A2FC2F_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_1D9665FEAF2CECC3(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Boolean a6)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_1D9665FEAF2CECC3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_E0F3A7E0D78CF15F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4, ::UnityEngine::Quaternion& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityPosAdaptionConfig*, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_E0F3A7E0D78CF15F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_DF2A78D8DB25ED05_1_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_2_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_2_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_2_E49FC3D0AC1CB0F6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_E49FC3D0AC1CB0F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_FADBDF6B666E37DE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_FADBDF6B666E37DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5447CD65612575D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_F5447CD65612575D_1_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraphValueSource* Method_2_8C1C9660B1FCE875()
	{
		return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_8C1C9660B1FCE875_OFFSET))(this);
	}

	static ::System::Void Method_2_2B82A6C640A9C940(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_2B82A6C640A9C940_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_A07EA6C551ECC2CC(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_A07EA6C551ECC2CC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_DB423A05B471042F(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_DB423A05B471042F_OFFSET))(a1, a2, a3);
	}
};
