#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCityHollowMap; }
namespace System { class Action; }

#define CLASS_1_15CBD0C4DF598F0C_CLASS_1_8B14B532BDF66F6A_METHOD_1_F90FB5415A7AE29B_OFFSET UNITYSDK_OFFSET(0x1775FA60)
#define CLASS_1_15CBD0C4DF598F0C_CLASS_1_8B14B532BDF66F6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1775FA50)

inline static constexpr unsigned int Class_1_15CBD0C4DF598F0C_Class_1_8B14B532BDF66F6A_TypeDefinitionIndex = 73720;

class Class_1_15CBD0C4DF598F0C_Class_1_8B14B532BDF66F6A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15CBD0C4DF598F0C_CLASS_1_8B14B532BDF66F6A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F90FB5415A7AE29B(::MoleMole::Config::ConfigCityHollowMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCityHollowMap*))((::PBYTE)hIl2Cpp + CLASS_1_15CBD0C4DF598F0C_CLASS_1_8B14B532BDF66F6A_METHOD_1_F90FB5415A7AE29B_OFFSET))(this, a1);
	}
};
