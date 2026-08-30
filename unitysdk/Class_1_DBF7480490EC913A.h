#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimMusicEventInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_DBF7480490EC913A_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C5FA660)
#define CLASS_1_DBF7480490EC913A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FA5C0)

inline static constexpr unsigned int Class_1_DBF7480490EC913A_TypeDefinitionIndex = 41996;

class Class_1_DBF7480490EC913A : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::GameCore::FiveDimMusicEventInfo*>* DHPACGHECNM; // 0x10
	::System::Single GAFENHHEBPG; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FiveDimMusicEventInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FiveDimMusicEventInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_DBF7480490EC913A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBF7480490EC913A_CLEAR_OFFSET))(this);
	}
};
