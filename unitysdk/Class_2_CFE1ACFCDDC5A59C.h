#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_185.h"
#include "unitysdk/RPG/GameCore/PropState.h"

namespace RPG::Client::Prop::PillarPuzzle { class PillarPuzzleBoard; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_CFE1ACFCDDC5A59C_METHOD_2_5CD097F9288D9BC7_OFFSET UNITYSDK_OFFSET(0x925A3A0)
#define CLASS_2_CFE1ACFCDDC5A59C__CTOR_OFFSET UNITYSDK_OFFSET(0x925A190)

inline static constexpr unsigned int Class_2_CFE1ACFCDDC5A59C_TypeDefinitionIndex = 72439;

class Class_2_CFE1ACFCDDC5A59C : public ::Class_1_43BD383C98B4C0C5_185
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::PropState>* Field_2_0; // 0x10
	::System::Int32 Field_2_3; // 0x18
	::System::Int32 Field_2_1; // 0x1C
	::System::Int32 Field_2_2; // 0x20
	::System::Int32 Field_2_4; // 0x24

	::System::Void _ctor(::RPG::Client::Prop::PillarPuzzle::PillarPuzzleBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PillarPuzzle::PillarPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_2_CFE1ACFCDDC5A59C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CD097F9288D9BC7(::System::UInt32 a1, ::RPG::GameCore::PropState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + CLASS_2_CFE1ACFCDDC5A59C_METHOD_2_5CD097F9288D9BC7_OFFSET))(this, a1, a2);
	}
};
