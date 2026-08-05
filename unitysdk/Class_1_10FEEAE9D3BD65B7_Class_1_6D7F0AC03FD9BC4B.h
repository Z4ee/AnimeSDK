#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityUnderlyingAnimEvents; }
namespace System { class Action; }

#define CLASS_1_10FEEAE9D3BD65B7_CLASS_1_6D7F0AC03FD9BC4B_METHOD_1_0539D663D0AE3617_OFFSET UNITYSDK_OFFSET(0x1213B480)
#define CLASS_1_10FEEAE9D3BD65B7_CLASS_1_6D7F0AC03FD9BC4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1213B470)

inline static constexpr unsigned int Class_1_10FEEAE9D3BD65B7_Class_1_6D7F0AC03FD9BC4B_TypeDefinitionIndex = 54653;

class Class_1_10FEEAE9D3BD65B7_Class_1_6D7F0AC03FD9BC4B : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10FEEAE9D3BD65B7_CLASS_1_6D7F0AC03FD9BC4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0539D663D0AE3617(::MoleMole::Config::ConfigEntityUnderlyingAnimEvents* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*))((::PBYTE)hIl2Cpp + CLASS_1_10FEEAE9D3BD65B7_CLASS_1_6D7F0AC03FD9BC4B_METHOD_1_0539D663D0AE3617_OFFSET))(this, a1);
	}
};
