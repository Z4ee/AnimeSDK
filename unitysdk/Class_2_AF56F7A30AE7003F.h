#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/Class_2_AF56F7A30AE7003F_Struct_2_86EDB8070973F6A2.h"
#include "unitysdk/Class_2_AF56F7A30AE7003F_Struct_2_B7D4427E9D58580D.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_AF56F7A30AE7003F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA53820)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_0B945A4B3C62C72E_OFFSET UNITYSDK_OFFSET(0xAA53A00)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_7639D264A770ED5E_OFFSET UNITYSDK_OFFSET(0xAA54130)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0xAA52F90)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_8B05234B876F1D08_OFFSET UNITYSDK_OFFSET(0xAA541B0)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0xAA54070)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0xAA53E60)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_9C36AFA140789703_OFFSET UNITYSDK_OFFSET(0xAA52F20)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0xAA538C0)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET UNITYSDK_OFFSET(0xAA53910)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_ADF4AD3331B4D7AD_3_OFFSET UNITYSDK_OFFSET(0xAA539B0)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xAA53870)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0xAA53A80)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0xAA53960)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_D7E7B17A71976D23_OFFSET UNITYSDK_OFFSET(0xAA53FD0)
#define CLASS_2_AF56F7A30AE7003F_METHOD_2_FAADDAEF90CF8A0E_OFFSET UNITYSDK_OFFSET(0xAA53DD0)
#define CLASS_2_AF56F7A30AE7003F__CTOR_OFFSET UNITYSDK_OFFSET(0xAA54060)
#define CLASS_2_AF56F7A30AE7003F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA540D0)

inline static constexpr unsigned int Class_2_AF56F7A30AE7003F_TypeDefinitionIndex = 56630;

class Class_2_AF56F7A30AE7003F : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_AF56F7A30AE7003F_Struct_2_B7D4427E9D58580D>* Field_2_0; // 0x10
	::Class_1_64D890C466F37235* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_2_AF56F7A30AE7003F_Struct_2_86EDB8070973F6A2>* Field_2_2; // 0x20
	::RPG::Client::MapDef* Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9C36AFA140789703(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_9C36AFA140789703_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_ADF4AD3331B4D7AD_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B945A4B3C62C72E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_0B945A4B3C62C72E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FAADDAEF90CF8A0E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_FAADDAEF90CF8A0E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7E7B17A71976D23(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_D7E7B17A71976D23_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_7B411317D337F87A_OFFSET))(this);
	}

	::System::Void Method_2_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7639D264A770ED5E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_7639D264A770ED5E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B05234B876F1D08(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_AF56F7A30AE7003F_METHOD_2_8B05234B876F1D08_OFFSET))(this, a1, a2, a3);
	}
};
