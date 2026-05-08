#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx3dRegion_Config.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMEX3DREGION_UNSAFENATIVEMETHODS_CRIATOMEX3DREGION_CREATE_OFFSET UNITYSDK_OFFSET(0x1BFECF20)
#define CRIWARE_CRIATOMEX3DREGION_UNSAFENATIVEMETHODS_CRIATOMEX3DREGION_DESTROY_OFFSET UNITYSDK_OFFSET(0x1BFECFB0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dRegion_UnsafeNativeMethods_TypeDefinitionIndex = 32739;

	class CriAtomEx3dRegion_UnsafeNativeMethods : public ::System::Object
	{
	public:
		static ::System::IntPtr criAtomEx3dRegion_Create(::CriWare::CriAtomEx3dRegion_Config& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomEx3dRegion_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_UNSAFENATIVEMETHODS_CRIATOMEX3DREGION_CREATE_OFFSET))(config, work, work_size);
		}

		static ::System::Void criAtomEx3dRegion_Destroy(::System::IntPtr ex_3d_region)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_UNSAFENATIVEMETHODS_CRIATOMEX3DREGION_DESTROY_OFFSET))(ex_3d_region);
		}
	};
}
