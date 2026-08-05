#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76B74AA768347996.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class String; }

#define CLASS_3_2D4976229A098E1C_METHOD_3_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x167C5160)
#define CLASS_3_2D4976229A098E1C_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x167C50C0)
#define CLASS_3_2D4976229A098E1C_METHOD_3_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x167C4E90)
#define CLASS_3_2D4976229A098E1C_METHOD_3_9A567E83B9489A67_OFFSET UNITYSDK_OFFSET(0x167C4C70)
#define CLASS_3_2D4976229A098E1C_METHOD_3_DED213D141D47C4F_OFFSET UNITYSDK_OFFSET(0x167C4F00)
#define CLASS_3_2D4976229A098E1C_METHOD_3_EAD72EA56C1F4EDC_OFFSET UNITYSDK_OFFSET(0x167C41C0)
#define CLASS_3_2D4976229A098E1C__CTOR_OFFSET UNITYSDK_OFFSET(0x167C41B0)

inline static constexpr unsigned int Class_3_2D4976229A098E1C_TypeDefinitionIndex = 61945;

class Class_3_2D4976229A098E1C : public ::Class_2_76B74AA768347996
{
public:
	// static const ::System::String* Field_3_0; // 0x0

	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_2D4976229A098E1C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_EAD72EA56C1F4EDC(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2D4976229A098E1C_METHOD_3_EAD72EA56C1F4EDC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DED213D141D47C4F(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_2D4976229A098E1C_METHOD_3_DED213D141D47C4F_OFFSET))(this, a1);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2D4976229A098E1C_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_3_9A567E83B9489A67(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2D4976229A098E1C_METHOD_3_9A567E83B9489A67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2D4976229A098E1C_METHOD_3_6B72D4EE8C6E907F_OFFSET))();
	}

	::System::Boolean Method_3_04DE4FBB293DFBD6(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_2D4976229A098E1C_METHOD_3_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}
};
