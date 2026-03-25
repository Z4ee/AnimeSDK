#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class LittleGameLevelCurveInfo; }
namespace System { class String; }

#define CLASS_1_69ABF8B0F94C5FF6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1683F060)
#define CLASS_1_69ABF8B0F94C5FF6__CTOR_OFFSET UNITYSDK_OFFSET(0x1683F0D0)

inline static constexpr unsigned int Class_1_69ABF8B0F94C5FF6_TypeDefinitionIndex = 33678;

class Class_1_69ABF8B0F94C5FF6 : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameLevelCurveInfo* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::System::String*, ::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69ABF8B0F94C5FF6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69ABF8B0F94C5FF6_CLEAR_OFFSET))(this);
	}
};
