#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class InteractEntryModeBuddy; }

#define CLASS_3_6823530D7100EA9E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14302820)
#define CLASS_3_6823530D7100EA9E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14302980)
#define CLASS_3_6823530D7100EA9E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x14302900)
#define CLASS_3_6823530D7100EA9E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x143027D0)
#define CLASS_3_6823530D7100EA9E__CCTOR_OFFSET UNITYSDK_OFFSET(0x14302870)
#define CLASS_3_6823530D7100EA9E__CTOR_OFFSET UNITYSDK_OFFSET(0x143028F0)

inline static constexpr unsigned int Class_3_6823530D7100EA9E_TypeDefinitionIndex = 90651;

class Class_3_6823530D7100EA9E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0x8F; // 0x0
	::MoleMole::InteractEntryModeBuddy* Field_3_7; // 0x48
	::System::Boolean Field_3_0; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6823530D7100EA9E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6823530D7100EA9E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6823530D7100EA9E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6823530D7100EA9E_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_6823530D7100EA9E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_6823530D7100EA9E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_6823530D7100EA9E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6823530D7100EA9E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
