#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/STTaskExecutePhase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_4_2874B2771F6EE431_METHOD_4_09B2AA2E3E18F31B_OFFSET UNITYSDK_OFFSET(0x1BE99540)
#define CLASS_4_2874B2771F6EE431_METHOD_4_491DC5019255BE43_OFFSET UNITYSDK_OFFSET(0x1BE99580)
#define CLASS_4_2874B2771F6EE431__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE99570)

inline static constexpr unsigned int Class_4_2874B2771F6EE431_TypeDefinitionIndex = 21632;

class Class_4_2874B2771F6EE431 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* Field_4_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_4_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_4_2; // 0x28
	::System::Boolean Field_4_3; // 0x30
	::RPG::GameCore::STTaskExecutePhase Field_4_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2874B2771F6EE431__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_09B2AA2E3E18F31B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2874B2771F6EE431*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2874B2771F6EE431*&))((::PBYTE)hIl2Cpp + CLASS_4_2874B2771F6EE431_METHOD_4_09B2AA2E3E18F31B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_491DC5019255BE43(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2874B2771F6EE431* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2874B2771F6EE431*))((::PBYTE)hIl2Cpp + CLASS_4_2874B2771F6EE431_METHOD_4_491DC5019255BE43_OFFSET))(a1, a2);
	}
};
