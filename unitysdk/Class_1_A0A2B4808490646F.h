#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2B9CEF6A344A892C.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpecialBpFeature; }
namespace System { class String; }

#define CLASS_1_A0A2B4808490646F_CLEAR_OFFSET UNITYSDK_OFFSET(0x92C7C40)
#define CLASS_1_A0A2B4808490646F_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x92C7D40)
#define CLASS_1_A0A2B4808490646F_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x92C7D60)
#define CLASS_1_A0A2B4808490646F_METHOD_1_A538D7DBA7BF5017_OFFSET UNITYSDK_OFFSET(0x92C7C90)
#define CLASS_1_A0A2B4808490646F_METHOD_1_F3B68CBB8AE22AB6_OFFSET UNITYSDK_OFFSET(0x92C7BC0)
#define CLASS_1_A0A2B4808490646F_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x92C7D50)
#define CLASS_1_A0A2B4808490646F_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x92C7D70)
#define CLASS_1_A0A2B4808490646F__CTOR_OFFSET UNITYSDK_OFFSET(0x92C7D80)

inline static constexpr unsigned int Class_1_A0A2B4808490646F_TypeDefinitionIndex = 52431;

class Class_1_A0A2B4808490646F : public ::System::Object
{
public:
	// static const ::System::String* Field_1_3; // 0x0
	::RPG::GameCore::SpecialBpFeature* _Config_k__BackingField; // 0x10
	::System::Int32 _Priority_k__BackingField; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0A2B4808490646F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F3B68CBB8AE22AB6(::RPG::GameCore::SpecialBpFeature* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialBpFeature*))((::PBYTE)hIl2Cpp + CLASS_1_A0A2B4808490646F_METHOD_1_F3B68CBB8AE22AB6_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0A2B4808490646F_CLEAR_OFFSET))(this);
	}

	::Struct_2_2B9CEF6A344A892C Method_1_A538D7DBA7BF5017()
	{
		return ((::Struct_2_2B9CEF6A344A892C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0A2B4808490646F_METHOD_1_A538D7DBA7BF5017_OFFSET))(this);
	}

	::RPG::GameCore::SpecialBpFeature* get_Config()
	{
		return ((::RPG::GameCore::SpecialBpFeature*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0A2B4808490646F_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::SpecialBpFeature* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialBpFeature*))((::PBYTE)hIl2Cpp + CLASS_1_A0A2B4808490646F_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0A2B4808490646F_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A0A2B4808490646F_SET_PRIORITY_OFFSET))(this, value);
	}
};
