#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CE73C3CBE1989A82_Enum_3_4EDA451157AA66AC.h"
#include "unitysdk/System/Object.h"

class Class_1_3395A67811E34A54;
namespace MoleMole::Module::Slot { class MixedSlotAnimation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DE729C854854BD9F_METHOD_1_4ED20D866CA02C0F_OFFSET UNITYSDK_OFFSET(0x122437C0)
#define CLASS_1_DE729C854854BD9F_METHOD_1_6779514F01137480_OFFSET UNITYSDK_OFFSET(0x12242D50)
#define CLASS_1_DE729C854854BD9F_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x12243720)
#define CLASS_1_DE729C854854BD9F_METHOD_1_8AB00628BEF8760C_OFFSET UNITYSDK_OFFSET(0x122436C0)
#define CLASS_1_DE729C854854BD9F_METHOD_1_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x12243770)
#define CLASS_1_DE729C854854BD9F_METHOD_1_E6947AF15391950C_OFFSET UNITYSDK_OFFSET(0x12243820)
#define CLASS_1_DE729C854854BD9F__CTOR_OFFSET UNITYSDK_OFFSET(0x12242C10)

inline static constexpr unsigned int Class_1_DE729C854854BD9F_TypeDefinitionIndex = 77364;

class Class_1_DE729C854854BD9F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x10
	::Class_1_3395A67811E34A54* Field_1_0; // 0x18

	::System::Void _ctor(::MoleMole::Module::Slot::MixedSlotAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Module::Slot::MixedSlotAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_DE729C854854BD9F__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_8AB00628BEF8760C(::Class_1_CE73C3CBE1989A82_Enum_3_4EDA451157AA66AC a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_CE73C3CBE1989A82_Enum_3_4EDA451157AA66AC))((::PBYTE)hIl2Cpp + CLASS_1_DE729C854854BD9F_METHOD_1_8AB00628BEF8760C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE729C854854BD9F_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE729C854854BD9F_METHOD_1_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_1_4ED20D866CA02C0F(::Class_1_CE73C3CBE1989A82_Enum_3_4EDA451157AA66AC a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CE73C3CBE1989A82_Enum_3_4EDA451157AA66AC))((::PBYTE)hIl2Cpp + CLASS_1_DE729C854854BD9F_METHOD_1_4ED20D866CA02C0F_OFFSET))(this, a1);
	}

	::System::String* Method_1_E6947AF15391950C(::Class_1_CE73C3CBE1989A82_Enum_3_4EDA451157AA66AC a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_CE73C3CBE1989A82_Enum_3_4EDA451157AA66AC))((::PBYTE)hIl2Cpp + CLASS_1_DE729C854854BD9F_METHOD_1_E6947AF15391950C_OFFSET))(this, a1);
	}

	::System::Void Method_1_6779514F01137480(::MoleMole::Module::Slot::MixedSlotAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Module::Slot::MixedSlotAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_DE729C854854BD9F_METHOD_1_6779514F01137480_OFFSET))(this, a1);
	}
};
