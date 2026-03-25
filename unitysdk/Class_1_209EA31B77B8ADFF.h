#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFOccupyType.h"
#include "unitysdk/RPG/GameCore/TRFCubeType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_209EA31B77B8ADFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16762900)

inline static constexpr unsigned int Class_1_209EA31B77B8ADFF_TypeDefinitionIndex = 32917;

class Class_1_209EA31B77B8ADFF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Int32 Field_1_5; // 0x18
	::RPG::Client::LittleGame::TRFOccupyType Field_1_3; // 0x1C
	::System::Int32 Field_1_4; // 0x20
	::System::Boolean Field_1_0; // 0x24
	::RPG::GameCore::TRFCubeType Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_209EA31B77B8ADFF__CTOR_OFFSET))(this);
	}
};
