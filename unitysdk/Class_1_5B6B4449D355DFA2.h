#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1057;
class Class_0_16E4307DCC419505_1058;
class Class_1_96755BD61CBCF580;
class Class_1_96755BD61CBCF580_1;
class Class_1_9B674D7ADA00C1CC;
class Class_1_CA217ABF4E3B4F3F;
namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5B6B4449D355DFA2_METHOD_1_08089E91534355BA_OFFSET UNITYSDK_OFFSET(0x13A7B960)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_0EE7C8B998AC9C29_OFFSET UNITYSDK_OFFSET(0x13A7A460)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_229D9A93968BE128_OFFSET UNITYSDK_OFFSET(0x13A7AEE0)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_22BC55C609FDA193_1_OFFSET UNITYSDK_OFFSET(0x13A79D70)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_22BC55C609FDA193_OFFSET UNITYSDK_OFFSET(0x13A797C0)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_250EE82D97456E8C_OFFSET UNITYSDK_OFFSET(0x13A7A9D0)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_2D6F869DE72D5B9A_OFFSET UNITYSDK_OFFSET(0x13A7B050)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_2D9A571C1250C68E_OFFSET UNITYSDK_OFFSET(0x13A79350)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13A7A3A0)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_3AE427620086FA23_OFFSET UNITYSDK_OFFSET(0x13A7A4C0)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_418F3A200EEBA0C6_OFFSET UNITYSDK_OFFSET(0x13A7B660)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_51E57F165EBF5E29_OFFSET UNITYSDK_OFFSET(0x13A79230)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_709F9E3782CDA91C_OFFSET UNITYSDK_OFFSET(0x13A7BFE0)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_B41BD1AFF2F5FD1E_OFFSET UNITYSDK_OFFSET(0x13A7A600)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_C9D0B753CBD895D7_OFFSET UNITYSDK_OFFSET(0x13A79750)
#define CLASS_1_5B6B4449D355DFA2__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A7C760)
#define CLASS_1_5B6B4449D355DFA2__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7C750)

inline static constexpr unsigned int Class_1_5B6B4449D355DFA2_TypeDefinitionIndex = 68295;

class Class_1_5B6B4449D355DFA2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_9B674D7ADA00C1CC*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_9B674D7ADA00C1CC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B6B4449D355DFA2_TypeDefinitionIndex)->GetStaticField(0x571B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_51E57F165EBF5E29(::System::Object* a1, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1057*>* a2, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1058*>* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1057*>*, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1058*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_51E57F165EBF5E29_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C9D0B753CBD895D7(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1057*>* a1, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1058*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1057*>*, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1058*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_C9D0B753CBD895D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::System::Boolean Method_1_0EE7C8B998AC9C29(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_0EE7C8B998AC9C29_OFFSET))(a1);
	}

	static ::System::Void Method_1_2D9A571C1250C68E(::System::Object* a1, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1057*>* a2, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1058*>* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1057*>*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1058*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_2D9A571C1250C68E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B41BD1AFF2F5FD1E(::System::Object* a1, ::Class_1_96755BD61CBCF580* a2, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1057*>* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::Class_1_96755BD61CBCF580*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1057*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_B41BD1AFF2F5FD1E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_250EE82D97456E8C(::System::Object* a1, ::Class_1_96755BD61CBCF580_1* a2, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1058*>* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::Class_1_96755BD61CBCF580_1*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_1058*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_250EE82D97456E8C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_229D9A93968BE128(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_229D9A93968BE128_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2D6F869DE72D5B9A(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_2D6F869DE72D5B9A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_418F3A200EEBA0C6(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_418F3A200EEBA0C6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3AE427620086FA23(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_3AE427620086FA23_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_1057* Method_1_08089E91534355BA(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::Client::NotifyType a3)
	{
		return ((::Class_0_16E4307DCC419505_1057*(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_08089E91534355BA_OFFSET))(a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_1058* Method_1_709F9E3782CDA91C(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::GameCore::EventType a3, ::System::UInt32 a4)
	{
		return ((::Class_0_16E4307DCC419505_1058*(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::GameCore::EventType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_709F9E3782CDA91C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_22BC55C609FDA193(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1057*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1057*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_22BC55C609FDA193_OFFSET))(a1);
	}

	static ::System::Void Method_1_22BC55C609FDA193_1(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1058*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_1058*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_22BC55C609FDA193_1_OFFSET))(a1);
	}
};
