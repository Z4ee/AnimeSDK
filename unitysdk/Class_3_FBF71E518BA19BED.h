#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPG::GameCore { class AdventureCharacterFloatingConfig; }
namespace System { class String; }

#define CLASS_3_FBF71E518BA19BED_METHOD_3_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x9781A30)
#define CLASS_3_FBF71E518BA19BED_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9781AD0)
#define CLASS_3_FBF71E518BA19BED__CTOR_OFFSET UNITYSDK_OFFSET(0x9781AC0)

inline static constexpr unsigned int Class_3_FBF71E518BA19BED_TypeDefinitionIndex = 44706;

class Class_3_FBF71E518BA19BED : public ::RPGTools::Timeline::CustomEventBehaviour
{
public:
	::RPG::GameCore::AdventureCharacterFloatingConfig* Field_3_1; // 0x20
	::System::String* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBF71E518BA19BED__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBF71E518BA19BED_METHOD_3_277F8930086803D1_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBF71E518BA19BED_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
