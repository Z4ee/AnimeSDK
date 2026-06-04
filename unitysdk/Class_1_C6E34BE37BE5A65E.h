#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C6E34BE37BE5A65E_METHOD_1_25719E5F54EC4486_OFFSET UNITYSDK_OFFSET(0x13FF5A90)
#define CLASS_1_C6E34BE37BE5A65E_METHOD_1_2A5728658D11952C_1_OFFSET UNITYSDK_OFFSET(0x13FF5B40)
#define CLASS_1_C6E34BE37BE5A65E_METHOD_1_2A5728658D11952C_OFFSET UNITYSDK_OFFSET(0x13FF5A00)
#define CLASS_1_C6E34BE37BE5A65E_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x13FF5970)
#define CLASS_1_C6E34BE37BE5A65E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13FF5930)
#define CLASS_1_C6E34BE37BE5A65E__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF5BD0)

inline static constexpr unsigned int Class_1_C6E34BE37BE5A65E_TypeDefinitionIndex = 66523;

class Class_1_C6E34BE37BE5A65E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6E34BE37BE5A65E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6E34BE37BE5A65E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6E34BE37BE5A65E_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::System::Void Method_1_2A5728658D11952C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C6E34BE37BE5A65E_METHOD_1_2A5728658D11952C_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A5728658D11952C_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C6E34BE37BE5A65E_METHOD_1_2A5728658D11952C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_25719E5F54EC4486(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C6E34BE37BE5A65E_METHOD_1_25719E5F54EC4486_OFFSET))(this, a1, a2);
	}
};
