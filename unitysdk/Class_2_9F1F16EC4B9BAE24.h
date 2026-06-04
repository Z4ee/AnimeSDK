#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvDestroyEntityAsync; }
namespace RPG::GameCore { class GroupEntityDestroyConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9F1F16EC4B9BAE24_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF48F30)
#define CLASS_2_9F1F16EC4B9BAE24_METHOD_2_228AAEEF4043B1C2_OFFSET UNITYSDK_OFFSET(0xAF493B0)
#define CLASS_2_9F1F16EC4B9BAE24_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAF49AB0)
#define CLASS_2_9F1F16EC4B9BAE24_METHOD_2_C98EB9C467D50721_OFFSET UNITYSDK_OFFSET(0xAF496A0)
#define CLASS_2_9F1F16EC4B9BAE24_METHOD_2_D66F8BF220AC0CB8_OFFSET UNITYSDK_OFFSET(0xAF494E0)
#define CLASS_2_9F1F16EC4B9BAE24_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF49040)
#define CLASS_2_9F1F16EC4B9BAE24_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAF48F90)
#define CLASS_2_9F1F16EC4B9BAE24_TICK_OFFSET UNITYSDK_OFFSET(0xAF48FE0)
#define CLASS_2_9F1F16EC4B9BAE24__CTOR_OFFSET UNITYSDK_OFFSET(0xAF48F20)

inline static constexpr unsigned int Class_2_9F1F16EC4B9BAE24_TypeDefinitionIndex = 48947;

class Class_2_9F1F16EC4B9BAE24 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::AdvDestroyEntityAsync* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28

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

	::Il2CppArray<::System::UInt32>* Method_2_C98EB9C467D50721(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::GroupEntityDestroyConfig* a2)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::GroupEntityDestroyConfig*))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24_METHOD_2_C98EB9C467D50721_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D66F8BF220AC0CB8(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24_METHOD_2_D66F8BF220AC0CB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F1F16EC4B9BAE24_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
