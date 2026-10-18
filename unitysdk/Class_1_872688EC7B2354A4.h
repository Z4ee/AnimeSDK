#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimMusicEventInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_872688EC7B2354A4_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB48860)
#define CLASS_1_872688EC7B2354A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB487C0)

inline static constexpr unsigned int Class_1_872688EC7B2354A4_TypeDefinitionIndex = 43638;

class Class_1_872688EC7B2354A4 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::GameCore::FiveDimMusicEventInfo*>* DHPACGHECNM; // 0x10
	::System::Single GAFENHHEBPG; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FiveDimMusicEventInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FiveDimMusicEventInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_872688EC7B2354A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_872688EC7B2354A4_CLEAR_OFFSET))(this);
	}
};
