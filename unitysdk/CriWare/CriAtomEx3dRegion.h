#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"

#define CRIWARE_CRIATOMEX3DREGION_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FBA9C80)
#define CRIWARE_CRIATOMEX3DREGION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FBA9C70)
#define CRIWARE_CRIATOMEX3DREGION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FBA9DE0)
#define CRIWARE_CRIATOMEX3DREGION_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1FBA9F10)
#define CRIWARE_CRIATOMEX3DREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBA9B80)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dRegion_TypeDefinitionIndex = 34937;

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

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_FINALIZE_OFFSET))(this);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DREGION_GET_NATIVEHANDLE_OFFSET))(this);
		}
	};
}
