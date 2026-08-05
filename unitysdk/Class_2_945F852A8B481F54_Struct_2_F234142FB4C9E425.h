#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_945F852A8B481F54_STRUCT_2_F234142FB4C9E425_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x6CDC00)
#define CLASS_2_945F852A8B481F54_STRUCT_2_F234142FB4C9E425_METHOD_2_D1323ED515B8EA30_OFFSET UNITYSDK_OFFSET(0x6CDBE0)
#define CLASS_2_945F852A8B481F54_STRUCT_2_F234142FB4C9E425_METHOD_2_F56E8BCC946BE7D0_1_OFFSET UNITYSDK_OFFSET(0x6CDBC0)
#define CLASS_2_945F852A8B481F54_STRUCT_2_F234142FB4C9E425_METHOD_2_F56E8BCC946BE7D0_OFFSET UNITYSDK_OFFSET(0x6CDB90)
#define CLASS_2_945F852A8B481F54_STRUCT_2_F234142FB4C9E425_METHOD_2_F652339FC36F99F2_OFFSET UNITYSDK_OFFSET(0x6CDBB0)

inline static constexpr unsigned int Class_2_945F852A8B481F54_Struct_2_F234142FB4C9E425_TypeDefinitionIndex = 48531;

struct alignas(8) Class_2_945F852A8B481F54_Struct_2_F234142FB4C9E425
{
	::MoleMole::GameplayTag Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* Field_2_7; // 0x20

	::System::Boolean Method_2_F56E8BCC946BE7D0(::MoleMole::GameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54_STRUCT_2_F234142FB4C9E425_METHOD_2_F56E8BCC946BE7D0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F652339FC36F99F2(::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*&))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54_STRUCT_2_F234142FB4C9E425_METHOD_2_F652339FC36F99F2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F56E8BCC946BE7D0_1(::MoleMole::GameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54_STRUCT_2_F234142FB4C9E425_METHOD_2_F56E8BCC946BE7D0_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D1323ED515B8EA30(::MoleMole::GameplayTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54_STRUCT_2_F234142FB4C9E425_METHOD_2_D1323ED515B8EA30_OFFSET))(this, a1);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54_STRUCT_2_F234142FB4C9E425_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}
};
