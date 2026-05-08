#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class VNoiseSettings; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5E6C82E78B01898D_CLASS_1_FD89C2781945EB91_METHOD_1_89FBED9DD577568B_OFFSET UNITYSDK_OFFSET(0x180AD410)
#define CLASS_1_5E6C82E78B01898D_CLASS_1_FD89C2781945EB91__CTOR_OFFSET UNITYSDK_OFFSET(0x180ACE80)

inline static constexpr unsigned int Class_1_5E6C82E78B01898D_Class_1_FD89C2781945EB91_TypeDefinitionIndex = 51990;

class Class_1_5E6C82E78B01898D_Class_1_FD89C2781945EB91 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::System::Action_1<::MoleMole::Cameras::VNoiseSettings*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_CLASS_1_FD89C2781945EB91__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_89FBED9DD577568B(::MoleMole::Cameras::VNoiseSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::VNoiseSettings*))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_CLASS_1_FD89C2781945EB91_METHOD_1_89FBED9DD577568B_OFFSET))(this, a1);
	}
};
