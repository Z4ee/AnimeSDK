#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_4ACDA48EC7CC1C00.h"

class Class_1_D70A30D666F20D90;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_7A7E15803BB83F7A_COLLECT_OFFSET UNITYSDK_OFFSET(0x1525B010)
#define CLASS_2_7A7E15803BB83F7A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1525AFC0)
#define CLASS_2_7A7E15803BB83F7A_FLUSH_OFFSET UNITYSDK_OFFSET(0x1525B150)
#define CLASS_2_7A7E15803BB83F7A_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1525B3C0)
#define CLASS_2_7A7E15803BB83F7A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1525ADB0)
#define CLASS_2_7A7E15803BB83F7A_METHOD_2_81FB757B011A8054_OFFSET UNITYSDK_OFFSET(0x1525AE10)
#define CLASS_2_7A7E15803BB83F7A_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1525B370)
#define CLASS_2_7A7E15803BB83F7A_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1525B330)
#define CLASS_2_7A7E15803BB83F7A_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1525B2F0)
#define CLASS_2_7A7E15803BB83F7A_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1525B3D0)
#define CLASS_2_7A7E15803BB83F7A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1525B3E0)
#define CLASS_2_7A7E15803BB83F7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1525AD30)

inline static constexpr unsigned int Class_2_7A7E15803BB83F7A_TypeDefinitionIndex = 67881;

class Class_2_7A7E15803BB83F7A : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_4ACDA48EC7CC1C00>
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A7E15803BB83F7A_TypeDefinitionIndex)->GetStaticField(0xDF40);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A7E15803BB83F7A_TypeDefinitionIndex)->GetStaticField(0xDF44);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A7E15803BB83F7A_TypeDefinitionIndex)->GetStaticField(0xDF48);
	}
	::Class_1_D70A30D666F20D90* Field_2_3; // 0x40
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x48
	::RPG::GameCore::ThreadTaskType Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A__CCTOR_OFFSET))();
	}

	::System::Void Method_2_81FB757B011A8054(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D70A30D666F20D90*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D70A30D666F20D90*>*))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_METHOD_2_81FB757B011A8054_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_DISPOSE_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_ONDISABLE_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_SET_CONFIG_OFFSET))(this, a1);
	}
};
