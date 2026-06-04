#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx3dListener_Config.h"
#include "unitysdk/CriWare/CriAtomEx_NativeVector.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace CriWare { class CriAtomEx3dRegion; }

#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_CREATE_OFFSET UNITYSDK_OFFSET(0x14689750)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_DESTROY_OFFSET UNITYSDK_OFFSET(0x14689910)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x1468A820)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_RESETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x14689B20)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SET3DREGIONHN_OFFSET UNITYSDK_OFFSET(0x1468A720)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDIRECTIONFOCUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1468A5F0)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDISTANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1468A9A0)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDISTANCEFOCUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1468A4D0)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDOPPLERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1468A130)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETFOCUSPOINT_OFFSET UNITYSDK_OFFSET(0x1468A3C0)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x14689EB0)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x14689C40)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x14689D60)
#define CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14689A20)
#define CRIWARE_CRIATOMEX3DLISTENER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x146897F0)
#define CRIWARE_CRIATOMEX3DLISTENER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146897E0)
#define CRIWARE_CRIATOMEX3DLISTENER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1468A8A0)
#define CRIWARE_CRIATOMEX3DLISTENER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x14689990)
#define CRIWARE_CRIATOMEX3DLISTENER_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x1468A7A0)
#define CRIWARE_CRIATOMEX3DLISTENER_RESETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x14689AA0)
#define CRIWARE_CRIATOMEX3DLISTENER_SET3DREGION_OFFSET UNITYSDK_OFFSET(0x1468A680)
#define CRIWARE_CRIATOMEX3DLISTENER_SETDIRECTIONFOCUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1468A560)
#define CRIWARE_CRIATOMEX3DLISTENER_SETDISTANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x14689F40)
#define CRIWARE_CRIATOMEX3DLISTENER_SETDISTANCEFOCUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1468A440)
#define CRIWARE_CRIATOMEX3DLISTENER_SETDOPPLERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1468A1C0)
#define CRIWARE_CRIATOMEX3DLISTENER_SETFOCUSPOINT_OFFSET UNITYSDK_OFFSET(0x1468A320)
#define CRIWARE_CRIATOMEX3DLISTENER_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x14689DE0)
#define CRIWARE_CRIATOMEX3DLISTENER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x14689BA0)
#define CRIWARE_CRIATOMEX3DLISTENER_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x14689CC0)
#define CRIWARE_CRIATOMEX3DLISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x146899A0)
#define CRIWARE_CRIATOMEX3DLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x14689680)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx3dListener_TypeDefinitionIndex = 37054;

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

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_UPDATE_OFFSET))(this);
		}

		::System::Void ResetParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_RESETPARAMETERS_OFFSET))(this);
		}

		::System::Void SetPosition(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVelocity(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETVELOCITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetOrientation(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETORIENTATION_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetDistanceFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETDISTANCEFACTOR_OFFSET))(this, a1);
		}

		::System::Void SetDopplerMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETDOPPLERMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Void SetFocusPoint(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETFOCUSPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetDistanceFocusLevel(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETDISTANCEFOCUSLEVEL_OFFSET))(this, a1);
		}

		::System::Void SetDirectionFocusLevel(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SETDIRECTIONFOCUSLEVEL_OFFSET))(this, a1);
		}

		::System::Void Set3dRegion(::CriWare::CriAtomEx3dRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_SET3DREGION_OFFSET))(this, a1);
		}

		::System::Boolean IsDestroyable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_ISDESTROYABLE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomEx3dListener_Create(::CriWare::CriAtomEx3dListener_Config& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomEx3dListener_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dListener_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_DESTROY_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dListener_Update(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_UPDATE_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dListener_ResetParameters(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_RESETPARAMETERS_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dListener_SetPosition(::System::IntPtr a1, ::CriWare::CriAtomEx_NativeVector& a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dListener_SetVelocity(::System::IntPtr a1, ::CriWare::CriAtomEx_NativeVector& a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETVELOCITY_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dListener_SetOrientation(::System::IntPtr a1, ::CriWare::CriAtomEx_NativeVector& a2, ::CriWare::CriAtomEx_NativeVector& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETORIENTATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx3dListener_SetDistanceFactor(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDISTANCEFACTOR_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dListener_SetDopplerMultiplier(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDOPPLERMULTIPLIER_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dListener_SetFocusPoint(::System::IntPtr a1, ::CriWare::CriAtomEx_NativeVector& a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomEx_NativeVector&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETFOCUSPOINT_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dListener_SetDistanceFocusLevel(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDISTANCEFOCUSLEVEL_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx3dListener_SetDirectionFocusLevel(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SETDIRECTIONFOCUSLEVEL_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomEx3dListener_IsDestroyable(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_ISDESTROYABLE_OFFSET))(a1);
		}

		static ::System::Void criAtomEx3dListener_Set3dRegionHn(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX3DLISTENER_CRIATOMEX3DLISTENER_SET3DREGIONHN_OFFSET))(a1, a2);
		}
	};
}
