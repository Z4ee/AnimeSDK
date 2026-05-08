#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_METHOD_1_25807D44DB3E70DF_OFFSET UNITYSDK_OFFSET(0x18EACDF0)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_METHOD_1_9246CF392538457E_OFFSET UNITYSDK_OFFSET(0x18EACC20)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_METHOD_1_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x18EAD120)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_METHOD_1_9FC9B3C1B6D996E7_OFFSET UNITYSDK_OFFSET(0x18EAD060)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_METHOD_1_BAB456D774D3765E_OFFSET UNITYSDK_OFFSET(0x18EACCC0)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x18EAD040)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_RESET_OFFSET UNITYSDK_OFFSET(0x18EACAC0)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03__CTOR_OFFSET UNITYSDK_OFFSET(0x18EACB60)

inline static constexpr unsigned int Class_2_0CCE48347EBD6D5F_Class_1_835CA1A1F1E7AF03_TypeDefinitionIndex = 67201;

class Class_2_0CCE48347EBD6D5F_Class_1_835CA1A1F1E7AF03 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::MoleMole::GameplayTag>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03__CTOR_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_RESET_OFFSET))(this);
	}

	::System::Void Method_1_9246CF392538457E(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_METHOD_1_9246CF392538457E_OFFSET))(this, a1);
	}

	::MoleMole::GameplayTag Method_1_BAB456D774D3765E(::MoleMole::EntityHandle a1)
	{
		return ((::MoleMole::GameplayTag(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_METHOD_1_BAB456D774D3765E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_25807D44DB3E70DF(::MoleMole::GameplayTag a1, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*& a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_METHOD_1_25807D44DB3E70DF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_9FC9B3C1B6D996E7(::MoleMole::EntityHandle a1, ::MoleMole::GameplayTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_METHOD_1_9FC9B3C1B6D996E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_835CA1A1F1E7AF03_METHOD_1_998E122F46014853_OFFSET))(this);
	}
};
