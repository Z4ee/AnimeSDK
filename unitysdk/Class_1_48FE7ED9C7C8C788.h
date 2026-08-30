#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_48FE7ED9C7C8C788_Class_1_0B550233887B05A3;
class Class_1_48FE7ED9C7C8C788_Class_1_8252B2A712AB36FF;
class Class_1_D3A6B6039BF3B0D1_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_48FE7ED9C7C8C788_METHOD_1_07DC6D3F4E37B22B_OFFSET UNITYSDK_OFFSET(0xBBABB50)
#define CLASS_1_48FE7ED9C7C8C788_METHOD_1_F12098C999B7D314_OFFSET UNITYSDK_OFFSET(0xBBABAC0)
#define CLASS_1_48FE7ED9C7C8C788__CTOR_OFFSET UNITYSDK_OFFSET(0xBBAC7B0)

inline static constexpr unsigned int Class_1_48FE7ED9C7C8C788_TypeDefinitionIndex = 56267;

class Class_1_48FE7ED9C7C8C788 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_48FE7ED9C7C8C788_Class_1_8252B2A712AB36FF*>* FHNILDEKKOP; // 0x10
	::System::Collections::Generic::List_1<::Class_1_48FE7ED9C7C8C788_Class_1_0B550233887B05A3*>* AEGOBFGGCLF; // 0x18
	::System::UInt32 ADMKIBOHAGG; // 0x20
	::System::Int32 HDPPACHDAOA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FE7ED9C7C8C788__CTOR_OFFSET))(this);
	}

	::Class_1_48FE7ED9C7C8C788_Class_1_0B550233887B05A3* Method_1_F12098C999B7D314()
	{
		return ((::Class_1_48FE7ED9C7C8C788_Class_1_0B550233887B05A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FE7ED9C7C8C788_METHOD_1_F12098C999B7D314_OFFSET))(this);
	}

	::Class_1_D3A6B6039BF3B0D1_1* Method_1_07DC6D3F4E37B22B()
	{
		return ((::Class_1_D3A6B6039BF3B0D1_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FE7ED9C7C8C788_METHOD_1_07DC6D3F4E37B22B_OFFSET))(this);
	}
};
