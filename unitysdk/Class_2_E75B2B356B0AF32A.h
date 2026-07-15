#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_545F497870FB4A84;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define CLASS_2_E75B2B356B0AF32A_METHOD_2_CFFE4FCD4DD6DA86_OFFSET UNITYSDK_OFFSET(0x1B617350)
#define CLASS_2_E75B2B356B0AF32A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B617770)

inline static constexpr unsigned int Class_2_E75B2B356B0AF32A_TypeDefinitionIndex = 17424;

class Class_2_E75B2B356B0AF32A : public ::RPG::GameCore::JsonConfig
{
public:
	::Class_2_545F497870FB4A84* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_2_2; // 0x20
	::Class_2_545F497870FB4A84* Field_2_3; // 0x28
	::Class_2_545F497870FB4A84* Field_2_4; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_2_5; // 0x38
	::Class_2_545F497870FB4A84* Field_2_6; // 0x40
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_2_7; // 0x48
	::System::String* Field_2_8; // 0x50
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_2_9; // 0x58
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_2_10; // 0x60
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_2_11; // 0x68
	::RPG::GameCore::FateRinCardCasterSource Field_2_12; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E75B2B356B0AF32A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_CFFE4FCD4DD6DA86(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_E75B2B356B0AF32A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_E75B2B356B0AF32A*&))((::PBYTE)hIl2Cpp + CLASS_2_E75B2B356B0AF32A_METHOD_2_CFFE4FCD4DD6DA86_OFFSET))(a1, a2);
	}
};
