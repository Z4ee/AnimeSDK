#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6EC09A662396612A_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13E2E020)
#define CLASS_2_6EC09A662396612A_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13E2E1B0)
#define CLASS_2_6EC09A662396612A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13E2E5F0)
#define CLASS_2_6EC09A662396612A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13E2E550)
#define CLASS_2_6EC09A662396612A_METHOD_2_ED3E8DC3AC66A564_OFFSET UNITYSDK_OFFSET(0x13E2E240)
#define CLASS_2_6EC09A662396612A__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E2E130)
#define CLASS_2_6EC09A662396612A__CTOR_OFFSET UNITYSDK_OFFSET(0x13E2E1A0)

inline static constexpr unsigned int Class_2_6EC09A662396612A_TypeDefinitionIndex = 82551;

class Class_2_6EC09A662396612A : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_8 = 0xC3; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::String* Field_2_2; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_1; // 0x30
	::MoleMole::Config::ConfigPosRot* Field_2_6; // 0x38
	::MoleMole::Config::ConfigPosRot* Field_2_7; // 0x40
	::MoleMole::Config::ConfigPosRot* Field_2_5; // 0x48
	::System::Boolean Field_2_3; // 0x50
	::System::Int32 Field_2_4; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6EC09A662396612A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EC09A662396612A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EC09A662396612A_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EC09A662396612A_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_ED3E8DC3AC66A564(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::MoleMole::Config::ConfigPosRot* a5, ::MoleMole::Config::ConfigPosRot* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Collections::Generic::List_1<::System::String*>* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::MoleMole::Config::ConfigPosRot*, ::MoleMole::Config::ConfigPosRot*, ::MoleMole::Config::ConfigPosRot*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6EC09A662396612A_METHOD_2_ED3E8DC3AC66A564_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EC09A662396612A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EC09A662396612A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
