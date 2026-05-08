#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowTimeRewind; }
namespace System { class Action; }

#define CLASS_1_F65AFB72F16EB615_CLASS_1_369D3403BE6B4481_METHOD_1_1CD7D128BFE9E610_OFFSET UNITYSDK_OFFSET(0xFE800A0)
#define CLASS_1_F65AFB72F16EB615_CLASS_1_369D3403BE6B4481__CTOR_OFFSET UNITYSDK_OFFSET(0xFE80090)

inline static constexpr unsigned int Class_1_F65AFB72F16EB615_Class_1_369D3403BE6B4481_TypeDefinitionIndex = 69447;

class Class_1_F65AFB72F16EB615_Class_1_369D3403BE6B4481 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65AFB72F16EB615_CLASS_1_369D3403BE6B4481__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1CD7D128BFE9E610(::MoleMole::Config::ConfigHollowTimeRewind* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowTimeRewind*))((::PBYTE)hIl2Cpp + CLASS_1_F65AFB72F16EB615_CLASS_1_369D3403BE6B4481_METHOD_1_1CD7D128BFE9E610_OFFSET))(this, a1);
	}
};
