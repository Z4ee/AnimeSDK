#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_43BD383C98B4C0C5_139_CLASS_1_09459EC1D6A61059_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x926E6E0)
#define CLASS_1_43BD383C98B4C0C5_139_CLASS_1_09459EC1D6A61059__CTOR_OFFSET UNITYSDK_OFFSET(0x926E6D0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_139_Class_1_09459EC1D6A61059_TypeDefinitionIndex = 60337;

class Class_1_43BD383C98B4C0C5_139_Class_1_09459EC1D6A61059 : public ::System::Object
{
public:
	::RPG::Client::IAvatarInfoProvider* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::IAvatarInfoProvider* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139_CLASS_1_09459EC1D6A61059__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139_CLASS_1_09459EC1D6A61059_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}
};
