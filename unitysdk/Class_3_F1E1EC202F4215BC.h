#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace MoleMole::Config { class HackObjectTrait; }
namespace System { class String; }

#define CLASS_3_F1E1EC202F4215BC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x194AE0D0)
#define CLASS_3_F1E1EC202F4215BC_METHOD_3_096CA17C58540A24_OFFSET UNITYSDK_OFFSET(0x194AE5E0)
#define CLASS_3_F1E1EC202F4215BC_METHOD_3_5457E7C0AD1503B5_OFFSET UNITYSDK_OFFSET(0x194AE1B0)
#define CLASS_3_F1E1EC202F4215BC_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x194AE640)
#define CLASS_3_F1E1EC202F4215BC_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x194AE6D0)
#define CLASS_3_F1E1EC202F4215BC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x194AE080)
#define CLASS_3_F1E1EC202F4215BC__CCTOR_OFFSET UNITYSDK_OFFSET(0x194AE120)
#define CLASS_3_F1E1EC202F4215BC__CTOR_OFFSET UNITYSDK_OFFSET(0x194AE1A0)

inline static constexpr unsigned int Class_3_F1E1EC202F4215BC_TypeDefinitionIndex = 79315;

class Class_3_F1E1EC202F4215BC : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_6; // 0x0
	// static const ::System::Int32 Field_3_5 = 0x1E8875; // 0x0
	// static const ::System::Int32 Field_3_11 = 0x8C; // 0x0
	::MoleMole::Config::HackObjectTrait* Field_3_0; // 0x48
	::System::Boolean Field_3_7; // 0x50
	::System::UInt32 Field_3_4; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F1E1EC202F4215BC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1E1EC202F4215BC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1E1EC202F4215BC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1E1EC202F4215BC_GETCLASSID_OFFSET))(this);
	}

	::Foundation::ViewObject::ViewObjectHandle Method_3_5457E7C0AD1503B5()
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1E1EC202F4215BC_METHOD_3_5457E7C0AD1503B5_OFFSET))(this);
	}

	::System::Void Method_3_096CA17C58540A24(::MoleMole::Config::HackObjectTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HackObjectTrait*))((::PBYTE)hIl2Cpp + CLASS_3_F1E1EC202F4215BC_METHOD_3_096CA17C58540A24_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1E1EC202F4215BC_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_F1E1EC202F4215BC* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F1E1EC202F4215BC*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F1E1EC202F4215BC_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
