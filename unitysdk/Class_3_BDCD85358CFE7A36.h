#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSet3CFreeLook3rdCameraNearClippingPlane; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BDCD85358CFE7A36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FCC500)
#define CLASS_3_BDCD85358CFE7A36_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x8FCC4F0)
#define CLASS_3_BDCD85358CFE7A36_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x8FCC5A0)
#define CLASS_3_BDCD85358CFE7A36_ONSKIP_OFFSET UNITYSDK_OFFSET(0x8FCC540)
#define CLASS_3_BDCD85358CFE7A36_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8FCC680)
#define CLASS_3_BDCD85358CFE7A36__CTOR_OFFSET UNITYSDK_OFFSET(0x8FCC4C0)
#define CLASS_3_BDCD85358CFE7A36___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FCC6D0)

inline static constexpr unsigned int Class_3_BDCD85358CFE7A36_TypeDefinitionIndex = 48459;

class Class_3_BDCD85358CFE7A36 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane*))((::PBYTE)hIl2Cpp + CLASS_3_BDCD85358CFE7A36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BDCD85358CFE7A36_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BDCD85358CFE7A36_DISPOSE_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BDCD85358CFE7A36_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BDCD85358CFE7A36_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BDCD85358CFE7A36_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BDCD85358CFE7A36___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
