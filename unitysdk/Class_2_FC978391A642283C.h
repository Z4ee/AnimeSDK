#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_4D336CA13CA92975.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_FC978391A642283C_COLLECT_OFFSET UNITYSDK_OFFSET(0xA707F60)
#define CLASS_2_FC978391A642283C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA707EE0)
#define CLASS_2_FC978391A642283C_FLUSH_OFFSET UNITYSDK_OFFSET(0xA707FA0)
#define CLASS_2_FC978391A642283C_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA708060)
#define CLASS_2_FC978391A642283C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA707E30)
#define CLASS_2_FC978391A642283C_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xA707E90)
#define CLASS_2_FC978391A642283C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA707F20)
#define CLASS_2_FC978391A642283C_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA708020)
#define CLASS_2_FC978391A642283C_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA707FE0)
#define CLASS_2_FC978391A642283C_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA708070)
#define CLASS_2_FC978391A642283C__CTOR_OFFSET UNITYSDK_OFFSET(0xA707DC0)
#define CLASS_2_FC978391A642283C___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0xA7080C0)
#define CLASS_2_FC978391A642283C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA708080)
#define CLASS_2_FC978391A642283C___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0xA708100)
#define CLASS_2_FC978391A642283C___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA708180)
#define CLASS_2_FC978391A642283C___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA708140)

inline static constexpr unsigned int Class_2_FC978391A642283C_TypeDefinitionIndex = 66449;

class Class_2_FC978391A642283C : public ::RPG::Client::Multithread::JobThreadTask_1<::Struct_2_4D336CA13CA92975>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x28
	::RPG::GameCore::ThreadTaskType Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
