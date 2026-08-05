#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_65593FAB9D2A0EF1_Enum_3_F25456077B59DF83.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_65593FAB9D2A0EF1_METHOD_2_304E834706E16189_OFFSET UNITYSDK_OFFSET(0x11BE7B60)
#define CLASS_2_65593FAB9D2A0EF1_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11BE7830)
#define CLASS_2_65593FAB9D2A0EF1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x11BE79A0)
#define CLASS_2_65593FAB9D2A0EF1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11BE7AC0)
#define CLASS_2_65593FAB9D2A0EF1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11BE7A30)
#define CLASS_2_65593FAB9D2A0EF1__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BE7920)
#define CLASS_2_65593FAB9D2A0EF1__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE7990)

inline static constexpr unsigned int Class_2_65593FAB9D2A0EF1_TypeDefinitionIndex = 81527;

class Class_2_65593FAB9D2A0EF1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0xB; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_0; // 0x20
	::Class_2_65593FAB9D2A0EF1_Enum_3_F25456077B59DF83 Field_2_2; // 0x28
	::MoleMole::Config::AidAttackType Field_2_1; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_65593FAB9D2A0EF1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65593FAB9D2A0EF1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65593FAB9D2A0EF1_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65593FAB9D2A0EF1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65593FAB9D2A0EF1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65593FAB9D2A0EF1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_304E834706E16189(::Class_2_65593FAB9D2A0EF1_Enum_3_F25456077B59DF83 a1, ::MoleMole::Config::AidAttackType a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_65593FAB9D2A0EF1_Enum_3_F25456077B59DF83, ::MoleMole::Config::AidAttackType, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_65593FAB9D2A0EF1_METHOD_2_304E834706E16189_OFFSET))(this, a1, a2, a3);
	}
};
