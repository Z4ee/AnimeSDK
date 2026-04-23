#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8E690193A2EE0AD6_Class_1_CFEA5EFE32EE4BDD;
namespace System { class String; }

#define CLASS_1_8E690193A2EE0AD6_CLASS_1_BA8A2B67AC341F09__CTOR_OFFSET UNITYSDK_OFFSET(0x12947F50)

inline static constexpr unsigned int Class_1_8E690193A2EE0AD6_Class_1_BA8A2B67AC341F09_TypeDefinitionIndex = 62474;

class Class_1_8E690193A2EE0AD6_Class_1_BA8A2B67AC341F09 : public ::System::Object
{
public:
	::Il2CppArray<::Il2CppArray<::Class_1_8E690193A2EE0AD6_Class_1_CFEA5EFE32EE4BDD*>*>* Teams; // 0x10
	::System::String* BuildRefID; // 0x18
	::Il2CppArray<::System::UInt32>* EssentialFormulaIDs; // 0x20
	::System::String* Author; // 0x28
	::System::String* Language; // 0x30
	::System::String* Title; // 0x38
	::Il2CppArray<::System::UInt32>* EssentialHexMiracleIDs; // 0x40
	::Il2CppArray<::System::UInt32>* OptionalFormulaIDs; // 0x48
	::Il2CppArray<::System::UInt32>* OptionalHexMiracleIDs; // 0x50
	::System::UInt32 GameVersion; // 0x58
	::System::UInt64 FavoriteCountForSort; // 0x60
	::System::Double WeightForSort; // 0x68
	::System::UInt64 AppliedCountForSort; // 0x70
	::System::UInt64 LikeCountForSort; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E690193A2EE0AD6_CLASS_1_BA8A2B67AC341F09__CTOR_OFFSET))(this);
	}
};
