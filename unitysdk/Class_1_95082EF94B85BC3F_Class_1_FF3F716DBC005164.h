#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_52F51ECF03644FA0.h"
#include "unitysdk/System/Object.h"

class Class_1_95082EF94B85BC3F_Class_1_97CBD1F3BEC51D06;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_95082EF94B85BC3F_CLASS_1_FF3F716DBC005164_METHOD_1_58AFEBEE5BA3C366_OFFSET UNITYSDK_OFFSET(0x10119C70)
#define CLASS_1_95082EF94B85BC3F_CLASS_1_FF3F716DBC005164_METHOD_1_764A278B5595CF95_OFFSET UNITYSDK_OFFSET(0x1011A910)
#define CLASS_1_95082EF94B85BC3F_CLASS_1_FF3F716DBC005164_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x10119E40)
#define CLASS_1_95082EF94B85BC3F_CLASS_1_FF3F716DBC005164_METHOD_1_C6492BD7A887C8A1_OFFSET UNITYSDK_OFFSET(0x1011A6B0)
#define CLASS_1_95082EF94B85BC3F_CLASS_1_FF3F716DBC005164_METHOD_1_E26DAB5A63883F54_OFFSET UNITYSDK_OFFSET(0x1011A440)
#define CLASS_1_95082EF94B85BC3F_CLASS_1_FF3F716DBC005164__CTOR_OFFSET UNITYSDK_OFFSET(0x10119B70)

inline static constexpr unsigned int Class_1_95082EF94B85BC3F_Class_1_FF3F716DBC005164_TypeDefinitionIndex = 52723;

class Class_1_95082EF94B85BC3F_Class_1_FF3F716DBC005164 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Enum_3_52F51ECF03644FA0>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Type*>* Field_1_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::Enum_3_52F51ECF03644FA0, ::Class_1_95082EF94B85BC3F_Class_1_97CBD1F3BEC51D06*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_52F51ECF03644FA0, ::Class_1_95082EF94B85BC3F_Class_1_97CBD1F3BEC51D06*>*))((::PBYTE)hIl2Cpp + CLASS_1_95082EF94B85BC3F_CLASS_1_FF3F716DBC005164__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95082EF94B85BC3F_CLASS_1_FF3F716DBC005164_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::Enum_3_52F51ECF03644FA0 Method_1_E26DAB5A63883F54(::UnityEngine::Object* a1)
	{
		return ((::Enum_3_52F51ECF03644FA0(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_95082EF94B85BC3F_CLASS_1_FF3F716DBC005164_METHOD_1_E26DAB5A63883F54_OFFSET))(this, a1);
	}

	::System::Void Method_1_58AFEBEE5BA3C366(::System::Collections::Generic::Dictionary_2<::Enum_3_52F51ECF03644FA0, ::Class_1_95082EF94B85BC3F_Class_1_97CBD1F3BEC51D06*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_52F51ECF03644FA0, ::Class_1_95082EF94B85BC3F_Class_1_97CBD1F3BEC51D06*>*))((::PBYTE)hIl2Cpp + CLASS_1_95082EF94B85BC3F_CLASS_1_FF3F716DBC005164_METHOD_1_58AFEBEE5BA3C366_OFFSET))(this, a1);
	}

	::UnityEngine::Object* Method_1_C6492BD7A887C8A1(::UnityEngine::GameObject* a1, ::Enum_3_52F51ECF03644FA0& a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_52F51ECF03644FA0&))((::PBYTE)hIl2Cpp + CLASS_1_95082EF94B85BC3F_CLASS_1_FF3F716DBC005164_METHOD_1_C6492BD7A887C8A1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_764A278B5595CF95(::UnityEngine::Object*& a1, ::Enum_3_52F51ECF03644FA0& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*&, ::Enum_3_52F51ECF03644FA0&))((::PBYTE)hIl2Cpp + CLASS_1_95082EF94B85BC3F_CLASS_1_FF3F716DBC005164_METHOD_1_764A278B5595CF95_OFFSET))(this, a1, a2);
	}
};
