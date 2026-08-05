#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntitySharedAnimEvents; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5E43193B7E7BBE0F_CLASS_1_E0F441AF0A75A238__CTOR_OFFSET UNITYSDK_OFFSET(0x161AAEC0)

inline static constexpr unsigned int Class_1_5E43193B7E7BBE0F_Class_1_E0F441AF0A75A238_TypeDefinitionIndex = 57521;

class Class_1_5E43193B7E7BBE0F_Class_1_E0F441AF0A75A238 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySharedAnimEvents*>* Field_1_0; // 0x10
	::System::Action* Field_1_6; // 0x18
	::System::Int32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E43193B7E7BBE0F_CLASS_1_E0F441AF0A75A238__CTOR_OFFSET))(this);
	}
};
