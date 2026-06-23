#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraPitchPolars; }
namespace System { class Action; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_7010303583B700DE_METHOD_1_1177694CAA579203_OFFSET UNITYSDK_OFFSET(0x13250F10)
#define CLASS_1_6D3799F67B8415DA_CLASS_1_7010303583B700DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1324CA20)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_7010303583B700DE_TypeDefinitionIndex = 85498;

class Class_1_6D3799F67B8415DA_Class_1_7010303583B700DE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_7010303583B700DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1177694CAA579203(::MoleMole::Config::ConfigCameraPitchPolars* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraPitchPolars*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_7010303583B700DE_METHOD_1_1177694CAA579203_OFFSET))(this, a1);
	}
};
