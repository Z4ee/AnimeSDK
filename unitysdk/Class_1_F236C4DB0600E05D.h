#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_CustomPredicatorType.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_GroupRefreshReason.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_150;
class Class_1_4C9F1682233ECDD3_1;
class Class_3_ED629420A95E72D8;
namespace RPG::Client { class MapDef; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F236C4DB0600E05D__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E3B90)

inline static constexpr unsigned int Class_1_F236C4DB0600E05D_TypeDefinitionIndex = 62122;

class Class_1_F236C4DB0600E05D : public ::System::Object
{
public:
	::Class_3_ED629420A95E72D8* HKAEGFDOEJF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4C9F1682233ECDD3_1*>* GBLIAHDPCGG; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* EDABKLOONIM; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* GFJNDJKNIEE; // 0x28
	::RPG::Client::MapDef* NGDKFLNHHIJ; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_43BD383C98B4C0C5_150*>* DNMMNAGMECL; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* HPBFNAJGBCF; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* EOPMGFBNCFF; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* GKJCOGFCMLL; // 0x50
	::RPG::Client::RuntimeGroupManager_GroupRefreshReason KDHPKOFLNFM; // 0x58
	::RPG::Client::RuntimeGroupManager_CustomPredicatorType NAJHNDDNALF; // 0x5C
	::System::UInt32 MLNFFHDIGIL; // 0x60
	::System::UInt32 FIDIIIOBGFD; // 0x64
	::System::UInt32 DDKKPFDPDIM; // 0x68
	::System::Boolean BJOMCBHJJLF; // 0x6C
	::System::Boolean OANGBLKPCNB; // 0x6D
	::System::Boolean AGACAKJCMNI; // 0x6E
	::System::Boolean GABIMEHEFNO; // 0x6F
	::System::Boolean PGABEFKAGKG; // 0x70
	::System::Boolean AKPDPEOAOGJ; // 0x71

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F236C4DB0600E05D__CTOR_OFFSET))(this);
	}
};
