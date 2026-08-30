#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TASKCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C79A840)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TASKCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C79A8E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TASKCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C78D5E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TASKCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C79A7D0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2TaskCallback_TypeDefinitionIndex = 35955;

	class b2TaskCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TASKCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TASKCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Object* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TASKCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TASKCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
