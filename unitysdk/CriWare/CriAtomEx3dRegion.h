#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"

#define CRIWARE_CRIATOMEX3DREGION_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1CB82F30)
#define CRIWARE_CRIATOMEX3DREGION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB82F20)
#define CRIWARE_CRIATOMEX3DREGION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CB830D0)
#define CRIWARE_CRIATOMEX3DREGION_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1CB832D0)
#define CRIWARE_CRIATOMEX3DREGION_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x1CB831D0)
#define CRIWARE_CRIATOMEX3DREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB82DC0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dRegion_TypeDefinitionIndex = 38719;

	class CriAtomEx3dRegion : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_FINALIZE_OFFSET))(this);
		}

		::System::Boolean IsDestroyable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_ISDESTROYABLE_OFFSET))(this);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_GET_NATIVEHANDLE_OFFSET))(this);
		}
	};
}
