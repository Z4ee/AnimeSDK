#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSetInLevelStateGroup_InLevelStateEnum.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSetInLevelStateGroup_StateGroupEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_A83071CBA4C6A014;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_E216BF852A05C578_METHOD_1_63F6BECED14AD07E_OFFSET UNITYSDK_OFFSET(0x11D9D080)
#define CLASS_1_E216BF852A05C578_METHOD_1_7C83B24387641C14_OFFSET UNITYSDK_OFFSET(0x11D9CA70)
#define CLASS_1_E216BF852A05C578_METHOD_1_FDCA37C616FCE1DF_OFFSET UNITYSDK_OFFSET(0x11D9CF30)
#define CLASS_1_E216BF852A05C578__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D9C670)

inline static constexpr unsigned int Class_1_E216BF852A05C578_TypeDefinitionIndex = 50917;

class Class_1_E216BF852A05C578 : public ::System::Object
{
public:
	static ::Class_1_A83071CBA4C6A014** StaticGet_Field_1_2()
	{
		return (::Class_1_A83071CBA4C6A014**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E216BF852A05C578_TypeDefinitionIndex)->GetStaticField(0x43BD0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E216BF852A05C578_TypeDefinitionIndex)->GetStaticField(0x43BD8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E216BF852A05C578_TypeDefinitionIndex)->GetStaticField(0x43BE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E216BF852A05C578__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_7C83B24387641C14(::System::String* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E216BF852A05C578_METHOD_1_7C83B24387641C14_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::String*, ::System::String*> Method_1_FDCA37C616FCE1DF(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum a1, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum a2, ::System::Type* a3)
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_E216BF852A05C578_METHOD_1_FDCA37C616FCE1DF_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::System::String*>* Method_1_63F6BECED14AD07E()
	{
		return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E216BF852A05C578_METHOD_1_63F6BECED14AD07E_OFFSET))();
	}
};
