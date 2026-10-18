#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_558C0D911459BA9F;
namespace RPG::GameCore { class FateRinMonsterHitBoxOffsetEntry; }
namespace RPG::GameCore { class FateRinStageSpecifiedDeckEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_706B35913BBE04FF_METHOD_2_6A8A97495A142AD1_OFFSET UNITYSDK_OFFSET(0x1CCC0F60)
#define CLASS_2_706B35913BBE04FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC13F0)

inline static constexpr unsigned int Class_2_706B35913BBE04FF_TypeDefinitionIndex = 18152;

class Class_2_706B35913BBE04FF : public ::RPG::GameCore::JsonConfig
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FateRinMonsterHitBoxOffsetEntry*>* KAKOEADOGFO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_558C0D911459BA9F*>* EECOOEBAPEB; // 0x18
	::System::String* HOHBFFNDIKF; // 0x20
	::System::String* HCLJHPDOFKH; // 0x28
	::System::String* KHFBNGDEJGK; // 0x30
	::Il2CppArray<::System::UInt32>* DLPLLLENNHN; // 0x38
	::Il2CppArray<::RPG::GameCore::FateRinStageSpecifiedDeckEntry*>* MLDEGKEPEJB; // 0x40
	::Il2CppArray<::System::UInt32>* JFKAEFCAEGN; // 0x48
	::System::Single BMKPADMOOCP; // 0x50
	::System::Single JFMJJKDBCEC; // 0x54
	::System::UInt32 AAPBHIJNEMM; // 0x58
	::System::UInt32 AAFBCHNAKNJ; // 0x5C
	::System::UInt32 BMFPFMDJOMO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_706B35913BBE04FF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_6A8A97495A142AD1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_706B35913BBE04FF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_706B35913BBE04FF*&))((::PBYTE)hIl2Cpp + CLASS_2_706B35913BBE04FF_METHOD_2_6A8A97495A142AD1_OFFSET))(a1, a2);
	}
};
