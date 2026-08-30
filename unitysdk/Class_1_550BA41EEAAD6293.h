#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageMonsterWave; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_550BA41EEAAD6293__CTOR_OFFSET UNITYSDK_OFFSET(0x15847C70)

inline static constexpr unsigned int Class_1_550BA41EEAAD6293_TypeDefinitionIndex = 62950;

class Class_1_550BA41EEAAD6293 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::StageMonsterWave*>* PAJGJEBAMCO; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* LMCEMONKPIH; // 0x18
	::Enum_3_71AA90D596A09AC8_2 KCCMPMDHHEI; // 0x20
	::System::UInt32 DOBKKDIECDO; // 0x24
	::System::UInt32 ALOPEGJPAKK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_550BA41EEAAD6293__CTOR_OFFSET))(this);
	}
};
