#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2TaskCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ENQUEUETASKCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C325D70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ENQUEUETASKCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C325E00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ENQUEUETASKCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C314F20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ENQUEUETASKCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C325CF0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2EnqueueTaskCallback_TypeDefinitionIndex = 35956;

	class b2EnqueueTaskCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ENQUEUETASKCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke(::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Object* a4, ::System::Object* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback*, ::System::Int32, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ENQUEUETASKCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Object* a4, ::System::Object* a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback*, ::System::Int32, ::System::Int32, ::System::Object*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ENQUEUETASKCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ENQUEUETASKCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
