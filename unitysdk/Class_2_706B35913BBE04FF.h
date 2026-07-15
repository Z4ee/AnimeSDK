#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_558C0D911459BA9F;
namespace RPG::GameCore { class FateRinMonsterHitBoxOffsetEntry; }
namespace RPG::GameCore { class FateRinStageSpecifiedDeckEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_706B35913BBE04FF_METHOD_2_6A8A97495A142AD1_OFFSET UNITYSDK_OFFSET(0x1BD48CB0)
#define CLASS_2_706B35913BBE04FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD49140)

inline static constexpr unsigned int Class_2_706B35913BBE04FF_TypeDefinitionIndex = 17421;

class Class_2_706B35913BBE04FF : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::RPG::GameCore::FateRinStageSpecifiedDeckEntry*>* Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FateRinMonsterHitBoxOffsetEntry*>* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_558C0D911459BA9F*>* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::System::String* Field_2_5; // 0x38
	::Il2CppArray<::System::UInt32>* Field_2_6; // 0x40
	::Il2CppArray<::System::UInt32>* Field_2_7; // 0x48
	::System::UInt32 Field_2_8; // 0x50
	::System::UInt32 Field_2_9; // 0x54
	::System::Single Field_2_10; // 0x58
	::System::Single Field_2_11; // 0x5C
	::System::UInt32 Field_2_12; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_706B35913BBE04FF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_6A8A97495A142AD1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_706B35913BBE04FF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_706B35913BBE04FF*&))((::PBYTE)hIl2Cpp + CLASS_2_706B35913BBE04FF_METHOD_2_6A8A97495A142AD1_OFFSET))(a1, a2);
	}
};
