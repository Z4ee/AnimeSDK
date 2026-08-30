#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ASSERTFCN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C325990)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ASSERTFCN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C325A00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ASSERTFCN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C325970)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ASSERTFCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3258F0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2AssertFcn_TypeDefinitionIndex = 35954;

	class b2AssertFcn : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ASSERTFCN__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ASSERTFCN_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ASSERTFCN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ASSERTFCN_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
