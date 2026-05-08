#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraLockTargetDatas; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_D31157C9ECBE9FF4_METHOD_1_D6E51CA2CE10EAE7_OFFSET UNITYSDK_OFFSET(0x17406CF0)
#define CLASS_1_6D3799F67B8415DA_CLASS_1_D31157C9ECBE9FF4__CTOR_OFFSET UNITYSDK_OFFSET(0x17406CE0)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_D31157C9ECBE9FF4_TypeDefinitionIndex = 60497;

class Class_1_6D3799F67B8415DA_Class_1_D31157C9ECBE9FF4 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigCameraLockTargetDatas*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraLockTargetDatas*>* Field_1_0; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_D31157C9ECBE9FF4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D6E51CA2CE10EAE7(::MoleMole::Config::ConfigCameraLockTargetDatas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraLockTargetDatas*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_D31157C9ECBE9FF4_METHOD_1_D6E51CA2CE10EAE7_OFFSET))(this, a1);
	}
};
