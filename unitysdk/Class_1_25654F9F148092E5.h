#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D93F8AE271D8A728;
namespace System { class String; }

#define CLASS_1_25654F9F148092E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A57C230)
#define CLASS_1_25654F9F148092E5_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A57C2C0)
#define CLASS_1_25654F9F148092E5_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1A57C270)
#define CLASS_1_25654F9F148092E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5793B0)

inline static constexpr unsigned int Class_1_25654F9F148092E5_TypeDefinitionIndex = 36278;

class Class_1_25654F9F148092E5 : public ::System::Object
{
public:
	::Class_1_D93F8AE271D8A728* EEFMDEHLLFI; // 0x10
	::System::String* GIDAEFPOGHI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25654F9F148092E5__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25654F9F148092E5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_D93F8AE271D8A728* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*))((::PBYTE)hIl2Cpp + CLASS_1_25654F9F148092E5_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25654F9F148092E5_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
