#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MatchThreeScoreCurveRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_46D0E2083D210D6D__CTOR_OFFSET UNITYSDK_OFFSET(0x168647A0)

inline static constexpr unsigned int Class_1_46D0E2083D210D6D_TypeDefinitionIndex = 32721;

class Class_1_46D0E2083D210D6D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::MatchThreeScoreCurveRow*>*>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46D0E2083D210D6D__CTOR_OFFSET))(this);
	}
};
