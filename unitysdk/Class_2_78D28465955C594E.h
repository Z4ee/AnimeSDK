#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_F5805CBBD0353DD6;
class Class_2_6F065FAFB40880E5;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_78D28465955C594E_GET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xA840C70)
#define CLASS_2_78D28465955C594E_METHOD_2_04EAA728819FA889_OFFSET UNITYSDK_OFFSET(0xA840A40)
#define CLASS_2_78D28465955C594E_METHOD_2_126122C4780362DE_OFFSET UNITYSDK_OFFSET(0xA840B50)
#define CLASS_2_78D28465955C594E_METHOD_2_1EDDF6D2F22116E8_OFFSET UNITYSDK_OFFSET(0xA8407A0)
#define CLASS_2_78D28465955C594E_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xA840C90)
#define CLASS_2_78D28465955C594E_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xA840CE0)
#define CLASS_2_78D28465955C594E_SET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xA840C80)
#define CLASS_2_78D28465955C594E__CTOR_OFFSET UNITYSDK_OFFSET(0xA840CA0)
#define CLASS_2_78D28465955C594E__ONBIND_OFFSET UNITYSDK_OFFSET(0xA8408B0)
#define CLASS_2_78D28465955C594E__SETUPVIEW_B__3_0_OFFSET UNITYSDK_OFFSET(0xA840CD0)
#define CLASS_2_78D28465955C594E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA840D40)

inline static constexpr unsigned int Class_2_78D28465955C594E_TypeDefinitionIndex = 67445;

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

	::Class_1_CA217ABF4E3B4F3F* Method_2_24748FC20F375725()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void _SetupView_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E__SETUPVIEW_B__3_0_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78D28465955C594E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
