#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx3dRegion_Config.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMEX3DREGION_UNSAFENATIVEMETHODS_CRIATOMEX3DREGION_CREATE_OFFSET UNITYSDK_OFFSET(0x1AEEC910)
#define CRIWARE_CRIATOMEX3DREGION_UNSAFENATIVEMETHODS_CRIATOMEX3DREGION_DESTROY_OFFSET UNITYSDK_OFFSET(0x1AEECAD0)
#define CRIWARE_CRIATOMEX3DREGION_UNSAFENATIVEMETHODS_CRIATOMEX3DREGION_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x1AEECCD0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dRegion_UnsafeNativeMethods_TypeDefinitionIndex = 37862;

	class CriAtomEx3dRegion_UnsafeNativeMethods : public ::System::Object
	{
	public:
		static ::System::IntPtr criAtomEx3dRegion_Create(::CriWare::CriAtomEx3dRegion_Config& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomEx3dRegion_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_UNSAFENATIVEMETHODS_CRIATOMEX3DREGION_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dRegion_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_UNSAFENATIVEMETHODS_CRIATOMEX3DREGION_DESTROY_OFFSET))(a1);
		}

		static ::System::Boolean criAtomEx3dRegion_IsDestroyable(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_UNSAFENATIVEMETHODS_CRIATOMEX3DREGION_ISDESTROYABLE_OFFSET))(a1);
		}
	};
}
