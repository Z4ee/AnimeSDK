#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraShakes; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_ADA90F6FF4FE19C6__CTOR_OFFSET UNITYSDK_OFFSET(0x13CCEFA0)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_ADA90F6FF4FE19C6_TypeDefinitionIndex = 85496;

class Class_1_6D3799F67B8415DA_Class_1_ADA90F6FF4FE19C6 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraShakes*>* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_ADA90F6FF4FE19C6__CTOR_OFFSET))(this);
	}
};
