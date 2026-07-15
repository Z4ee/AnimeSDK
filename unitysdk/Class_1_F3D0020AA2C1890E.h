#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_706;
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F3D0020AA2C1890E_METHOD_1_1352708442940A46_OFFSET UNITYSDK_OFFSET(0x16721E20)
#define CLASS_1_F3D0020AA2C1890E_METHOD_1_52C117739DCB195E_OFFSET UNITYSDK_OFFSET(0x1671F680)
#define CLASS_1_F3D0020AA2C1890E_METHOD_1_5C07AC6B562A2160_OFFSET UNITYSDK_OFFSET(0x16720800)
#define CLASS_1_F3D0020AA2C1890E_METHOD_1_6778013C4BE543AA_OFFSET UNITYSDK_OFFSET(0x16720D40)
#define CLASS_1_F3D0020AA2C1890E_METHOD_1_9788B03F21707475_OFFSET UNITYSDK_OFFSET(0x167220B0)
#define CLASS_1_F3D0020AA2C1890E_METHOD_1_9A0F2E1BF8D3FADB_OFFSET UNITYSDK_OFFSET(0x16721960)
#define CLASS_1_F3D0020AA2C1890E_METHOD_1_B7FB649DB8FD268A_OFFSET UNITYSDK_OFFSET(0x167221E0)
#define CLASS_1_F3D0020AA2C1890E_METHOD_1_B9196C576870EF00_OFFSET UNITYSDK_OFFSET(0x167225E0)
#define CLASS_1_F3D0020AA2C1890E_METHOD_1_B9F28A541C75B6BB_OFFSET UNITYSDK_OFFSET(0x1671FC80)
#define CLASS_1_F3D0020AA2C1890E_METHOD_1_DC497FA458BA0CAA_OFFSET UNITYSDK_OFFSET(0x16721520)
#define CLASS_1_F3D0020AA2C1890E_METHOD_1_E4C54787AF0B49EF_OFFSET UNITYSDK_OFFSET(0x1671F5F0)
#define CLASS_1_F3D0020AA2C1890E__CCTOR_OFFSET UNITYSDK_OFFSET(0x167227F0)
#define CLASS_1_F3D0020AA2C1890E__CTOR_OFFSET UNITYSDK_OFFSET(0x1671F010)

inline static constexpr unsigned int Class_1_F3D0020AA2C1890E_TypeDefinitionIndex = 59617;

class Class_1_F3D0020AA2C1890E : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3D0020AA2C1890E_TypeDefinitionIndex)->GetStaticField(0x7300);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3D0020AA2C1890E_TypeDefinitionIndex)->GetStaticField(0x7304);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3D0020AA2C1890E_TypeDefinitionIndex)->GetStaticField(0x7308);
	}
	::Class_0_16E4307DCC419505_706* Field_1_3; // 0x10
	::System::Single Field_1_4; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_706* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_706*))((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E__CCTOR_OFFSET))();
	}

	::System::Void Method_1_E4C54787AF0B49EF(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E_METHOD_1_E4C54787AF0B49EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C07AC6B562A2160(::UnityEngine::Color a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E_METHOD_1_5C07AC6B562A2160_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6778013C4BE543AA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E_METHOD_1_6778013C4BE543AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_DC497FA458BA0CAA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E_METHOD_1_DC497FA458BA0CAA_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A0F2E1BF8D3FADB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E_METHOD_1_9A0F2E1BF8D3FADB_OFFSET))(this, a1);
	}

	::System::Void Method_1_1352708442940A46(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E_METHOD_1_1352708442940A46_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_52C117739DCB195E(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E_METHOD_1_52C117739DCB195E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9788B03F21707475(::System::Object* a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E_METHOD_1_9788B03F21707475_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B9F28A541C75B6BB(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E_METHOD_1_B9F28A541C75B6BB_OFFSET))(this, a1);
	}

	::BansheeGz::BGSpline::Curve::BGCurvePoint* Method_1_B9196C576870EF00(::UnityEngine::Vector3 a1)
	{
		return ((::BansheeGz::BGSpline::Curve::BGCurvePoint*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E_METHOD_1_B9196C576870EF00_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7FB649DB8FD268A(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_F3D0020AA2C1890E_METHOD_1_B7FB649DB8FD268A_OFFSET))(this, a1);
	}
};
