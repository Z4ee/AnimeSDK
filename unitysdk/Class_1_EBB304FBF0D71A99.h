#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimChestConfig; }
namespace System { class String; }

#define CLASS_1_EBB304FBF0D71A99__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48B4F0)

inline static constexpr unsigned int Class_1_EBB304FBF0D71A99_TypeDefinitionIndex = 40881;

class Class_1_EBB304FBF0D71A99 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::FiveDimChestConfig* Field_1_1; // 0x18
	::RPG::GameCore::FiveDimChestState Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Boolean Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB304FBF0D71A99__CTOR_OFFSET))(this);
	}
};
