#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UICAMERAATOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x87F390)
#define MOLEMOLE_UICAMERAATOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x87F360)
#define MOLEMOLE_UICAMERAATOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x87F480)
#define MOLEMOLE_UICAMERAATOM_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1853CDC0)
#define MOLEMOLE_UICAMERAATOM_GET_FOV_OFFSET UNITYSDK_OFFSET(0x324CC0)
#define MOLEMOLE_UICAMERAATOM_GET_POS_OFFSET UNITYSDK_OFFSET(0x41FCD0)
#define MOLEMOLE_UICAMERAATOM_GET_ROT_OFFSET UNITYSDK_OFFSET(0x41E4B0)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_128A3A066D9C08E3_1_OFFSET UNITYSDK_OFFSET(0x1853E170)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_128A3A066D9C08E3_OFFSET UNITYSDK_OFFSET(0x1853DC50)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x87F510)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_500BD849996697EA_OFFSET UNITYSDK_OFFSET(0x87F680)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_5C84E6237E32B708_OFFSET UNITYSDK_OFFSET(0x1853D310)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_615E1E979D709B9B_OFFSET UNITYSDK_OFFSET(0x1853D5A0)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x87F5A0)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_70B33D50DE73FA8B_OFFSET UNITYSDK_OFFSET(0x1853DF10)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x87F610)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_B2FBAC43FA08C2C9_OFFSET UNITYSDK_OFFSET(0x87F740)
#define MOLEMOLE_UICAMERAATOM_METHOD_2_D3A27E093B03BCB3_OFFSET UNITYSDK_OFFSET(0x1853D9C0)
#define MOLEMOLE_UICAMERAATOM_SET_FOV_OFFSET UNITYSDK_OFFSET(0x324A50)
#define MOLEMOLE_UICAMERAATOM_SET_POS_OFFSET UNITYSDK_OFFSET(0x826A80)
#define MOLEMOLE_UICAMERAATOM_SET_ROT_OFFSET UNITYSDK_OFFSET(0x56EA80)
#define MOLEMOLE_UICAMERAATOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x87F500)

namespace MoleMole
{
	inline static constexpr unsigned int UICameraAtom_TypeDefinitionIndex = 57897;

	struct alignas(4) UICameraAtom
	{
		::System::Single _Fov_k__BackingField; // 0x10
		::UnityEngine::Vector3 _Pos_k__BackingField; // 0x14
		::UnityEngine::Quaternion _Rot_k__BackingField; // 0x20

		::System::Single get_Fov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GET_FOV_OFFSET))(this);
		}

		::System::Void set_Fov(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_SET_FOV_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Pos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_SET_POS_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_Rot()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GET_ROT_OFFSET))(this);
		}

		::System::Void set_Rot(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_SET_ROT_OFFSET))(this, a1);
		}

		static ::MoleMole::UICameraAtom get_Default()
		{
			return ((::MoleMole::UICameraAtom(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean Equals(::MoleMole::UICameraAtom a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_TOSTRING_OFFSET))(this);
		}

		static ::MoleMole::UICameraAtom Method_2_5C84E6237E32B708(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2, ::System::Single a3)
		{
			return ((::MoleMole::UICameraAtom(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_5C84E6237E32B708_OFFSET))(a1, a2, a3);
		}

		::System::String* Method_2_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
		}

		static ::MoleMole::UICameraAtom Method_2_615E1E979D709B9B(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
		{
			return ((::MoleMole::UICameraAtom(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_615E1E979D709B9B_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
		}

		::System::Int32 Method_2_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_95780ED94B90ED36_OFFSET))(this);
		}

		::System::Boolean Method_2_500BD849996697EA(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_500BD849996697EA_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::UICameraAtom Method_2_D3A27E093B03BCB3(::MoleMole::UICameraAtom a1, ::System::Single a2)
		{
			return ((::MoleMole::UICameraAtom(*)(::MoleMole::UICameraAtom, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_D3A27E093B03BCB3_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_128A3A066D9C08E3(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
		{
			return ((::System::Boolean(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_128A3A066D9C08E3_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_B2FBAC43FA08C2C9(::MoleMole::UICameraAtom a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICameraAtom, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_B2FBAC43FA08C2C9_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::UICameraAtom Method_2_70B33D50DE73FA8B(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
		{
			return ((::MoleMole::UICameraAtom(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_70B33D50DE73FA8B_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_128A3A066D9C08E3_1(::MoleMole::UICameraAtom a1, ::MoleMole::UICameraAtom a2)
		{
			return ((::System::Boolean(*)(::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAATOM_METHOD_2_128A3A066D9C08E3_1_OFFSET))(a1, a2);
		}
	};
}
