#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_28208B86039B7770.h"
#include "unitysdk/Struct_2_8DF138C61E6ABA58.h"

class Class_1_54715B955DC6C855;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AC9482A075E204C7_COLLECT_OFFSET UNITYSDK_OFFSET(0x1615AF60)
#define CLASS_2_AC9482A075E204C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1615AEA0)
#define CLASS_2_AC9482A075E204C7_FLUSH_OFFSET UNITYSDK_OFFSET(0x1615AFC0)
#define CLASS_2_AC9482A075E204C7_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1615B100)
#define CLASS_2_AC9482A075E204C7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1615AE40)
#define CLASS_2_AC9482A075E204C7_METHOD_2_6BDA8407EBA9C0B8_OFFSET UNITYSDK_OFFSET(0x1615B0A0)
#define CLASS_2_AC9482A075E204C7_METHOD_2_73AFA2C42D815B9F_OFFSET UNITYSDK_OFFSET(0x1615AEF0)
#define CLASS_2_AC9482A075E204C7_METHOD_2_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0x1615ADF0)
#define CLASS_2_AC9482A075E204C7_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1615B060)
#define CLASS_2_AC9482A075E204C7_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1615B020)
#define CLASS_2_AC9482A075E204C7_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1615B110)
#define CLASS_2_AC9482A075E204C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1615AD40)

inline static constexpr unsigned int Class_2_AC9482A075E204C7_TypeDefinitionIndex = 71040;

class Class_2_AC9482A075E204C7 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_28208B86039B7770>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x30
	::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_73AFA2C42D815B9F(::RPG::GameCore::AdventureCharacterController* a1, ::Struct_2_8DF138C61E6ABA58& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::Struct_2_8DF138C61E6ABA58&))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_METHOD_2_73AFA2C42D815B9F_OFFSET))(this, a1, a2);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_6BDA8407EBA9C0B8(::System::Collections::Generic::List_1<::Class_1_54715B955DC6C855*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_54715B955DC6C855*>*))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_METHOD_2_6BDA8407EBA9C0B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_METHOD_2_E631B63295647DB5_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_SET_CONFIG_OFFSET))(this, a1);
	}
};
