#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSetInLevelStateGroup_InLevelStateEnum.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSetInLevelStateGroup_StateGroupEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_F8B121DB5A293927;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_1C156028BD208FF8_METHOD_1_63F6BECED14AD07E_OFFSET UNITYSDK_OFFSET(0x18A925F0)
#define CLASS_1_1C156028BD208FF8_METHOD_1_7C83B24387641C14_OFFSET UNITYSDK_OFFSET(0x18A927C0)
#define CLASS_1_1C156028BD208FF8_METHOD_1_B8F28935618AA26A_OFFSET UNITYSDK_OFFSET(0x18A92670)
#define CLASS_1_1C156028BD208FF8__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A921F0)

inline static constexpr unsigned int Class_1_1C156028BD208FF8_TypeDefinitionIndex = 72065;

class Class_1_1C156028BD208FF8 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C156028BD208FF8_TypeDefinitionIndex)->GetStaticField(0x4F280);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C156028BD208FF8_TypeDefinitionIndex)->GetStaticField(0x4F288);
	}
	static ::Class_1_F8B121DB5A293927** StaticGet_Field_1_6()
	{
		return (::Class_1_F8B121DB5A293927**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C156028BD208FF8_TypeDefinitionIndex)->GetStaticField(0x4F290);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C156028BD208FF8__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::System::String*>* Method_1_63F6BECED14AD07E()
	{
		return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C156028BD208FF8_METHOD_1_63F6BECED14AD07E_OFFSET))();
	}

	static ::System::ValueTuple_2<::System::String*, ::System::String*> Method_1_B8F28935618AA26A(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum a1, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum a2, ::System::Type* a3)
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_1C156028BD208FF8_METHOD_1_B8F28935618AA26A_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_7C83B24387641C14(::System::String* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C156028BD208FF8_METHOD_1_7C83B24387641C14_OFFSET))(a1);
	}
};
