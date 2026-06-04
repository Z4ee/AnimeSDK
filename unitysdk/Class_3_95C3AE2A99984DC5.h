#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetPlayerMotionSync; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_95C3AE2A99984DC5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139D3320)
#define CLASS_3_95C3AE2A99984DC5_METHOD_3_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x139D36E0)
#define CLASS_3_95C3AE2A99984DC5_METHOD_3_67092B198ADCB2A8_OFFSET UNITYSDK_OFFSET(0x139D3470)
#define CLASS_3_95C3AE2A99984DC5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139D3410)
#define CLASS_3_95C3AE2A99984DC5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x139D3670)
#define CLASS_3_95C3AE2A99984DC5__CTOR_OFFSET UNITYSDK_OFFSET(0x139D32F0)
#define CLASS_3_95C3AE2A99984DC5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139D3720)

inline static constexpr unsigned int Class_3_95C3AE2A99984DC5_TypeDefinitionIndex = 54715;

class Class_3_95C3AE2A99984DC5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetPlayerMotionSync*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPlayerMotionSync* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPlayerMotionSync*))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_ONTASKRESET_OFFSET))(this);
	}

	static ::System::Void Method_3_67092B198ADCB2A8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_METHOD_3_67092B198ADCB2A8_OFFSET))(a1);
	}

	static ::System::Void Method_3_4389275F4099DE36()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_METHOD_3_4389275F4099DE36_OFFSET))();
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
