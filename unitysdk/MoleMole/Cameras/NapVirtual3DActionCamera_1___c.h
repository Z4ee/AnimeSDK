#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
template <typename T> class Class_2_5243143C1CFA9367;

#define MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1___C_METHOD_1_AC453DDC739C1C5A_OFFSET UNITYSDK_OFFSET(0x167EC8E0)
#define MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167EC890)
#define MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167EC8D0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtual3DActionCamera_1___c_TypeDefinitionIndex = 62850;

	class NapVirtual3DActionCamera_1___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::Single, ::Class_2_5243143C1CFA9367<::System::Single>*, ::System::Single>** StaticGet___9__77_0()
		{
			return (::System::Func_3<::System::Single, ::Class_2_5243143C1CFA9367<::System::Single>*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapVirtual3DActionCamera_1___c_TypeDefinitionIndex)->GetStaticField(0x3C720);
		}
		static ::MoleMole::Cameras::NapVirtual3DActionCamera_1___c** StaticGet___9()
		{
			return (::MoleMole::Cameras::NapVirtual3DActionCamera_1___c**)Il2CppClass::FromTypeDefinitionIndex(NapVirtual3DActionCamera_1___c_TypeDefinitionIndex)->GetStaticField(0x3C728);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1___C__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_AC453DDC739C1C5A(::System::Single a1, ::Class_2_5243143C1CFA9367<::System::Single>* a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Class_2_5243143C1CFA9367<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1___C_METHOD_1_AC453DDC739C1C5A_OFFSET))(this, a1, a2);
		}
	};
}
