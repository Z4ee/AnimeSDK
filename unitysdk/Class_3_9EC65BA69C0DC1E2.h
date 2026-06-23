#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class String; }

#define CLASS_3_9EC65BA69C0DC1E2_METHOD_3_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x16B0BE60)
#define CLASS_3_9EC65BA69C0DC1E2_METHOD_3_24F251F5B22EF957_OFFSET UNITYSDK_OFFSET(0x16B0AF70)
#define CLASS_3_9EC65BA69C0DC1E2_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x16B0BF00)
#define CLASS_3_9EC65BA69C0DC1E2_METHOD_3_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16B0BC30)
#define CLASS_3_9EC65BA69C0DC1E2_METHOD_3_9A567E83B9489A67_OFFSET UNITYSDK_OFFSET(0x16B0BA20)
#define CLASS_3_9EC65BA69C0DC1E2_METHOD_3_DED213D141D47C4F_OFFSET UNITYSDK_OFFSET(0x16B0BCA0)
#define CLASS_3_9EC65BA69C0DC1E2__CTOR_OFFSET UNITYSDK_OFFSET(0x16B0AF60)

inline static constexpr unsigned int Class_3_9EC65BA69C0DC1E2_TypeDefinitionIndex = 46132;

class Class_3_9EC65BA69C0DC1E2 : public ::Class_2_AB0C166B76D82BF6
{
public:
	// static const ::System::String* Field_3_0; // 0x0

	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_9EC65BA69C0DC1E2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_24F251F5B22EF957(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9EC65BA69C0DC1E2_METHOD_3_24F251F5B22EF957_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DED213D141D47C4F(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_9EC65BA69C0DC1E2_METHOD_3_DED213D141D47C4F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9EC65BA69C0DC1E2_METHOD_3_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Boolean Method_3_9A567E83B9489A67(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_9EC65BA69C0DC1E2_METHOD_3_9A567E83B9489A67_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_04DE4FBB293DFBD6(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_9EC65BA69C0DC1E2_METHOD_3_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9EC65BA69C0DC1E2_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};
