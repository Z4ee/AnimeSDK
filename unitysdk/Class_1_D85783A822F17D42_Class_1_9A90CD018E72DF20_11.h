#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D85783A822F17D42_Class_1_C9A4469080B8F42A_1;
class Class_1_D85783A822F17D42_Class_1_E31A8B64E4DA2485_1;
namespace System { class String; }

#define CLASS_1_D85783A822F17D42_CLASS_1_9A90CD018E72DF20_11__CTOR_OFFSET UNITYSDK_OFFSET(0x1844E4D0)

inline static constexpr unsigned int Class_1_D85783A822F17D42_Class_1_9A90CD018E72DF20_11_TypeDefinitionIndex = 61843;

class Class_1_D85783A822F17D42_Class_1_9A90CD018E72DF20_11 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_D85783A822F17D42_Class_1_C9A4469080B8F42A_1*>* EarlyRolesData; // 0x10
	::Il2CppArray<::System::UInt32>* SecondaryAugments; // 0x18
	::Il2CppArray<::System::UInt32>* Portals; // 0x20
	::Il2CppArray<::System::UInt32>* PrimaryAugments; // 0x28
	::Il2CppArray<::Class_1_D85783A822F17D42_Class_1_C9A4469080B8F42A_1*>* MainRolesData; // 0x30
	::System::String* Title; // 0x38
	::System::String* Description; // 0x40
	::System::String* Author; // 0x48
	::System::String* RefID; // 0x50
	::Il2CppArray<::System::UInt32>* BasicEquips; // 0x58
	::Il2CppArray<::Class_1_D85783A822F17D42_Class_1_E31A8B64E4DA2485_1*>* RoleEquipData; // 0x60
	::System::String* Tag; // 0x68
	::Il2CppArray<::System::UInt32>* CoreEquips; // 0x70
	::Il2CppArray<::Class_1_D85783A822F17D42_Class_1_C9A4469080B8F42A_1*>* MidRolesData; // 0x78
	::System::UInt32 LikeCountForSort; // 0x80
	::System::UInt32 GameVersion; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D85783A822F17D42_CLASS_1_9A90CD018E72DF20_11__CTOR_OFFSET))(this);
	}
};
