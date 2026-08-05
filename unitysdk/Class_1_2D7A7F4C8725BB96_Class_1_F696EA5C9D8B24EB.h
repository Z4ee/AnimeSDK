#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMisc; }
namespace System { class Action; }

#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_F696EA5C9D8B24EB_METHOD_1_5E949866C71006DC_OFFSET UNITYSDK_OFFSET(0x12BAC510)
#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_F696EA5C9D8B24EB__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAC500)

inline static constexpr unsigned int Class_1_2D7A7F4C8725BB96_Class_1_F696EA5C9D8B24EB_TypeDefinitionIndex = 71697;

class Class_1_2D7A7F4C8725BB96_Class_1_F696EA5C9D8B24EB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_F696EA5C9D8B24EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5E949866C71006DC(::MoleMole::Config::ConfigMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMisc*))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_F696EA5C9D8B24EB_METHOD_1_5E949866C71006DC_OFFSET))(this, a1);
	}
};
