#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class FireWaveProjectileBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EC4C77F01EAF6873_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CC4980)
#define CLASS_2_EC4C77F01EAF6873_METHOD_2_5ED655A622B0DBD9_OFFSET UNITYSDK_OFFSET(0x8CC50C0)
#define CLASS_2_EC4C77F01EAF6873_METHOD_2_C25260634A2387FE_OFFSET UNITYSDK_OFFSET(0x8CC4B90)
#define CLASS_2_EC4C77F01EAF6873_METHOD_2_E2DB313288304FAF_OFFSET UNITYSDK_OFFSET(0x8CC4F70)
#define CLASS_2_EC4C77F01EAF6873_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8CC49F0)
#define CLASS_2_EC4C77F01EAF6873_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8CC4F20)
#define CLASS_2_EC4C77F01EAF6873_TICK_OFFSET UNITYSDK_OFFSET(0x8CC4DB0)
#define CLASS_2_EC4C77F01EAF6873__CTOR_OFFSET UNITYSDK_OFFSET(0x8CC4810)

inline static constexpr unsigned int Class_2_EC4C77F01EAF6873_TypeDefinitionIndex = 44065;

class Class_2_EC4C77F01EAF6873 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* Field_2_2; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_7; // 0x20
	::RPG::GameCore::GameEntity* Field_2_6; // 0x28
	::RPG::GameCore::GameEntity* Field_2_5; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38
	::RPG::GameCore::FireWaveProjectileBase* Field_2_0; // 0x40
	::System::Single Field_2_3; // 0x48
	::System::Int32 Field_2_4; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireWaveProjectileBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireWaveProjectileBase*))((::PBYTE)hIl2Cpp + CLASS_2_EC4C77F01EAF6873__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4C77F01EAF6873_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4C77F01EAF6873_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EC4C77F01EAF6873_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4C77F01EAF6873_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_C25260634A2387FE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC4C77F01EAF6873_METHOD_2_C25260634A2387FE_OFFSET))(this, a1);
	}

	::Class_1_0AD6129525BF5F86* Method_2_E2DB313288304FAF(::Class_1_2B8E0B4950FE44E7* a1)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_2_EC4C77F01EAF6873_METHOD_2_E2DB313288304FAF_OFFSET))(this, a1);
	}

	::System::Void Method_2_5ED655A622B0DBD9(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_EC4C77F01EAF6873_METHOD_2_5ED655A622B0DBD9_OFFSET))(this, a1);
	}
};
