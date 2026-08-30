#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_415;
namespace RPG::GameCore { class SetModifierValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2E79A21F226A06B9_METHOD_3_DD14E2BE2D50A274_OFFSET UNITYSDK_OFFSET(0x159D81D0)
#define CLASS_3_2E79A21F226A06B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159D7E20)
#define CLASS_3_2E79A21F226A06B9__CTOR_OFFSET UNITYSDK_OFFSET(0x159D7DF0)

inline static constexpr unsigned int Class_3_2E79A21F226A06B9_TypeDefinitionIndex = 55730;

class Class_3_2E79A21F226A06B9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetModifierValue*>
{
public:
	::RPG::GameCore::ArrayPoolWrapper_1<::Class_0_16E4307DCC419505_415*> HEJKAKEJCMP; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierValue*))((::PBYTE)hIl2Cpp + CLASS_3_2E79A21F226A06B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E79A21F226A06B9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_DD14E2BE2D50A274(::Il2CppArray<::Class_0_16E4307DCC419505_415*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_415*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2E79A21F226A06B9_METHOD_3_DD14E2BE2D50A274_OFFSET))(this, a1, a2, a3);
	}
};
