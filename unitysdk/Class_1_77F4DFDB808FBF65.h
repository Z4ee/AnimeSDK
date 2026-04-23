#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FeverTimeToastType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_77F4DFDB808FBF65__CTOR_OFFSET UNITYSDK_OFFSET(0x96FDCC0)

inline static constexpr unsigned int Class_1_77F4DFDB808FBF65_TypeDefinitionIndex = 66434;

class Class_1_77F4DFDB808FBF65 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::RPG::GameCore::FeverTimeToastType Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::RPG::Client::TextID Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F4DFDB808FBF65__CTOR_OFFSET))(this);
	}
};
