#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAvatarLayoutCameraMisc; }
namespace System { class Action; }

#define CLASS_1_D17955143A7C521B_CLASS_1_12CDE2D6F1CC91D2_METHOD_1_798531327843BC53_OFFSET UNITYSDK_OFFSET(0x12AEC6F0)
#define CLASS_1_D17955143A7C521B_CLASS_1_12CDE2D6F1CC91D2__CTOR_OFFSET UNITYSDK_OFFSET(0x12AEC6E0)

inline static constexpr unsigned int Class_1_D17955143A7C521B_Class_1_12CDE2D6F1CC91D2_TypeDefinitionIndex = 46839;

class Class_1_D17955143A7C521B_Class_1_12CDE2D6F1CC91D2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B_CLASS_1_12CDE2D6F1CC91D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_798531327843BC53(::MoleMole::Config::ConfigAvatarLayoutCameraMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarLayoutCameraMisc*))((::PBYTE)hIl2Cpp + CLASS_1_D17955143A7C521B_CLASS_1_12CDE2D6F1CC91D2_METHOD_1_798531327843BC53_OFFSET))(this, a1);
	}
};
