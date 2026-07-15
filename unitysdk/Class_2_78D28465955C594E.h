#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_F5805CBBD0353DD6;
class Class_2_6F065FAFB40880E5;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_78D28465955C594E_GET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0x186E65D0)
#define CLASS_2_78D28465955C594E_METHOD_2_04EAA728819FA889_OFFSET UNITYSDK_OFFSET(0x186E63A0)
#define CLASS_2_78D28465955C594E_METHOD_2_126122C4780362DE_OFFSET UNITYSDK_OFFSET(0x186E64B0)
#define CLASS_2_78D28465955C594E_METHOD_2_1EDDF6D2F22116E8_OFFSET UNITYSDK_OFFSET(0x186E6070)
#define CLASS_2_78D28465955C594E_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x186E65F0)
#define CLASS_2_78D28465955C594E_SET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0x186E65E0)
#define CLASS_2_78D28465955C594E__CTOR_OFFSET UNITYSDK_OFFSET(0x186E6630)
#define CLASS_2_78D28465955C594E__ONBIND_OFFSET UNITYSDK_OFFSET(0x186E61D0)
#define CLASS_2_78D28465955C594E__SETUPVIEW_B__3_0_OFFSET UNITYSDK_OFFSET(0x186E6660)

inline static constexpr unsigned int Class_2_78D28465955C594E_TypeDefinitionIndex = 68919;

class Class_2_78D28465955C594E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_1_F5805CBBD0353DD6* Field_2_1; // 0x60
	::Class_2_6F065FAFB40880E5* Field_2_2; // 0x68
	::RPG::GameCore::ElationTimeAtmosphereType _AtmosphereType_k__BackingField; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1EDDF6D2F22116E8(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E_METHOD_2_1EDDF6D2F22116E8_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_04EAA728819FA889()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E_METHOD_2_04EAA728819FA889_OFFSET))(this);
	}

	::System::Void Method_2_126122C4780362DE(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E_METHOD_2_126122C4780362DE_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElationTimeAtmosphereType get_AtmosphereType()
	{
		return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E_GET_ATMOSPHERETYPE_OFFSET))(this);
	}

	::System::Void set_AtmosphereType(::RPG::GameCore::ElationTimeAtmosphereType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationTimeAtmosphereType))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E_SET_ATMOSPHERETYPE_OFFSET))(this, a1);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void _SetupView_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E__SETUPVIEW_B__3_0_OFFSET))(this);
	}
};
