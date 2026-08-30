#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_93B185FAC6857365_LuaDataInvokeType.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_BE3F93B4A579826A;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class LuaFunction; }

#define CLASS_2_93B185FAC6857365_GET_ISLUARUNENABLE_OFFSET UNITYSDK_OFFSET(0x1A45D660)
#define CLASS_2_93B185FAC6857365_INIT_OFFSET UNITYSDK_OFFSET(0x1A45BA10)
#define CLASS_2_93B185FAC6857365_METHOD_2_3A04F694896F0AC1_OFFSET UNITYSDK_OFFSET(0x1A45D4B0)
#define CLASS_2_93B185FAC6857365_METHOD_2_3A33512B7EDE11F7_OFFSET UNITYSDK_OFFSET(0x1A45BB80)
#define CLASS_2_93B185FAC6857365_METHOD_2_4661C73DDFEE356C_OFFSET UNITYSDK_OFFSET(0x1A45C6C0)
#define CLASS_2_93B185FAC6857365_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x1A45D620)
#define CLASS_2_93B185FAC6857365_METHOD_2_7C705713E396F0F9_OFFSET UNITYSDK_OFFSET(0x1A45D120)
#define CLASS_2_93B185FAC6857365_METHOD_2_8506E6586B040BAA_OFFSET UNITYSDK_OFFSET(0x1A45D550)
#define CLASS_2_93B185FAC6857365_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A45D510)
#define CLASS_2_93B185FAC6857365_METHOD_2_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0x1A45BD50)
#define CLASS_2_93B185FAC6857365_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x1A45D340)
#define CLASS_2_93B185FAC6857365_METHOD_2_DFC1A3EDA2A65734_OFFSET UNITYSDK_OFFSET(0x1A45BC00)
#define CLASS_2_93B185FAC6857365_SET_ISLUARUNENABLE_OFFSET UNITYSDK_OFFSET(0x1A45D670)
#define CLASS_2_93B185FAC6857365__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A45BA60)
#define CLASS_2_93B185FAC6857365__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A45BAA0)
#define CLASS_2_93B185FAC6857365__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45B970)

inline static constexpr unsigned int Class_2_93B185FAC6857365_TypeDefinitionIndex = 65848;

class Class_2_93B185FAC6857365 : public ::RPG::Client::BaseModule
{
public:
	::XLua::LuaFunction* AFDEHLAAFKB; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_2_93B185FAC6857365_LuaDataInvokeType, ::XLua::LuaFunction*>* PNFIHKCPGPH; // 0x18
	::Il2CppArray<::System::Byte>* IBHJFFNMKKD; // 0x20
	::System::Single PBONMMFLBCP; // 0x28
	::System::Single OOCKPBFDCLK; // 0x2C
	::System::UInt32 EHEPCDFLBMH; // 0x30
	::System::Boolean _IsLuaRunEnable_k__BackingField; // 0x34
	::System::UInt32 LLICGDGPMJL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_INIT_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_3A33512B7EDE11F7(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_METHOD_2_3A33512B7EDE11F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CC15D6CD4D3CC816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_METHOD_2_CC15D6CD4D3CC816_OFFSET))(this);
	}

	::System::Void Method_2_DFC1A3EDA2A65734(::Class_1_BE3F93B4A579826A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE3F93B4A579826A*))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_METHOD_2_DFC1A3EDA2A65734_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C705713E396F0F9(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_METHOD_2_7C705713E396F0F9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_3A04F694896F0AC1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_METHOD_2_3A04F694896F0AC1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_4661C73DDFEE356C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_METHOD_2_4661C73DDFEE356C_OFFSET))(this);
	}

	::System::Void Method_2_8506E6586B040BAA(::Class_2_93B185FAC6857365_LuaDataInvokeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_93B185FAC6857365_LuaDataInvokeType))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_METHOD_2_8506E6586B040BAA_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Boolean get_IsLuaRunEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_GET_ISLUARUNENABLE_OFFSET))(this);
	}

	::System::Void set_IsLuaRunEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_93B185FAC6857365_SET_ISLUARUNENABLE_OFFSET))(this, a1);
	}
};
