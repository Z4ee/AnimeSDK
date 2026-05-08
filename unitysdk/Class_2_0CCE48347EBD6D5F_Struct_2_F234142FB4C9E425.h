#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0CCE48347EBD6D5F_STRUCT_2_F234142FB4C9E425_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x754680)
#define CLASS_2_0CCE48347EBD6D5F_STRUCT_2_F234142FB4C9E425_METHOD_2_D1323ED515B8EA30_OFFSET UNITYSDK_OFFSET(0x7546B0)
#define CLASS_2_0CCE48347EBD6D5F_STRUCT_2_F234142FB4C9E425_METHOD_2_F56E8BCC946BE7D0_1_OFFSET UNITYSDK_OFFSET(0x754690)
#define CLASS_2_0CCE48347EBD6D5F_STRUCT_2_F234142FB4C9E425_METHOD_2_F56E8BCC946BE7D0_OFFSET UNITYSDK_OFFSET(0x754660)
#define CLASS_2_0CCE48347EBD6D5F_STRUCT_2_F234142FB4C9E425_METHOD_2_F652339FC36F99F2_OFFSET UNITYSDK_OFFSET(0x754650)

inline static constexpr unsigned int Class_2_0CCE48347EBD6D5F_Struct_2_F234142FB4C9E425_TypeDefinitionIndex = 67207;

struct alignas(8) Class_2_0CCE48347EBD6D5F_Struct_2_F234142FB4C9E425
{
	::MoleMole::GameplayTag Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* Field_2_1; // 0x20

	::System::Boolean Method_2_F652339FC36F99F2(::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*&))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_STRUCT_2_F234142FB4C9E425_METHOD_2_F652339FC36F99F2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F56E8BCC946BE7D0(::MoleMole::GameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_STRUCT_2_F234142FB4C9E425_METHOD_2_F56E8BCC946BE7D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_STRUCT_2_F234142FB4C9E425_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Boolean Method_2_F56E8BCC946BE7D0_1(::MoleMole::GameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_STRUCT_2_F234142FB4C9E425_METHOD_2_F56E8BCC946BE7D0_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D1323ED515B8EA30(::MoleMole::GameplayTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_STRUCT_2_F234142FB4C9E425_METHOD_2_D1323ED515B8EA30_OFFSET))(this, a1);
	}
};
