#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_301B02160CBCFE73_CLASS_1_60478667B1E88FCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1331E100)

inline static constexpr unsigned int Class_2_301B02160CBCFE73_Class_1_60478667B1E88FCB_TypeDefinitionIndex = 57407;

class Class_2_301B02160CBCFE73_Class_1_60478667B1E88FCB : public ::System::Object
{
public:
	::System::String* IFCEOHEAIGI; // 0x10
	::System::String* BAHLDFMIJFG; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MLNPMBIDPIF; // 0x20
	::UnityEngine::Vector3 LBJPPLGGBNN; // 0x28
	::System::Boolean OHLOEABKKME; // 0x34
	::System::Boolean GMFPEGFIKAE; // 0x35
	::UnityEngine::Quaternion POHDKIIOAJB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_CLASS_1_60478667B1E88FCB__CTOR_OFFSET))(this);
	}
};
