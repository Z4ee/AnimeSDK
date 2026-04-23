#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_648;
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD2182C93CE4D927_METHOD_1_5C07AC6B562A2160_OFFSET UNITYSDK_OFFSET(0x111A13E0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_6778013C4BE543AA_OFFSET UNITYSDK_OFFSET(0x111A17A0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_794372DBC0F29516_OFFSET UNITYSDK_OFFSET(0x111A1C40)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_7F121A408DC1AB93_OFFSET UNITYSDK_OFFSET(0x111A0760)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0x111A2210)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_9A0F2E1BF8D3FADB_OFFSET UNITYSDK_OFFSET(0x111A1EF0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_B9196C576870EF00_OFFSET UNITYSDK_OFFSET(0x111A26B0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_B9F28A541C75B6BB_OFFSET UNITYSDK_OFFSET(0x111A0BE0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_E4C54787AF0B49EF_OFFSET UNITYSDK_OFFSET(0x111A06D0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_FDCEA86BDA7EFC5E_OFFSET UNITYSDK_OFFSET(0x111A2470)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_FFDAD09A37C2FF6E_OFFSET UNITYSDK_OFFSET(0x111A2340)
#define CLASS_1_FD2182C93CE4D927__CCTOR_OFFSET UNITYSDK_OFFSET(0x111A2860)
#define CLASS_1_FD2182C93CE4D927__CTOR_OFFSET UNITYSDK_OFFSET(0x111A02E0)

inline static constexpr unsigned int Class_1_FD2182C93CE4D927_TypeDefinitionIndex = 57543;

class Class_1_FD2182C93CE4D927 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD2182C93CE4D927_TypeDefinitionIndex)->GetStaticField(0x69A0);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD2182C93CE4D927_TypeDefinitionIndex)->GetStaticField(0x69A4);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD2182C93CE4D927_TypeDefinitionIndex)->GetStaticField(0x69A8);
	}
	::Class_0_16E4307DCC419505_648* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_648* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_648*))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927__CCTOR_OFFSET))();
	}

	::System::Void Method_1_E4C54787AF0B49EF(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_E4C54787AF0B49EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C07AC6B562A2160(::UnityEngine::Color a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_5C07AC6B562A2160_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6778013C4BE543AA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_6778013C4BE543AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_794372DBC0F29516(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_794372DBC0F29516_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A0F2E1BF8D3FADB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_9A0F2E1BF8D3FADB_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7F121A408DC1AB93(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_7F121A408DC1AB93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FFDAD09A37C2FF6E(::System::Object* a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_FFDAD09A37C2FF6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B9F28A541C75B6BB(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_B9F28A541C75B6BB_OFFSET))(this, a1);
	}

	::BansheeGz::BGSpline::Curve::BGCurvePoint* Method_1_B9196C576870EF00(::UnityEngine::Vector3 a1)
	{
		return ((::BansheeGz::BGSpline::Curve::BGCurvePoint*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_B9196C576870EF00_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDCEA86BDA7EFC5E(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_FDCEA86BDA7EFC5E_OFFSET))(this, a1);
	}
};
