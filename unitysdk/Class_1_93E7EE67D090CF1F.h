#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_20;
namespace System { class String; }

#define CLASS_1_93E7EE67D090CF1F_METHOD_1_F08D00B23152A0C0_OFFSET UNITYSDK_OFFSET(0x1AC06950)
#define CLASS_1_93E7EE67D090CF1F_SET_OFFSET UNITYSDK_OFFSET(0x1AC0DA20)
#define CLASS_1_93E7EE67D090CF1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC07C60)

inline static constexpr unsigned int Class_1_93E7EE67D090CF1F_TypeDefinitionIndex = 33403;

class Class_1_93E7EE67D090CF1F : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93E7EE67D090CF1F__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_93E7EE67D090CF1F_SET_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_F08D00B23152A0C0(::Class_0_16E4307DCC419505_20* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_20*))((::PBYTE)hIl2Cpp + CLASS_1_93E7EE67D090CF1F_METHOD_1_F08D00B23152A0C0_OFFSET))(a1);
	}
};
