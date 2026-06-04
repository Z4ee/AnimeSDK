#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriErrorNotifier_Callback; }
namespace System { class String; }

#define CRIWARE_CRIERRORNOTIFIER_ADD_ONCALLBACKTHREADUNSAFE_OFFSET UNITYSDK_OFFSET(0x146BCEE0)
#define CRIWARE_CRIERRORNOTIFIER_ADD__ONCALLBACKTHREADUNSAFE_OFFSET UNITYSDK_OFFSET(0x146BCDA0)
#define CRIWARE_CRIERRORNOTIFIER_CALLEVENT_OFFSET UNITYSDK_OFFSET(0x146BD680)
#define CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x146BCC60)
#define CRIWARE_CRIERRORNOTIFIER_ISREGISTERED_OFFSET UNITYSDK_OFFSET(0x146BD510)
#define CRIWARE_CRIERRORNOTIFIER_REMOVE_ONCALLBACKTHREADUNSAFE_OFFSET UNITYSDK_OFFSET(0x146BD2C0)
#define CRIWARE_CRIERRORNOTIFIER_REMOVE__ONCALLBACKTHREADUNSAFE_OFFSET UNITYSDK_OFFSET(0x146BCE40)
#define CRIWARE_CRIERRORNOTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x146BD7B0)

namespace CriWare
{
	inline static constexpr unsigned int CriErrorNotifier_TypeDefinitionIndex = 37185;

	class CriErrorNotifier : public ::System::Object
	{
	public:
		static ::CriWare::CriErrorNotifier_Callback** StaticGet__onCallbackThreadUnsafe()
		{
			return (::CriWare::CriErrorNotifier_Callback**)Il2CppClass::FromTypeDefinitionIndex(CriErrorNotifier_TypeDefinitionIndex)->GetStaticField(0x7690);
		}
		static ::System::Object** StaticGet_objectLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CriErrorNotifier_TypeDefinitionIndex)->GetStaticField(0x7698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER__CCTOR_OFFSET))();
		}

		static ::System::Void add__onCallbackThreadUnsafe(::CriWare::CriErrorNotifier_Callback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriErrorNotifier_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ADD__ONCALLBACKTHREADUNSAFE_OFFSET))(a1);
		}

		static ::System::Void remove__onCallbackThreadUnsafe(::CriWare::CriErrorNotifier_Callback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriErrorNotifier_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_REMOVE__ONCALLBACKTHREADUNSAFE_OFFSET))(a1);
		}

		static ::System::Void add_OnCallbackThreadUnsafe(::CriWare::CriErrorNotifier_Callback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriErrorNotifier_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ADD_ONCALLBACKTHREADUNSAFE_OFFSET))(a1);
		}

		static ::System::Void remove_OnCallbackThreadUnsafe(::CriWare::CriErrorNotifier_Callback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriErrorNotifier_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_REMOVE_ONCALLBACKTHREADUNSAFE_OFFSET))(a1);
		}

		static ::System::Boolean IsRegistered(::CriWare::CriErrorNotifier_Callback* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriErrorNotifier_Callback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ISREGISTERED_OFFSET))(a1);
		}

		static ::System::Void CallEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_CALLEVENT_OFFSET))(a1);
		}

		static ::System::Void ErrorCallbackFromNative(::System::IntPtr a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::IntPtr a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIERRORNOTIFIER_ERRORCALLBACKFROMNATIVE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
