#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODTreeEnableReason.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODTreeExpandStatus.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_7.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CD49E6413051D9AA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC027F40)
#define CLASS_1_CD49E6413051D9AA_METHOD_1_47196F2035DEF024_OFFSET UNITYSDK_OFFSET(0xC027F90)
#define CLASS_1_CD49E6413051D9AA__CTOR_OFFSET UNITYSDK_OFFSET(0xC028000)

inline static constexpr unsigned int Class_1_CD49E6413051D9AA_TypeDefinitionIndex = 73721;

class Class_1_CD49E6413051D9AA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* JFBNIECPDEN; // 0x10
	::Struct_2_CC45B4503679E14E_7 LABNFIABDFM; // 0x18
	::System::Collections::Generic::List_1<::Class_1_CD49E6413051D9AA*>* LOMOCKGPINP; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* AHDGMHKPKBI; // 0x30
	::RPG::Client::OpenWorld::StreamingItemData* IAMKHCJJBJK; // 0x38
	::System::Boolean JOHJKGPJIHO; // 0x40
	::System::Int32 DFJMINPCJHN; // 0x44
	::System::Int32 ECOFDKGNAGP; // 0x48
	::RPG::Client::OpenWorld::SceneItemHLODTreeExpandStatus JIIOJJKOOKM; // 0x4C
	::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason> MNJBIJGKPPO; // 0x50
	::System::Int32 ICFBOIKJEEF; // 0x58
	::System::Int32 FFOIEBJCJGO; // 0x5C
	::System::Int32 AMJJFOAAGJM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD49E6413051D9AA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD49E6413051D9AA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_47196F2035DEF024(::System::Boolean a1, ::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason))((::PBYTE)hIl2Cpp + CLASS_1_CD49E6413051D9AA_METHOD_1_47196F2035DEF024_OFFSET))(this, a1, a2);
	}
};
