#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFOccupyType.h"
#include "unitysdk/RPG/GameCore/TRFCubeType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_209EA31B77B8ADFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C425840)

inline static constexpr unsigned int Class_1_209EA31B77B8ADFF_TypeDefinitionIndex = 41163;

class Class_1_209EA31B77B8ADFF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* GJLHEEOPDLK; // 0x10
	::RPG::Client::LittleGame::TRFOccupyType BIMECHCKKFA; // 0x18
	::System::Boolean HMAIEJIODHO; // 0x1C
	::RPG::GameCore::TRFCubeType DOELLHMOEED; // 0x20
	::System::Int32 ENGJKOLALOB; // 0x24
	::System::Int32 OMADOHLFMHP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_209EA31B77B8ADFF__CTOR_OFFSET))(this);
	}
};
