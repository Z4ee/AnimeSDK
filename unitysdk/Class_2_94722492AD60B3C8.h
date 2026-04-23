#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class FireWaveProjectileBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_94722492AD60B3C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x905AD30)
#define CLASS_2_94722492AD60B3C8_METHOD_2_5ED655A622B0DBD9_OFFSET UNITYSDK_OFFSET(0x905B470)
#define CLASS_2_94722492AD60B3C8_METHOD_2_C25260634A2387FE_OFFSET UNITYSDK_OFFSET(0x905AF40)
#define CLASS_2_94722492AD60B3C8_METHOD_2_E2DB313288304FAF_OFFSET UNITYSDK_OFFSET(0x905B320)
#define CLASS_2_94722492AD60B3C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x905ADA0)
#define CLASS_2_94722492AD60B3C8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x905B2D0)
#define CLASS_2_94722492AD60B3C8_TICK_OFFSET UNITYSDK_OFFSET(0x905B160)
#define CLASS_2_94722492AD60B3C8__CTOR_OFFSET UNITYSDK_OFFSET(0x905AB90)

inline static constexpr unsigned int Class_2_94722492AD60B3C8_TypeDefinitionIndex = 50767;

class Class_2_94722492AD60B3C8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::FireWaveProjectileBase* Field_2_0; // 0x20
	::RPG::GameCore::GameEntity* Field_2_5; // 0x28
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* Field_2_2; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_7; // 0x38
	::RPG::GameCore::GameEntity* Field_2_6; // 0x40
	::System::Single Field_2_3; // 0x48
	::System::Int32 Field_2_4; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireWaveProjectileBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireWaveProjectileBase*))((::PBYTE)hIl2Cpp + CLASS_2_94722492AD60B3C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94722492AD60B3C8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94722492AD60B3C8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94722492AD60B3C8_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94722492AD60B3C8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_C25260634A2387FE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_94722492AD60B3C8_METHOD_2_C25260634A2387FE_OFFSET))(this, a1);
	}

	::Class_1_0AD6129525BF5F86* Method_2_E2DB313288304FAF(::Class_1_2B8E0B4950FE44E7* a1)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_2_94722492AD60B3C8_METHOD_2_E2DB313288304FAF_OFFSET))(this, a1);
	}

	::System::Void Method_2_5ED655A622B0DBD9(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_94722492AD60B3C8_METHOD_2_5ED655A622B0DBD9_OFFSET))(this, a1);
	}
};
