#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace MoleMole::Config { class HackObjectTrait; }
namespace System { class String; }

#define CLASS_3_F1E1EC202F4215BC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1B5951A0)
#define CLASS_3_F1E1EC202F4215BC_METHOD_3_096CA17C58540A24_OFFSET UNITYSDK_OFFSET(0x1B595470)
#define CLASS_3_F1E1EC202F4215BC_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1B595280)
#define CLASS_3_F1E1EC202F4215BC_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1B5954D0)
#define CLASS_3_F1E1EC202F4215BC_METHOD_3_E7C3867FAEA19A10_OFFSET UNITYSDK_OFFSET(0x1B595310)
#define CLASS_3_F1E1EC202F4215BC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1B595150)
#define CLASS_3_F1E1EC202F4215BC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5951F0)
#define CLASS_3_F1E1EC202F4215BC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B595270)

inline static constexpr unsigned int Class_3_F1E1EC202F4215BC_TypeDefinitionIndex = 70318;

class Class_3_F1E1EC202F4215BC : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::UInt32 Field_3_3 = 0x13130F5; // 0x0
	// static const ::System::Int32 Field_3_5 = 0x8B; // 0x0
	::MoleMole::Config::HackObjectTrait* Field_3_0; // 0x48
	::System::UInt32 Field_3_4; // 0x50
	::System::Boolean Field_3_1; // 0x54

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

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1E1EC202F4215BC_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Foundation::ViewObject::ViewObjectHandle Method_3_E7C3867FAEA19A10()
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1E1EC202F4215BC_METHOD_3_E7C3867FAEA19A10_OFFSET))(this);
	}

	::System::Void Method_3_096CA17C58540A24(::MoleMole::Config::HackObjectTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HackObjectTrait*))((::PBYTE)hIl2Cpp + CLASS_3_F1E1EC202F4215BC_METHOD_3_096CA17C58540A24_OFFSET))(this, a1);
	}

	static ::Class_3_F1E1EC202F4215BC* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F1E1EC202F4215BC*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F1E1EC202F4215BC_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
