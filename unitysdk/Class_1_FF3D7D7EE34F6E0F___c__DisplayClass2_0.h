#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelValueSelectorType.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;

#define CLASS_1_FF3D7D7EE34F6E0F___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17095B80)
#define CLASS_1_FF3D7D7EE34F6E0F___C__DISPLAYCLASS2_0__SELECTTARGET_B__0_OFFSET UNITYSDK_OFFSET(0x17095B90)

inline static constexpr unsigned int Class_1_FF3D7D7EE34F6E0F___c__DisplayClass2_0_TypeDefinitionIndex = 73591;

class Class_1_FF3D7D7EE34F6E0F___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelValueSelectorType selectType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3D7D7EE34F6E0F___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _SelectTarget_b__0(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_FF3D7D7EE34F6E0F___C__DISPLAYCLASS2_0__SELECTTARGET_B__0_OFFSET))(this, a1, a2);
	}
};
