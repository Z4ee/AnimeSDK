#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FREEFCN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C799E10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FREEFCN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C799E40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FREEFCN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C799E00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FREEFCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C799D90)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2FreeFcn_TypeDefinitionIndex = 35953;

	class b2FreeFcn : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FREEFCN__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FREEFCN_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FREEFCN_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FREEFCN_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
