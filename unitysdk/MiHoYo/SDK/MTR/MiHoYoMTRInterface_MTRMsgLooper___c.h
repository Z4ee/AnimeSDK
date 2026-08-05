#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MiHoYoMTRCallback; }
namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MiHoYoResolverCallback; }
namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MiHoYoUrlUsageCallback; }
namespace MiHoYo::SDK::MTR { template <typename T> class MiHoYoMTRInterface_TaskResult_1; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D844220)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D844260)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D844270)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_1_OFFSET UNITYSDK_OFFSET(0x1D8445A0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_2_OFFSET UNITYSDK_OFFSET(0x1D8445C0)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex = 37715;

	class MiHoYoMTRInterface_MTRMsgLooper___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*>*>** StaticGet___9__5_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex)->GetStaticField(0x295A0);
		}
		static ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRMsgLooper___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRMsgLooper___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex)->GetStaticField(0x295A8);
		}
		static ::System::Action_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*>*>** StaticGet___9__5_2()
		{
			return (::System::Action_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex)->GetStaticField(0x295B0);
		}
		static ::System::Action_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*>*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex)->GetStaticField(0x295B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__5_0(::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*>* item)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_0_OFFSET))(this, item);
		}

		::System::Void _Update_b__5_1(::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*>* item)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_1_OFFSET))(this, item);
		}

		::System::Void _Update_b__5_2(::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*>* item)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_2_OFFSET))(this, item);
		}
	};
}
