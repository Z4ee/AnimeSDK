#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_1A0820588D0058BE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15520570)
#define CLASS_2_1A0820588D0058BE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155205B0)
#define CLASS_2_1A0820588D0058BE___C___SHOWGUIDEDETAILDIALOG_B__5_1_OFFSET UNITYSDK_OFFSET(0x155205C0)

inline static constexpr unsigned int Class_2_1A0820588D0058BE___c_TypeDefinitionIndex = 58801;

class Class_2_1A0820588D0058BE___c : public ::System::Object
{
public:
	static ::Class_2_1A0820588D0058BE___c** StaticGet___9()
	{
		return (::Class_2_1A0820588D0058BE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A0820588D0058BE___c_TypeDefinitionIndex)->GetStaticField(0x3030);
	}
	static ::System::Action** StaticGet___9__5_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A0820588D0058BE___c_TypeDefinitionIndex)->GetStaticField(0x3038);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1A0820588D0058BE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A0820588D0058BE___C__CTOR_OFFSET))(this);
	}

	::System::Void __ShowGuideDetailDialog_b__5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A0820588D0058BE___C___SHOWGUIDEDETAILDIALOG_B__5_1_OFFSET))(this);
	}
};
