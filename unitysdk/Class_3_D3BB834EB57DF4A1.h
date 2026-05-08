#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_D3BB834EB57DF4A1_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x1008E8A0)
#define CLASS_3_D3BB834EB57DF4A1_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1008E6F0)
#define CLASS_3_D3BB834EB57DF4A1_METHOD_3_4E04F0368C455165_OFFSET UNITYSDK_OFFSET(0x1008E910)
#define CLASS_3_D3BB834EB57DF4A1_METHOD_3_5BCEE80010A1EE68_OFFSET UNITYSDK_OFFSET(0x1008ECA0)
#define CLASS_3_D3BB834EB57DF4A1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1008EC10)
#define CLASS_3_D3BB834EB57DF4A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1008EAD0)

inline static constexpr unsigned int Class_3_D3BB834EB57DF4A1_TypeDefinitionIndex = 51099;

class Class_3_D3BB834EB57DF4A1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_3; // 0x18
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3BB834EB57DF4A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3BB834EB57DF4A1_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_D3BB834EB57DF4A1_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3BB834EB57DF4A1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_4E04F0368C455165(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_D3BB834EB57DF4A1_METHOD_3_4E04F0368C455165_OFFSET))(this, a1);
	}

	::System::Void Method_3_5BCEE80010A1EE68(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D3BB834EB57DF4A1_METHOD_3_5BCEE80010A1EE68_OFFSET))(this, a1, a2);
	}
};
