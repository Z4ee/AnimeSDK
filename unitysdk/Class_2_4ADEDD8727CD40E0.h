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

#define CLASS_2_4ADEDD8727CD40E0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1644A230)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x1644C0A0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_1D9665FEAF2CECC3_OFFSET UNITYSDK_OFFSET(0x1644B880)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x1644BDC0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1644AFA0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_4E9EC380BABC0020_OFFSET UNITYSDK_OFFSET(0x1644CEB0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_8C1C9660B1FCE875_OFFSET UNITYSDK_OFFSET(0x1644C530)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1644AC30)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_98D8B997686A921B_OFFSET UNITYSDK_OFFSET(0x1644C910)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_9A30616843D3913C_OFFSET UNITYSDK_OFFSET(0x1644CBE0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_9DC685F3E3A2FC2F_OFFSET UNITYSDK_OFFSET(0x1644A580)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x1644C3D0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_DF2A78D8DB25ED05_1_OFFSET UNITYSDK_OFFSET(0x1644BFE0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x1644BD70)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_E0F3A7E0D78CF15F_OFFSET UNITYSDK_OFFSET(0x1644B040)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_E49FC3D0AC1CB0F6_OFFSET UNITYSDK_OFFSET(0x1644C4E0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_F5447CD65612575D_1_OFFSET UNITYSDK_OFFSET(0x1644C8A0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x1644C030)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x1644AEE0)
#define CLASS_2_4ADEDD8727CD40E0_METHOD_2_FADBDF6B666E37DE_OFFSET UNITYSDK_OFFSET(0x1644AD10)
#define CLASS_2_4ADEDD8727CD40E0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1644A3A0)
#define CLASS_2_4ADEDD8727CD40E0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1644A2D0)
#define CLASS_2_4ADEDD8727CD40E0_TICK_OFFSET UNITYSDK_OFFSET(0x1644A330)
#define CLASS_2_4ADEDD8727CD40E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1644A0D0)

inline static constexpr unsigned int Class_2_4ADEDD8727CD40E0_TypeDefinitionIndex = 56102;

class Class_2_4ADEDD8727CD40E0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SummonUnitGameplayConfig* Field_2_0; // 0x18
	::Class_1_DB9575801298F699* Field_2_1; // 0x20
	::Class_2_E3332B678B8C5C07* Field_2_2; // 0x28
	::RPG::GameCore::LevelGraphConfig* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38
	::Class_1_72FF3C03F0F06A80* Field_2_5; // 0x40
	::RPG::GameCore::StartSummonUnitGameplay* Field_2_6; // 0x48
	::System::Boolean Field_2_7; // 0x50
	::System::UInt32 Field_2_8; // 0x54

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

	static ::System::Void Method_2_4E9EC380BABC0020(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_4E9EC380BABC0020_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_9A30616843D3913C(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_9A30616843D3913C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_98D8B997686A921B(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEDD8727CD40E0_METHOD_2_98D8B997686A921B_OFFSET))(a1, a2, a3);
	}
};
