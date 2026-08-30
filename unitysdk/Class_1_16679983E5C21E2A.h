#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16679983E5C21E2A_Struct_2_52355C2F0F6DFCC3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_339;
class Class_1_16679983E5C21E2A_Class_3_285756F0CC45F6AE;
class Class_1_16679983E5C21E2A_Class_3_285756F0CC45F6AE_1;
namespace Sofa { class BaseSofaUI3DWindow; }
namespace Sofa { class BaseSofaWindow; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_16679983E5C21E2A_METHOD_1_A3BF1021E2BA30BB_1_OFFSET UNITYSDK_OFFSET(0x18A412F0)
#define CLASS_1_16679983E5C21E2A_METHOD_1_A3BF1021E2BA30BB_OFFSET UNITYSDK_OFFSET(0x18A40EA0)
#define CLASS_1_16679983E5C21E2A_METHOD_1_DFB8C74415A824DB_OFFSET UNITYSDK_OFFSET(0x18A40FD0)
#define CLASS_1_16679983E5C21E2A_METHOD_1_E1593E7EE58F65C1_OFFSET UNITYSDK_OFFSET(0x18A40B70)
#define CLASS_1_16679983E5C21E2A__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A41420)
#define CLASS_1_16679983E5C21E2A__CTOR_OFFSET UNITYSDK_OFFSET(0x18A40AF0)

inline static constexpr unsigned int Class_1_16679983E5C21E2A_TypeDefinitionIndex = 79190;

class Class_1_16679983E5C21E2A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::String*>*>** StaticGet_ILCNLDCFMAH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16679983E5C21E2A_TypeDefinitionIndex)->GetStaticField(0x30B20);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_1_16679983E5C21E2A_Struct_2_52355C2F0F6DFCC3, ::Class_1_16679983E5C21E2A_Class_3_285756F0CC45F6AE*>** StaticGet_MKHPAICIFLP()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_16679983E5C21E2A_Struct_2_52355C2F0F6DFCC3, ::Class_1_16679983E5C21E2A_Class_3_285756F0CC45F6AE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16679983E5C21E2A_TypeDefinitionIndex)->GetStaticField(0x30B28);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::String*>*>** StaticGet_MJMCHFOIADK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16679983E5C21E2A_TypeDefinitionIndex)->GetStaticField(0x30B30);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_1_16679983E5C21E2A_Struct_2_52355C2F0F6DFCC3, ::Class_1_16679983E5C21E2A_Class_3_285756F0CC45F6AE_1*>** StaticGet_GJLFPNOBHOM()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_16679983E5C21E2A_Struct_2_52355C2F0F6DFCC3, ::Class_1_16679983E5C21E2A_Class_3_285756F0CC45F6AE_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16679983E5C21E2A_TypeDefinitionIndex)->GetStaticField(0x30B38);
	}
	::Class_0_16E4307DCC419505_339* KAMLEMCONJK; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_339* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_339*))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A__CCTOR_OFFSET))();
	}

	::Sofa::BaseSofaWindow* Method_1_E1593E7EE58F65C1(::System::Object* a1, ::System::String* a2)
	{
		return ((::Sofa::BaseSofaWindow*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_METHOD_1_E1593E7EE58F65C1_OFFSET))(this, a1, a2);
	}

	static ::Il2CppArray<::System::String*>* Method_1_A3BF1021E2BA30BB(::System::Type* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_METHOD_1_A3BF1021E2BA30BB_OFFSET))(a1);
	}

	::Sofa::BaseSofaUI3DWindow* Method_1_DFB8C74415A824DB(::System::Object* a1, ::System::String* a2)
	{
		return ((::Sofa::BaseSofaUI3DWindow*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_METHOD_1_DFB8C74415A824DB_OFFSET))(this, a1, a2);
	}

	static ::Il2CppArray<::System::String*>* Method_1_A3BF1021E2BA30BB_1(::System::Type* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_16679983E5C21E2A_METHOD_1_A3BF1021E2BA30BB_1_OFFSET))(a1);
	}
};
