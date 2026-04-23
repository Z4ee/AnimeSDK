#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_7C4CF87154CFE9B2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129FE650)
#define CLASS_1_7C4CF87154CFE9B2_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x129FE6A0)
#define CLASS_1_7C4CF87154CFE9B2_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x129FE5C0)
#define CLASS_1_7C4CF87154CFE9B2_METHOD_1_53D50926B1AC5CC6_OFFSET UNITYSDK_OFFSET(0x129FE560)
#define CLASS_1_7C4CF87154CFE9B2_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x129FE4B0)
#define CLASS_1_7C4CF87154CFE9B2__CTOR_OFFSET UNITYSDK_OFFSET(0x129FE410)

inline static constexpr unsigned int Class_1_7C4CF87154CFE9B2_TypeDefinitionIndex = 69508;

class Class_1_7C4CF87154CFE9B2 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Boolean Field_1_3; // 0x18
	::System::Int32 Field_1_0; // 0x1C
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_53D50926B1AC5CC6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_METHOD_1_53D50926B1AC5CC6_OFFSET))(this);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
