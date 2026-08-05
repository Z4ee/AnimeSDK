#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1D3B4D4A0A45D58A;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_CA393D2401CE0314_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11CAEAB0)
#define CLASS_1_CA393D2401CE0314_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11CAEB70)
#define CLASS_1_CA393D2401CE0314__CTOR_OFFSET UNITYSDK_OFFSET(0x11CAEAA0)

inline static constexpr unsigned int Class_1_CA393D2401CE0314_TypeDefinitionIndex = 70973;

class Class_1_CA393D2401CE0314 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_1D3B4D4A0A45D58A* Field_1_6; // 0x18
	::MoleMole::Battle::Entity* Field_1_1; // 0x20
	::System::String* Field_1_7; // 0x28
	::System::Int32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA393D2401CE0314__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA393D2401CE0314_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA393D2401CE0314_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
