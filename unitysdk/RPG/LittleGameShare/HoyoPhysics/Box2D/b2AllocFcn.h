#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ALLOCFCN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AB32DC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ALLOCFCN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AB32E30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ALLOCFCN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AB32DB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ALLOCFCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB32D40)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2AllocFcn_TypeDefinitionIndex = 35091;

	class b2AllocFcn : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ALLOCFCN__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* Invoke(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ALLOCFCN_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ALLOCFCN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::Byte>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ALLOCFCN_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
