#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ModifierStacking.h"
#include "unitysdk/System/Object.h"

class Class_1_417A24669F2F689C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_961566ADE07627B4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x13E6FB80)
#define CLASS_1_961566ADE07627B4_METHOD_1_AD50719ACA0A0E70_OFFSET UNITYSDK_OFFSET(0x13E6F280)
#define CLASS_1_961566ADE07627B4_METHOD_1_DA9D952EAB841B8E_OFFSET UNITYSDK_OFFSET(0x13E6FCA0)
#define CLASS_1_961566ADE07627B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E6F1D0)
#define CLASS_1_961566ADE07627B4__CTOR_OFFSET UNITYSDK_OFFSET(0x13E6F1C0)

inline static constexpr unsigned int Class_1_961566ADE07627B4_TypeDefinitionIndex = 75562;

class Class_1_961566ADE07627B4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_417A24669F2F689C*>*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_417A24669F2F689C*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_961566ADE07627B4_TypeDefinitionIndex)->GetStaticField(0x406E0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_961566ADE07627B4_TypeDefinitionIndex)->GetStaticField(0x406E8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961566ADE07627B4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_961566ADE07627B4__CCTOR_OFFSET))();
	}

	static ::Class_1_417A24669F2F689C* Method_1_AD50719ACA0A0E70(::System::Int32 a1, ::System::Single a2, ::MoleMole::Config::ModifierStacking a3)
	{
		return ((::Class_1_417A24669F2F689C*(*)(::System::Int32, ::System::Single, ::MoleMole::Config::ModifierStacking))((::PBYTE)hIl2Cpp + CLASS_1_961566ADE07627B4_METHOD_1_AD50719ACA0A0E70_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_417A24669F2F689C* Method_1_DA9D952EAB841B8E(::System::Int32 a1, ::System::Single a2, ::MoleMole::Config::ModifierStacking a3)
	{
		return ((::Class_1_417A24669F2F689C*(*)(::System::Int32, ::System::Single, ::MoleMole::Config::ModifierStacking))((::PBYTE)hIl2Cpp + CLASS_1_961566ADE07627B4_METHOD_1_DA9D952EAB841B8E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_961566ADE07627B4_METHOD_1_30D1209326FA87FC_OFFSET))();
	}
};
