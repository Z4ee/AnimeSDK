#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_15585BBAF3B4A3D9_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0xE87C170)
#define CLASS_3_15585BBAF3B4A3D9_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xE87BFC0)
#define CLASS_3_15585BBAF3B4A3D9_METHOD_3_B5CEF7C539A7DC9B_OFFSET UNITYSDK_OFFSET(0xE87C1E0)
#define CLASS_3_15585BBAF3B4A3D9_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE87C5C0)
#define CLASS_3_15585BBAF3B4A3D9__CTOR_OFFSET UNITYSDK_OFFSET(0xE87C480)

inline static constexpr unsigned int Class_3_15585BBAF3B4A3D9_TypeDefinitionIndex = 65271;

class Class_3_15585BBAF3B4A3D9 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x18
	::Class_3_B537A0AA78803363* Field_3_3; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15585BBAF3B4A3D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15585BBAF3B4A3D9_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_15585BBAF3B4A3D9_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15585BBAF3B4A3D9_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_B5CEF7C539A7DC9B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_15585BBAF3B4A3D9_METHOD_3_B5CEF7C539A7DC9B_OFFSET))(this, a1);
	}
};
