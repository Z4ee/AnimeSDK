#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CE73C3CBE1989A82_Enum_3_B1573115C20A5313.h"
#include "unitysdk/System/Object.h"

class Class_1_57AC4D3FFD98A32C;
namespace MoleMole::Module::Slot { class MixedSlotAnimation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C5D4021E65BDD6E8_METHOD_1_4ED20D866CA02C0F_OFFSET UNITYSDK_OFFSET(0x14079E70)
#define CLASS_1_C5D4021E65BDD6E8_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x14079DD0)
#define CLASS_1_C5D4021E65BDD6E8_METHOD_1_8AB00628BEF8760C_OFFSET UNITYSDK_OFFSET(0x14079D70)
#define CLASS_1_C5D4021E65BDD6E8_METHOD_1_950C35FAC9469E49_OFFSET UNITYSDK_OFFSET(0x14079430)
#define CLASS_1_C5D4021E65BDD6E8_METHOD_1_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x14079E20)
#define CLASS_1_C5D4021E65BDD6E8_METHOD_1_E6947AF15391950C_OFFSET UNITYSDK_OFFSET(0x14079ED0)
#define CLASS_1_C5D4021E65BDD6E8__CTOR_OFFSET UNITYSDK_OFFSET(0x140792F0)

inline static constexpr unsigned int Class_1_C5D4021E65BDD6E8_TypeDefinitionIndex = 86054;

class Class_1_C5D4021E65BDD6E8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10
	::Class_1_57AC4D3FFD98A32C* Field_1_1; // 0x18

	::System::Void _ctor(::MoleMole::Module::Slot::MixedSlotAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Module::Slot::MixedSlotAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_C5D4021E65BDD6E8__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_8AB00628BEF8760C(::Class_1_CE73C3CBE1989A82_Enum_3_B1573115C20A5313 a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_CE73C3CBE1989A82_Enum_3_B1573115C20A5313))((::PBYTE)hIl2Cpp + CLASS_1_C5D4021E65BDD6E8_METHOD_1_8AB00628BEF8760C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5D4021E65BDD6E8_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5D4021E65BDD6E8_METHOD_1_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_1_4ED20D866CA02C0F(::Class_1_CE73C3CBE1989A82_Enum_3_B1573115C20A5313 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CE73C3CBE1989A82_Enum_3_B1573115C20A5313))((::PBYTE)hIl2Cpp + CLASS_1_C5D4021E65BDD6E8_METHOD_1_4ED20D866CA02C0F_OFFSET))(this, a1);
	}

	::System::Void Method_1_950C35FAC9469E49(::MoleMole::Module::Slot::MixedSlotAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Module::Slot::MixedSlotAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_C5D4021E65BDD6E8_METHOD_1_950C35FAC9469E49_OFFSET))(this, a1);
	}

	::System::String* Method_1_E6947AF15391950C(::Class_1_CE73C3CBE1989A82_Enum_3_B1573115C20A5313 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_CE73C3CBE1989A82_Enum_3_B1573115C20A5313))((::PBYTE)hIl2Cpp + CLASS_1_C5D4021E65BDD6E8_METHOD_1_E6947AF15391950C_OFFSET))(this, a1);
	}
};
