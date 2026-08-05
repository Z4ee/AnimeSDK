#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityRadialBlurs; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_C84AD9E5D9847ED1_METHOD_1_39D38D3A9F559FC4_OFFSET UNITYSDK_OFFSET(0x14FCD700)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_C84AD9E5D9847ED1__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCD6F0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_C84AD9E5D9847ED1_TypeDefinitionIndex = 67627;

class Class_1_5C5D1BCD30A891BA_Class_1_C84AD9E5D9847ED1 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityRadialBlurs*>* Field_1_7; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_C84AD9E5D9847ED1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_39D38D3A9F559FC4(::MoleMole::Config::ConfigEntityRadialBlurs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityRadialBlurs*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_C84AD9E5D9847ED1_METHOD_1_39D38D3A9F559FC4_OFFSET))(this, a1);
	}
};
