#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraCutscenes; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_4D37EE27A5EF72F4__CTOR_OFFSET UNITYSDK_OFFSET(0x16B2B6A0)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_4D37EE27A5EF72F4_TypeDefinitionIndex = 59852;

class Class_1_6D3799F67B8415DA_Class_1_4D37EE27A5EF72F4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutscenes*>* Field_1_2; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_4D37EE27A5EF72F4__CTOR_OFFSET))(this);
	}
};
