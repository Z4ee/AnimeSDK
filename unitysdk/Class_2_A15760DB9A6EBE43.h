#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_F5805CBBD0353DD6;
class Class_2_6F065FAFB40880E5;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_A15760DB9A6EBE43_GET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xBBB4FF0)
#define CLASS_2_A15760DB9A6EBE43_METHOD_2_04EAA728819FA889_OFFSET UNITYSDK_OFFSET(0xBBB4DF0)
#define CLASS_2_A15760DB9A6EBE43_METHOD_2_1EDDF6D2F22116E8_OFFSET UNITYSDK_OFFSET(0xBBB4AE0)
#define CLASS_2_A15760DB9A6EBE43_METHOD_2_2C42B39C7EF8A125_OFFSET UNITYSDK_OFFSET(0xBBB4F00)
#define CLASS_2_A15760DB9A6EBE43_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xBBB5010)
#define CLASS_2_A15760DB9A6EBE43_SET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xBBB5000)
#define CLASS_2_A15760DB9A6EBE43__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB5050)
#define CLASS_2_A15760DB9A6EBE43__ONBIND_OFFSET UNITYSDK_OFFSET(0xBBB4C40)
#define CLASS_2_A15760DB9A6EBE43__SETUPVIEW_B__3_0_OFFSET UNITYSDK_OFFSET(0xBBB5080)

inline static constexpr unsigned int Class_2_A15760DB9A6EBE43_TypeDefinitionIndex = 72118;

class Class_2_A15760DB9A6EBE43 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::Class_1_F5805CBBD0353DD6* APPIHABBCGK; // 0x60
	::Class_2_6F065FAFB40880E5* DNLAAFHMCHA; // 0x68
	::RPG::GameCore::ElationTimeAtmosphereType _AtmosphereType_k__BackingField; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1EDDF6D2F22116E8(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_METHOD_2_1EDDF6D2F22116E8_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_04EAA728819FA889()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_METHOD_2_04EAA728819FA889_OFFSET))(this);
	}

	::System::Void Method_2_2C42B39C7EF8A125(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_METHOD_2_2C42B39C7EF8A125_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElationTimeAtmosphereType get_AtmosphereType()
	{
		return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_GET_ATMOSPHERETYPE_OFFSET))(this);
	}

	::System::Void set_AtmosphereType(::RPG::GameCore::ElationTimeAtmosphereType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationTimeAtmosphereType))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_SET_ATMOSPHERETYPE_OFFSET))(this, a1);
	}

	::Class_1_34917908B7833130* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_34917908B7833130*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void _SetupView_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43__SETUPVIEW_B__3_0_OFFSET))(this);
	}
};
