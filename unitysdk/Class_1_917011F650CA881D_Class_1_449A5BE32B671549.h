#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_917011F650CA881D_Class_1_1EF49D8375DD7016;
namespace System { class String; }

#define CLASS_1_917011F650CA881D_CLASS_1_449A5BE32B671549__CTOR_OFFSET UNITYSDK_OFFSET(0x183EBAF0)

inline static constexpr unsigned int Class_1_917011F650CA881D_Class_1_449A5BE32B671549_TypeDefinitionIndex = 64774;

class Class_1_917011F650CA881D_Class_1_449A5BE32B671549 : public ::System::Object
{
public:
	::System::String* Title; // 0x10
	::System::String* Language; // 0x18
	::Il2CppArray<::System::UInt32>* OptionalFormulaIDs; // 0x20
	::Il2CppArray<::Il2CppArray<::Class_1_917011F650CA881D_Class_1_1EF49D8375DD7016*>*>* Teams; // 0x28
	::Il2CppArray<::System::UInt32>* OptionalHexMiracleIDs; // 0x30
	::System::String* Author; // 0x38
	::System::String* BuildRefID; // 0x40
	::Il2CppArray<::System::UInt32>* EssentialFormulaIDs; // 0x48
	::Il2CppArray<::System::UInt32>* EssentialHexMiracleIDs; // 0x50
	::System::UInt64 FavoriteCountForSort; // 0x58
	::System::UInt64 LikeCountForSort; // 0x60
	::System::Double WeightForSort; // 0x68
	::System::UInt32 GameVersion; // 0x70
	::System::UInt64 AppliedCountForSort; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917011F650CA881D_CLASS_1_449A5BE32B671549__CTOR_OFFSET))(this);
	}
};
