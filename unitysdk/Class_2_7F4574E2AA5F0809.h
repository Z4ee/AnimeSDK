#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_1C2C893F3F0948F6.h"
#include "unitysdk/Struct_2_74D97E08BFF70A55.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_7F4574E2AA5F0809_COLLECT_OFFSET UNITYSDK_OFFSET(0xA5A4DF0)
#define CLASS_2_7F4574E2AA5F0809_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5A4BC0)
#define CLASS_2_7F4574E2AA5F0809_FLUSH_OFFSET UNITYSDK_OFFSET(0xA5A4E70)
#define CLASS_2_7F4574E2AA5F0809_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA5A4FB0)
#define CLASS_2_7F4574E2AA5F0809_METHOD_2_2AB025F256BE5583_OFFSET UNITYSDK_OFFSET(0xA5A4F50)
#define CLASS_2_7F4574E2AA5F0809_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA5A4B60)
#define CLASS_2_7F4574E2AA5F0809_METHOD_2_AC088C028EF9B921_OFFSET UNITYSDK_OFFSET(0xA5A4C10)
#define CLASS_2_7F4574E2AA5F0809_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xA5A4CC0)
#define CLASS_2_7F4574E2AA5F0809_METHOD_2_B549B3594F20C3DA_OFFSET UNITYSDK_OFFSET(0xA5A4D10)
#define CLASS_2_7F4574E2AA5F0809_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA5A4DB0)
#define CLASS_2_7F4574E2AA5F0809_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA5A4F10)
#define CLASS_2_7F4574E2AA5F0809_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA5A4ED0)
#define CLASS_2_7F4574E2AA5F0809_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA5A4FC0)
#define CLASS_2_7F4574E2AA5F0809__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A4AE0)
#define CLASS_2_7F4574E2AA5F0809___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0xA5A5020)
#define CLASS_2_7F4574E2AA5F0809___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5A4FD0)
#define CLASS_2_7F4574E2AA5F0809___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0xA5A5030)
#define CLASS_2_7F4574E2AA5F0809___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA5A50D0)
#define CLASS_2_7F4574E2AA5F0809___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA5A5090)

inline static constexpr unsigned int Class_2_7F4574E2AA5F0809_TypeDefinitionIndex = 66455;

class Class_2_7F4574E2AA5F0809 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_1C2C893F3F0948F6>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
	::RPG::GameCore::ThreadTaskType Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_AC088C028EF9B921(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_METHOD_2_AC088C028EF9B921_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_B549B3594F20C3DA(::System::Int32 a1, ::Struct_2_74D97E08BFF70A55 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_74D97E08BFF70A55))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_METHOD_2_B549B3594F20C3DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_ONDISABLE_OFFSET))(this);
	}

	::Unity::Collections::NativeArray_1<::Struct_2_74D97E08BFF70A55> Method_2_2AB025F256BE5583()
	{
		return ((::Unity::Collections::NativeArray_1<::Struct_2_74D97E08BFF70A55>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_METHOD_2_2AB025F256BE5583_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F4574E2AA5F0809___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
