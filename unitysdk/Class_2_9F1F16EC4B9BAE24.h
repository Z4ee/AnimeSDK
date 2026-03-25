#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvDestroyEntityAsync; }
namespace RPG::GameCore { class GroupEntityDestroyConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9F1F16EC4B9BAE24_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA462CA0)
#define CLASS_2_9F1F16EC4B9BAE24_METHOD_2_228AAEEF4043B1C2_OFFSET UNITYSDK_OFFSET(0xA463340)
#define CLASS_2_9F1F16EC4B9BAE24_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA4639E0)
#define CLASS_2_9F1F16EC4B9BAE24_METHOD_2_477437DD4EF9815F_OFFSET UNITYSDK_OFFSET(0xA463470)
#define CLASS_2_9F1F16EC4B9BAE24_METHOD_2_9C1C1838F5968D78_OFFSET UNITYSDK_OFFSET(0xA463630)
#define CLASS_2_9F1F16EC4B9BAE24_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA462DB0)
#define CLASS_2_9F1F16EC4B9BAE24_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA462D00)
#define CLASS_2_9F1F16EC4B9BAE24_TICK_OFFSET UNITYSDK_OFFSET(0xA462D50)
#define CLASS_2_9F1F16EC4B9BAE24__CTOR_OFFSET UNITYSDK_OFFSET(0xA462C90)

inline static constexpr unsigned int Class_2_9F1F16EC4B9BAE24_TypeDefinitionIndex = 42361;

class Class_2_9F1F16EC4B9BAE24 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::AdvDestroyEntityAsync* Field_2_2; // 0x20
	::System::Boolean Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDestroyEntityAsync* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDestroyEntityAsync*))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_228AAEEF4043B1C2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24_METHOD_2_228AAEEF4043B1C2_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_2_9C1C1838F5968D78(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::GroupEntityDestroyConfig* a2)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::GroupEntityDestroyConfig*))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24_METHOD_2_9C1C1838F5968D78_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_477437DD4EF9815F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24_METHOD_2_477437DD4EF9815F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
