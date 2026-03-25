#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimMusicEventInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_74B5CC70D7830EE0_CLEAR_OFFSET UNITYSDK_OFFSET(0x167A9280)
#define CLASS_1_74B5CC70D7830EE0__CTOR_OFFSET UNITYSDK_OFFSET(0x1678C0F0)

inline static constexpr unsigned int Class_1_74B5CC70D7830EE0_TypeDefinitionIndex = 33649;

class Class_1_74B5CC70D7830EE0 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::GameCore::FiveDimMusicEventInfo*>* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FiveDimMusicEventInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FiveDimMusicEventInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_74B5CC70D7830EE0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B5CC70D7830EE0_CLEAR_OFFSET))(this);
	}
};
