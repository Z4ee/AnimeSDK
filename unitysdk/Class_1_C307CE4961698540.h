#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FC34C7AD15A42B48.h"
#include "unitysdk/System/Object.h"

class Class_1_C307CE4961698540_Class_1_482502C266376951;
class Class_1_C307CE4961698540_Class_1_D90CE8ED9755F51B;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C307CE4961698540_METHOD_1_013926162A659A12_OFFSET UNITYSDK_OFFSET(0x16F31F80)
#define CLASS_1_C307CE4961698540_METHOD_1_21631744E68FDB6A_OFFSET UNITYSDK_OFFSET(0x16F30580)
#define CLASS_1_C307CE4961698540_METHOD_1_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0x16F305A0)
#define CLASS_1_C307CE4961698540_METHOD_1_7988DEE4269AA768_OFFSET UNITYSDK_OFFSET(0x16F32240)
#define CLASS_1_C307CE4961698540_METHOD_1_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x16F30A40)
#define CLASS_1_C307CE4961698540_METHOD_1_A08201F1146EB921_OFFSET UNITYSDK_OFFSET(0x16F31830)
#define CLASS_1_C307CE4961698540_METHOD_1_D0E53075DC0F77B9_OFFSET UNITYSDK_OFFSET(0x16F31580)
#define CLASS_1_C307CE4961698540_METHOD_1_D8566E51A13A5F70_OFFSET UNITYSDK_OFFSET(0x16F302E0)
#define CLASS_1_C307CE4961698540_METHOD_1_E665B6DBFA4CE79A_OFFSET UNITYSDK_OFFSET(0x16F31DB0)
#define CLASS_1_C307CE4961698540_METHOD_1_E66F6D4248044B85_OFFSET UNITYSDK_OFFSET(0x16F32470)
#define CLASS_1_C307CE4961698540_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x16F30E70)
#define CLASS_1_C307CE4961698540_METHOD_1_F436B90098659432_OFFSET UNITYSDK_OFFSET(0x16F31250)
#define CLASS_1_C307CE4961698540__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F302D0)
#define CLASS_1_C307CE4961698540__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2FF80)

inline static constexpr unsigned int Class_1_C307CE4961698540_TypeDefinitionIndex = 67086;

class Class_1_C307CE4961698540 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C307CE4961698540_TypeDefinitionIndex)->GetStaticField(0xF4B0);
	}
	::UnityEngine::GameObject* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_FC34C7AD15A42B48, ::Class_1_C307CE4961698540_Class_1_D90CE8ED9755F51B*>* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::Struct_2_FC34C7AD15A42B48, ::UnityEngine::Transform*>* Field_1_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::Struct_2_FC34C7AD15A42B48, ::Class_1_C307CE4961698540_Class_1_482502C266376951*>* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::Struct_2_FC34C7AD15A42B48, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* Field_1_11; // 0x30
	::System::Collections::Generic::List_1<::System::Type*>* Field_1_10; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540__CCTOR_OFFSET))();
	}

	static ::Struct_2_FC34C7AD15A42B48 Method_1_D8566E51A13A5F70(::MoleMole::UIBaseController* a1)
	{
		return ((::Struct_2_FC34C7AD15A42B48(*)(::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_METHOD_1_D8566E51A13A5F70_OFFSET))(a1);
	}

	::UnityEngine::Transform* Method_1_21631744E68FDB6A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_METHOD_1_21631744E68FDB6A_OFFSET))(this);
	}

	::System::Void Method_1_73052712910A9EE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_METHOD_1_73052712910A9EE7_OFFSET))(this);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_F436B90098659432(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_METHOD_1_F436B90098659432_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_D0E53075DC0F77B9(::Struct_2_FC34C7AD15A42B48 a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::Struct_2_FC34C7AD15A42B48, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_METHOD_1_D0E53075DC0F77B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A08201F1146EB921(::Struct_2_FC34C7AD15A42B48 a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FC34C7AD15A42B48, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_METHOD_1_A08201F1146EB921_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_E665B6DBFA4CE79A(::Struct_2_FC34C7AD15A42B48 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FC34C7AD15A42B48))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_METHOD_1_E665B6DBFA4CE79A_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_013926162A659A12(::Struct_2_FC34C7AD15A42B48 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::Struct_2_FC34C7AD15A42B48))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_METHOD_1_013926162A659A12_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_METHOD_1_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_1_7988DEE4269AA768(::MoleMole::UIWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_METHOD_1_7988DEE4269AA768_OFFSET))(this, a1);
	}

	::System::Void Method_1_E66F6D4248044B85(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C307CE4961698540_METHOD_1_E66F6D4248044B85_OFFSET))(this, a1);
	}
};
