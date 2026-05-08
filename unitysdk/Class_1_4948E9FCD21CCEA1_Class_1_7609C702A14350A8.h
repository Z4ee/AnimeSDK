#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_4948E9FCD21CCEA1_Class_1_174E2793BBEC2575;
namespace MoleMole { class ConfigTimelineDataExtra; }

#define CLASS_1_4948E9FCD21CCEA1_CLASS_1_7609C702A14350A8_METHOD_1_83A74F6BD5FB2415_OFFSET UNITYSDK_OFFSET(0x107DD2B0)
#define CLASS_1_4948E9FCD21CCEA1_CLASS_1_7609C702A14350A8__CTOR_OFFSET UNITYSDK_OFFSET(0x107DD2A0)

inline static constexpr unsigned int Class_1_4948E9FCD21CCEA1_Class_1_7609C702A14350A8_TypeDefinitionIndex = 55840;

class Class_1_4948E9FCD21CCEA1_Class_1_7609C702A14350A8 : public ::System::Object
{
public:
	::Class_1_4948E9FCD21CCEA1_Class_1_174E2793BBEC2575* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4948E9FCD21CCEA1_CLASS_1_7609C702A14350A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_83A74F6BD5FB2415(::MoleMole::ConfigTimelineDataExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineDataExtra*))((::PBYTE)hIl2Cpp + CLASS_1_4948E9FCD21CCEA1_CLASS_1_7609C702A14350A8_METHOD_1_83A74F6BD5FB2415_OFFSET))(this, a1);
	}
};
