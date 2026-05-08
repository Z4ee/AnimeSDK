#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMisc; }
namespace System { class Action; }

#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_513638181D408A22_METHOD_1_1DFE6F9DE33BDDD5_OFFSET UNITYSDK_OFFSET(0x13A19A10)
#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_513638181D408A22__CTOR_OFFSET UNITYSDK_OFFSET(0x13A19A00)

inline static constexpr unsigned int Class_1_2D7A7F4C8725BB96_Class_1_513638181D408A22_TypeDefinitionIndex = 51210;

class Class_1_2D7A7F4C8725BB96_Class_1_513638181D408A22 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_513638181D408A22__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1DFE6F9DE33BDDD5(::MoleMole::Config::ConfigMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMisc*))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_513638181D408A22_METHOD_1_1DFE6F9DE33BDDD5_OFFSET))(this, a1);
	}
};
