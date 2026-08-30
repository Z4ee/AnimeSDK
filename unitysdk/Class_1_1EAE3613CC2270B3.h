#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1EAE3613CC2270B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FA5B0)

inline static constexpr unsigned int Class_1_1EAE3613CC2270B3_TypeDefinitionIndex = 42101;

class Class_1_1EAE3613CC2270B3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* GBPHKOAFCNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* EPEJGAEMEKN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EAE3613CC2270B3__CTOR_OFFSET))(this);
	}
};
