#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetComponentAssetAnimStateConfig; }

#define CLASS_2_174D59A39557C6B7_CLASS_1_949AA8CED6F3A04D__CTOR_OFFSET UNITYSDK_OFFSET(0xA87EB00)

inline static constexpr unsigned int Class_2_174D59A39557C6B7_Class_1_949AA8CED6F3A04D_TypeDefinitionIndex = 51728;

class Class_2_174D59A39557C6B7_Class_1_949AA8CED6F3A04D : public ::System::Object
{
public:
	::RPG::GameCore::SetComponentAssetAnimStateConfig* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174D59A39557C6B7_CLASS_1_949AA8CED6F3A04D__CTOR_OFFSET))(this);
	}
};
