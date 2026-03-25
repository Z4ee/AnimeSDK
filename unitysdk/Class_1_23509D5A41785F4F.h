#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_23509D5A41785F4F_METHOD_1_2A5728658D11952C_1_OFFSET UNITYSDK_OFFSET(0x119310F0)
#define CLASS_1_23509D5A41785F4F_METHOD_1_2A5728658D11952C_OFFSET UNITYSDK_OFFSET(0x11930FB0)
#define CLASS_1_23509D5A41785F4F_METHOD_1_45FEC0C750BA0294_OFFSET UNITYSDK_OFFSET(0x11931040)
#define CLASS_1_23509D5A41785F4F_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x11930F20)
#define CLASS_1_23509D5A41785F4F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11930EE0)
#define CLASS_1_23509D5A41785F4F__CTOR_OFFSET UNITYSDK_OFFSET(0x11931180)

inline static constexpr unsigned int Class_1_23509D5A41785F4F_TypeDefinitionIndex = 58302;

class Class_1_23509D5A41785F4F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23509D5A41785F4F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23509D5A41785F4F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23509D5A41785F4F_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::System::Void Method_1_2A5728658D11952C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_23509D5A41785F4F_METHOD_1_2A5728658D11952C_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A5728658D11952C_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_23509D5A41785F4F_METHOD_1_2A5728658D11952C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_45FEC0C750BA0294(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_23509D5A41785F4F_METHOD_1_45FEC0C750BA0294_OFFSET))(this, a1, a2);
	}
};
