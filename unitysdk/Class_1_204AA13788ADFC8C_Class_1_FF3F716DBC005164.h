#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_52F51ECF03644FA0.h"
#include "unitysdk/System/Object.h"

class Class_1_204AA13788ADFC8C_Class_1_CEBA4B35D1826999;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_204AA13788ADFC8C_CLASS_1_FF3F716DBC005164_METHOD_1_58AFEBEE5BA3C366_OFFSET UNITYSDK_OFFSET(0x12D6AA90)
#define CLASS_1_204AA13788ADFC8C_CLASS_1_FF3F716DBC005164_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x12D6AC60)
#define CLASS_1_204AA13788ADFC8C_CLASS_1_FF3F716DBC005164_METHOD_1_764A278B5595CF95_OFFSET UNITYSDK_OFFSET(0x12D6B740)
#define CLASS_1_204AA13788ADFC8C_CLASS_1_FF3F716DBC005164_METHOD_1_C6492BD7A887C8A1_OFFSET UNITYSDK_OFFSET(0x12D6B270)
#define CLASS_1_204AA13788ADFC8C_CLASS_1_FF3F716DBC005164_METHOD_1_E26DAB5A63883F54_OFFSET UNITYSDK_OFFSET(0x12D6B4D0)
#define CLASS_1_204AA13788ADFC8C_CLASS_1_FF3F716DBC005164__CTOR_OFFSET UNITYSDK_OFFSET(0x12D6A990)

inline static constexpr unsigned int Class_1_204AA13788ADFC8C_Class_1_FF3F716DBC005164_TypeDefinitionIndex = 44947;

class Class_1_204AA13788ADFC8C_Class_1_FF3F716DBC005164 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Type*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Enum_3_52F51ECF03644FA0>* Field_1_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::Enum_3_52F51ECF03644FA0, ::Class_1_204AA13788ADFC8C_Class_1_CEBA4B35D1826999*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_52F51ECF03644FA0, ::Class_1_204AA13788ADFC8C_Class_1_CEBA4B35D1826999*>*))((::PBYTE)hIl2Cpp + CLASS_1_204AA13788ADFC8C_CLASS_1_FF3F716DBC005164__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_58AFEBEE5BA3C366(::System::Collections::Generic::Dictionary_2<::Enum_3_52F51ECF03644FA0, ::Class_1_204AA13788ADFC8C_Class_1_CEBA4B35D1826999*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_52F51ECF03644FA0, ::Class_1_204AA13788ADFC8C_Class_1_CEBA4B35D1826999*>*))((::PBYTE)hIl2Cpp + CLASS_1_204AA13788ADFC8C_CLASS_1_FF3F716DBC005164_METHOD_1_58AFEBEE5BA3C366_OFFSET))(this, a1);
	}

	::UnityEngine::Object* Method_1_C6492BD7A887C8A1(::UnityEngine::GameObject* a1, ::Enum_3_52F51ECF03644FA0& a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_52F51ECF03644FA0&))((::PBYTE)hIl2Cpp + CLASS_1_204AA13788ADFC8C_CLASS_1_FF3F716DBC005164_METHOD_1_C6492BD7A887C8A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_204AA13788ADFC8C_CLASS_1_FF3F716DBC005164_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::Enum_3_52F51ECF03644FA0 Method_1_E26DAB5A63883F54(::UnityEngine::Object* a1)
	{
		return ((::Enum_3_52F51ECF03644FA0(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_204AA13788ADFC8C_CLASS_1_FF3F716DBC005164_METHOD_1_E26DAB5A63883F54_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_764A278B5595CF95(::UnityEngine::Object*& a1, ::Enum_3_52F51ECF03644FA0& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*&, ::Enum_3_52F51ECF03644FA0&))((::PBYTE)hIl2Cpp + CLASS_1_204AA13788ADFC8C_CLASS_1_FF3F716DBC005164_METHOD_1_764A278B5595CF95_OFFSET))(this, a1, a2);
	}
};
