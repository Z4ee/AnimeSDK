#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8AEDBF5AF01C1821_Class_1_C9A4469080B8F42A;
class Class_1_8AEDBF5AF01C1821_Class_1_E31A8B64E4DA2485_1;
namespace System { class String; }

#define CLASS_1_8AEDBF5AF01C1821_CLASS_1_9A90CD018E72DF20_6__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA9CE0)

inline static constexpr unsigned int Class_1_8AEDBF5AF01C1821_Class_1_9A90CD018E72DF20_6_TypeDefinitionIndex = 52578;

class Class_1_8AEDBF5AF01C1821_Class_1_9A90CD018E72DF20_6 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_8AEDBF5AF01C1821_Class_1_C9A4469080B8F42A*>* MainRolesData; // 0x10
	::Il2CppArray<::System::UInt32>* CoreEquips; // 0x18
	::Il2CppArray<::System::UInt32>* PrimaryAugments; // 0x20
	::Il2CppArray<::Class_1_8AEDBF5AF01C1821_Class_1_E31A8B64E4DA2485_1*>* RoleEquipData; // 0x28
	::Il2CppArray<::System::UInt32>* SecondaryAugments; // 0x30
	::Il2CppArray<::System::UInt32>* BasicEquips; // 0x38
	::System::String* Author; // 0x40
	::System::String* Title; // 0x48
	::Il2CppArray<::Class_1_8AEDBF5AF01C1821_Class_1_C9A4469080B8F42A*>* MidRolesData; // 0x50
	::System::String* Tag; // 0x58
	::Il2CppArray<::System::UInt32>* Portals; // 0x60
	::System::String* Description; // 0x68
	::Il2CppArray<::Class_1_8AEDBF5AF01C1821_Class_1_C9A4469080B8F42A*>* EarlyRolesData; // 0x70
	::System::String* RefID; // 0x78
	::System::UInt32 LikeCountForSort; // 0x80
	::System::UInt32 GameVersion; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AEDBF5AF01C1821_CLASS_1_9A90CD018E72DF20_6__CTOR_OFFSET))(this);
	}
};
