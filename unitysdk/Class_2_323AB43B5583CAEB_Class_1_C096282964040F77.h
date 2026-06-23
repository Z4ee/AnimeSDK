#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_323AB43B5583CAEB;
class Class_2_CD42631606067E6B;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntry; }

#define CLASS_2_323AB43B5583CAEB_CLASS_1_C096282964040F77_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x17AC7C20)
#define CLASS_2_323AB43B5583CAEB_CLASS_1_C096282964040F77_METHOD_1_EEC2F7E3485A76DF_OFFSET UNITYSDK_OFFSET(0x17AC7610)
#define CLASS_2_323AB43B5583CAEB_CLASS_1_C096282964040F77__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC7600)

inline static constexpr unsigned int Class_2_323AB43B5583CAEB_Class_1_C096282964040F77_TypeDefinitionIndex = 50417;

class Class_2_323AB43B5583CAEB_Class_1_C096282964040F77 : public ::System::Object
{
public:
	::MoleMole::Config::StageEntry* Field_1_2; // 0x10
	::Class_2_323AB43B5583CAEB* Field_1_0; // 0x18
	::Class_2_CD42631606067E6B* Field_1_4; // 0x20
	::MoleMole::Battle::Entity* Field_1_5; // 0x28
	::System::Boolean Field_1_6; // 0x30
	::System::Boolean Field_1_3; // 0x31
	::System::Boolean Field_1_1; // 0x32

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_CLASS_1_C096282964040F77__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EEC2F7E3485A76DF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_CLASS_1_C096282964040F77_METHOD_1_EEC2F7E3485A76DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_323AB43B5583CAEB_CLASS_1_C096282964040F77_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}
};
