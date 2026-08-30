#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_72AD36D88EE41A35_METHOD_1_5A9446C22EB45706_OFFSET UNITYSDK_OFFSET(0x1D84AD50)
#define CLASS_1_72AD36D88EE41A35__CTOR_OFFSET UNITYSDK_OFFSET(0x1D84AF70)

inline static constexpr unsigned int Class_1_72AD36D88EE41A35_TypeDefinitionIndex = 11299;

class Class_1_72AD36D88EE41A35 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* JCNCDOOLACB; // 0x10
	::System::String* ABJGONAEFCB; // 0x18
	::System::UInt32 PHFMCACHFIJ; // 0x20
	::RPG::Client::TextID OENAMINOLLF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72AD36D88EE41A35__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5A9446C22EB45706(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_72AD36D88EE41A35*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_72AD36D88EE41A35*&))((::PBYTE)hIl2Cpp + CLASS_1_72AD36D88EE41A35_METHOD_1_5A9446C22EB45706_OFFSET))(a1, a2);
	}
};
