#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpritePreset; }
namespace System { class String; }

#define CLASS_1_264A97B7351BAC91_METHOD_1_2A2C953A125E41A9_OFFSET UNITYSDK_OFFSET(0x15E9D6E0)
#define CLASS_1_264A97B7351BAC91_METHOD_1_509D0DC9C05459DD_OFFSET UNITYSDK_OFFSET(0x15E9D3E0)
#define CLASS_1_264A97B7351BAC91_METHOD_1_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x15E9D650)
#define CLASS_1_264A97B7351BAC91_METHOD_1_FA53007A29B435C0_1_OFFSET UNITYSDK_OFFSET(0x15E9D540)
#define CLASS_1_264A97B7351BAC91_METHOD_1_FA53007A29B435C0_OFFSET UNITYSDK_OFFSET(0x15E9D750)
#define CLASS_1_264A97B7351BAC91__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9D890)

inline static constexpr unsigned int Class_1_264A97B7351BAC91_TypeDefinitionIndex = 69028;

class Class_1_264A97B7351BAC91 : public ::System::Object
{
public:
	// static const ::System::String* INGDEEGMFHD; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_264A97B7351BAC91__CTOR_OFFSET))(this);
	}

	static ::RPG::GameCore::SpritePreset* Method_1_509D0DC9C05459DD(::System::String* a1)
	{
		return ((::RPG::GameCore::SpritePreset*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_264A97B7351BAC91_METHOD_1_509D0DC9C05459DD_OFFSET))(a1);
	}

	static ::System::String* Method_1_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_264A97B7351BAC91_METHOD_1_F24A112B56A2E4B4_OFFSET))();
	}

	static ::System::String* Method_1_2A2C953A125E41A9()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_264A97B7351BAC91_METHOD_1_2A2C953A125E41A9_OFFSET))();
	}

	static ::System::String* Method_1_FA53007A29B435C0(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_264A97B7351BAC91_METHOD_1_FA53007A29B435C0_OFFSET))(a1);
	}

	static ::System::String* Method_1_FA53007A29B435C0_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_264A97B7351BAC91_METHOD_1_FA53007A29B435C0_1_OFFSET))(a1);
	}
};
