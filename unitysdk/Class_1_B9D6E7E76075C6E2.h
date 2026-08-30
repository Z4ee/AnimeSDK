#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1C87E05DC1AC3C04;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9D6E7E76075C6E2_GET_DIALOGUELIST_OFFSET UNITYSDK_OFFSET(0xD267750)
#define CLASS_1_B9D6E7E76075C6E2_SET_DIALOGUELIST_OFFSET UNITYSDK_OFFSET(0xD267760)
#define CLASS_1_B9D6E7E76075C6E2__CTOR_OFFSET UNITYSDK_OFFSET(0xD267770)

inline static constexpr unsigned int Class_1_B9D6E7E76075C6E2_TypeDefinitionIndex = 63060;

class Class_1_B9D6E7E76075C6E2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_1C87E05DC1AC3C04*>* _DialogueList_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_1C87E05DC1AC3C04*>* get_DialogueList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1C87E05DC1AC3C04*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_GET_DIALOGUELIST_OFFSET))(this);
	}

	::System::Void set_DialogueList(::System::Collections::Generic::List_1<::Class_1_1C87E05DC1AC3C04*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1C87E05DC1AC3C04*>*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_SET_DIALOGUELIST_OFFSET))(this, a1);
	}
};
