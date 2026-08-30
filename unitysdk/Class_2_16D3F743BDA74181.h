#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_EA85E7B43F9780B0.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_16D3F743BDA74181_COLLECT_OFFSET UNITYSDK_OFFSET(0x16488740)
#define CLASS_2_16D3F743BDA74181_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164886C0)
#define CLASS_2_16D3F743BDA74181_FLUSH_OFFSET UNITYSDK_OFFSET(0x16488810)
#define CLASS_2_16D3F743BDA74181_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16488950)
#define CLASS_2_16D3F743BDA74181_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16488660)
#define CLASS_2_16D3F743BDA74181_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16488700)
#define CLASS_2_16D3F743BDA74181_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16488910)
#define CLASS_2_16D3F743BDA74181_ONENABLE_OFFSET UNITYSDK_OFFSET(0x164888D0)
#define CLASS_2_16D3F743BDA74181_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16488960)
#define CLASS_2_16D3F743BDA74181__CCTOR_OFFSET UNITYSDK_OFFSET(0x16488970)
#define CLASS_2_16D3F743BDA74181__CTOR_OFFSET UNITYSDK_OFFSET(0x164885E0)

inline static constexpr unsigned int Class_2_16D3F743BDA74181_TypeDefinitionIndex = 71069;

class Class_2_16D3F743BDA74181 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_EA85E7B43F9780B0>
{
public:
	static ::System::Int32* StaticGet_AMFPBLBICAP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_16D3F743BDA74181_TypeDefinitionIndex)->GetStaticField(0x11F90);
	}
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x30
	::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_SET_CONFIG_OFFSET))(this, a1);
	}
};
