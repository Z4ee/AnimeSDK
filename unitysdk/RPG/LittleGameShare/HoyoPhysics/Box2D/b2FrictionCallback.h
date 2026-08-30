#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FRICTIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C3260B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FRICTIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C326160)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FRICTIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C326080)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FRICTIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C326010)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2FrictionCallback_TypeDefinitionIndex = 35958;

	class b2FrictionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FRICTIONCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke(::System::Single a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FRICTIONCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FRICTIONCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Single EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FRICTIONCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
