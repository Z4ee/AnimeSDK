#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MiHoYoMTRCallback; }
namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MiHoYoResolverCallback; }
namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MiHoYoUrlUsageCallback; }
namespace MiHoYo::SDK::MTR { template <typename T> class MiHoYoMTRInterface_TaskResult_1; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA18A370)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA18A3B0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_0_OFFSET UNITYSDK_OFFSET(0xA18A3C0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_1_OFFSET UNITYSDK_OFFSET(0xA18A400)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_2_OFFSET UNITYSDK_OFFSET(0xA18A440)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex = 44048;

	class MiHoYoMTRInterface_MTRMsgLooper___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*>*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex)->GetStaticField(0xE360);
		}
		static ::System::Action_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*>*>** StaticGet___9__5_2()
		{
			return (::System::Action_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex)->GetStaticField(0xE368);
		}
		static ::System::Action_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*>*>** StaticGet___9__5_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex)->GetStaticField(0xE370);
		}
		static ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRMsgLooper___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRMsgLooper___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex)->GetStaticField(0xE378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__5_0(::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_0_OFFSET))(this, a1);
		}

		::System::Void _Update_b__5_1(::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_1_OFFSET))(this, a1);
		}

		::System::Void _Update_b__5_2(::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_2_OFFSET))(this, a1);
		}
	};
}
