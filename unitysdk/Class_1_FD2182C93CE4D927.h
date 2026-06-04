#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_671;
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD2182C93CE4D927_METHOD_1_1352708442940A46_OFFSET UNITYSDK_OFFSET(0x14306CC0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_5C07AC6B562A2160_OFFSET UNITYSDK_OFFSET(0x14305BD0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_6778013C4BE543AA_OFFSET UNITYSDK_OFFSET(0x14306020)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_794372DBC0F29516_OFFSET UNITYSDK_OFFSET(0x143065C0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_7F121A408DC1AB93_OFFSET UNITYSDK_OFFSET(0x14304F30)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_9788B03F21707475_OFFSET UNITYSDK_OFFSET(0x14306EA0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_9A0F2E1BF8D3FADB_OFFSET UNITYSDK_OFFSET(0x14306900)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_B7FB649DB8FD268A_OFFSET UNITYSDK_OFFSET(0x14306FD0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_B9196C576870EF00_OFFSET UNITYSDK_OFFSET(0x143072D0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_B9F28A541C75B6BB_OFFSET UNITYSDK_OFFSET(0x143053D0)
#define CLASS_1_FD2182C93CE4D927_METHOD_1_E4C54787AF0B49EF_OFFSET UNITYSDK_OFFSET(0x14304EA0)
#define CLASS_1_FD2182C93CE4D927__CCTOR_OFFSET UNITYSDK_OFFSET(0x14307480)
#define CLASS_1_FD2182C93CE4D927__CTOR_OFFSET UNITYSDK_OFFSET(0x143049E0)

inline static constexpr unsigned int Class_1_FD2182C93CE4D927_TypeDefinitionIndex = 58355;

class Class_1_FD2182C93CE4D927 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD2182C93CE4D927_TypeDefinitionIndex)->GetStaticField(0x9B30);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD2182C93CE4D927_TypeDefinitionIndex)->GetStaticField(0x9B34);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD2182C93CE4D927_TypeDefinitionIndex)->GetStaticField(0x9B38);
	}
	::Class_0_16E4307DCC419505_671* Field_1_3; // 0x10
	::System::Single Field_1_4; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_671* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_671*))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927__CTOR_OFFSET))(this, a1);
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

	::System::Void Method_1_1352708442940A46(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_1352708442940A46_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7F121A408DC1AB93(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_7F121A408DC1AB93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9788B03F21707475(::System::Object* a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_9788B03F21707475_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B9F28A541C75B6BB(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_B9F28A541C75B6BB_OFFSET))(this, a1);
	}

	::BansheeGz::BGSpline::Curve::BGCurvePoint* Method_1_B9196C576870EF00(::UnityEngine::Vector3 a1)
	{
		return ((::BansheeGz::BGSpline::Curve::BGCurvePoint*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_B9196C576870EF00_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7FB649DB8FD268A(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_FD2182C93CE4D927_METHOD_1_B7FB649DB8FD268A_OFFSET))(this, a1);
	}
};
