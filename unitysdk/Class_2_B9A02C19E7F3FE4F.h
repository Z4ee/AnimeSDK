#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3E663F02593BDAF0.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B9A02C19E7F3FE4F_METHOD_2_52D7E18109C63A75_OFFSET UNITYSDK_OFFSET(0x1C0D56E0)
#define CLASS_2_B9A02C19E7F3FE4F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D5620)

inline static constexpr unsigned int Class_2_B9A02C19E7F3FE4F_TypeDefinitionIndex = 36741;

class Class_2_B9A02C19E7F3FE4F : public ::Class_1_3E663F02593BDAF0
{
public:
	::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* CHJLIMFAGPJ; // 0x20
	::Class_2_21AD365C113DC484* KKFCJOJLGCO; // 0x28
	::System::UInt32 DCBJLCHENHJ; // 0x30
	::System::UInt32 HDHPNOOMAGE; // 0x34

	::System::Void _ctor(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B9A02C19E7F3FE4F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_21AD365C113DC484*>* Method_2_52D7E18109C63A75()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_21AD365C113DC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9A02C19E7F3FE4F_METHOD_2_52D7E18109C63A75_OFFSET))(this);
	}
};
