#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FINISHTASKCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C325F00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FINISHTASKCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C325F40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FINISHTASKCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C314F10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FINISHTASKCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C325E10)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2FinishTaskCallback_TypeDefinitionIndex = 35957;

	class b2FinishTaskCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FINISHTASKCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FINISHTASKCALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FINISHTASKCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FINISHTASKCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
