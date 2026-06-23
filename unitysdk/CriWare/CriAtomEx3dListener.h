#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx3dListener_Config.h"
#include "unitysdk/CriWare/CriAtomEx_NativeVector.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace CriWare { class CriAtomEx3dRegion; }

#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E4A3F20)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E4A4120)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SET3DREGIONHN_OFFSET UNITYSDK_OFFSET(0x1E4A46F0)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E4A45C0)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1E4A4350)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E4A4470)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E4A4230)
#define CRIWARE_CRIATOMEX3DLISTENER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E4A3FC0)
#define CRIWARE_CRIATOMEX3DLISTENER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E4A3FB0)
#define CRIWARE_CRIATOMEX3DLISTENER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E4A4770)
#define CRIWARE_CRIATOMEX3DLISTENER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1E4A41A0)
#define CRIWARE_CRIATOMEX3DLISTENER_SET3DREGION_OFFSET UNITYSDK_OFFSET(0x1E4A4650)
#define CRIWARE_CRIATOMEX3DLISTENER_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E4A44F0)
#define CRIWARE_CRIATOMEX3DLISTENER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1E4A42B0)
#define CRIWARE_CRIATOMEX3DLISTENER_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x1E4A43D0)
#define CRIWARE_CRIATOMEX3DLISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E4A41B0)
#define CRIWARE_CRIATOMEX3DLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A3E30)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dListener_TypeDefinitionIndex = 34283;

	class CriAtomEx3dListener : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_UPDATE_OFFSET))(this);
		}

		::System::Void SetPosition(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETPOSITION_OFFSET))(this, x, y, z);
		}

		::System::Void SetVelocity(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETVELOCITY_OFFSET))(this, x, y, z);
		}

		::System::Void SetOrientation(::System::Single fx, ::System::Single fy, ::System::Single fz, ::System::Single ux, ::System::Single uy, ::System::Single uz)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETORIENTATION_OFFSET))(this, fx, fy, fz, ux, uy, uz);
		}

		::System::Void Set3dRegion(::CriWare::CriAtomEx3dRegion* region3d)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SET3DREGION_OFFSET))(this, region3d);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomEx3dListener_Create(::CriWare::CriAtomEx3dListener_Config& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomEx3dListener_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_CREATE_OFFSET))(config, work, work_size);
		}

		static ::System::Void criAtomEx3dListener_Destroy(::System::IntPtr ex_3d_listener)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_DESTROY_OFFSET))(ex_3d_listener);
		}

		static ::System::Void criAtomEx3dListener_Update(::System::IntPtr ex_3d_listener)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_UPDATE_OFFSET))(ex_3d_listener);
		}

		static ::System::Void criAtomEx3dListener_SetPosition(::System::IntPtr ex_3d_listener, ::CriWare::CriAtomEx_NativeVector& position)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETPOSITION_OFFSET))(ex_3d_listener, position);
		}

		static ::System::Void criAtomEx3dListener_SetVelocity(::System::IntPtr ex_3d_listener, ::CriWare::CriAtomEx_NativeVector& velocity)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETVELOCITY_OFFSET))(ex_3d_listener, velocity);
		}

		static ::System::Void criAtomEx3dListener_SetOrientation(::System::IntPtr ex_3d_listener, ::CriWare::CriAtomEx_NativeVector& front, ::CriWare::CriAtomEx_NativeVector& top)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETORIENTATION_OFFSET))(ex_3d_listener, front, top);
		}

		static ::System::Void criAtomEx3dListener_Set3dRegionHn(::System::IntPtr ex_3d_listener, ::System::IntPtr ex_3d_region)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SET3DREGIONHN_OFFSET))(ex_3d_listener, ex_3d_region);
		}
	};
}
