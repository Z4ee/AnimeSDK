#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DE3BC01E4C5856FE__CTOR_OFFSET UNITYSDK_OFFSET(0xB36E550)

inline static constexpr unsigned int Class_1_DE3BC01E4C5856FE_TypeDefinitionIndex = 56326;

class Class_1_DE3BC01E4C5856FE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* HEDHGPKEGBI; // 0x10
	::Il2CppArray<::System::UInt32>* IBCHGLEKBIK; // 0x18
	::System::UInt32 ODHIDLBAPIG; // 0x20
	::System::UInt32 PIKBPDAMGML; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE3BC01E4C5856FE__CTOR_OFFSET))(this);
	}
};
