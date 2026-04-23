#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriErrorNotifier_Callback; }
namespace System { class String; }

#define CRIWARE_CRIERRORNOTIFIER_ADD_ONCALLBACKTHREADUNSAFE_OFFSET UNITYSDK_OFFSET(0x12C01BD0)
#define CRIWARE_CRIERRORNOTIFIER_ADD__ONCALLBACKTHREADUNSAFE_OFFSET UNITYSDK_OFFSET(0x12C01A90)
#define CRIWARE_CRIERRORNOTIFIER_CALLEVENT_OFFSET UNITYSDK_OFFSET(0x12C02370)
#define CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x12C01950)
#define CRIWARE_CRIERRORNOTIFIER_ISREGISTERED_OFFSET UNITYSDK_OFFSET(0x12C02200)
#define CRIWARE_CRIERRORNOTIFIER_REMOVE_ONCALLBACKTHREADUNSAFE_OFFSET UNITYSDK_OFFSET(0x12C01FB0)
#define CRIWARE_CRIERRORNOTIFIER_REMOVE__ONCALLBACKTHREADUNSAFE_OFFSET UNITYSDK_OFFSET(0x12C01B30)
#define CRIWARE_CRIERRORNOTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C029E0)

namespace CriWare
{
	inline static constexpr unsigned int CriErrorNotifier_TypeDefinitionIndex = 36885;

	class CriErrorNotifier : public ::System::Object
	{
	public:
		static ::CriWare::CriErrorNotifier_Callback** StaticGet__onCallbackThreadUnsafe()
		{
			return (::CriWare::CriErrorNotifier_Callback**)Il2CppClass::FromTypeDefinitionIndex(CriErrorNotifier_TypeDefinitionIndex)->GetStaticField(0xBCF0);
		}
		static ::System::Object** StaticGet_objectLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CriErrorNotifier_TypeDefinitionIndex)->GetStaticField(0xBCF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER__CCTOR_OFFSET))();
		}

		static ::System::Void add__onCallbackThreadUnsafe(::CriWare::CriErrorNotifier_Callback* value)
		{
			return ((::System::Void(*)(::CriWare::CriErrorNotifier_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ADD__ONCALLBACKTHREADUNSAFE_OFFSET))(value);
		}

		static ::System::Void remove__onCallbackThreadUnsafe(::CriWare::CriErrorNotifier_Callback* value)
		{
			return ((::System::Void(*)(::CriWare::CriErrorNotifier_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_REMOVE__ONCALLBACKTHREADUNSAFE_OFFSET))(value);
		}

		static ::System::Void add_OnCallbackThreadUnsafe(::CriWare::CriErrorNotifier_Callback* value)
		{
			return ((::System::Void(*)(::CriWare::CriErrorNotifier_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ADD_ONCALLBACKTHREADUNSAFE_OFFSET))(value);
		}

		static ::System::Void remove_OnCallbackThreadUnsafe(::CriWare::CriErrorNotifier_Callback* value)
		{
			return ((::System::Void(*)(::CriWare::CriErrorNotifier_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_REMOVE_ONCALLBACKTHREADUNSAFE_OFFSET))(value);
		}

		static ::System::Boolean IsRegistered(::CriWare::CriErrorNotifier_Callback* target)
		{
			return ((::System::Boolean(*)(::CriWare::CriErrorNotifier_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ISREGISTERED_OFFSET))(target);
		}

		static ::System::Void CallEvent(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_CALLEVENT_OFFSET))(message);
		}

		static ::System::Void ErrorCallbackFromNative(::System::IntPtr errmsgPtr, ::System::UInt32 p1, ::System::UInt32 p2, ::System::IntPtr parray)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFROMNATIVE_OFFSET))(errmsgPtr, p1, p2, parray);
		}
	};
}
