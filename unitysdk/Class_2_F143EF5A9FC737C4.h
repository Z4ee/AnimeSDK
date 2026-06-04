#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_2B3811E66EE856E4;
class Class_3_F618693DC2D27561_1;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F143EF5A9FC737C4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAED6430)
#define CLASS_2_F143EF5A9FC737C4_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xAED6870)
#define CLASS_2_F143EF5A9FC737C4_METHOD_2_9556A99C117541C9_OFFSET UNITYSDK_OFFSET(0xAED66F0)
#define CLASS_2_F143EF5A9FC737C4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAED6490)
#define CLASS_2_F143EF5A9FC737C4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAED6690)
#define CLASS_2_F143EF5A9FC737C4_TICK_OFFSET UNITYSDK_OFFSET(0xAED6810)
#define CLASS_2_F143EF5A9FC737C4__CTOR_OFFSET UNITYSDK_OFFSET(0xAED6420)
#define CLASS_2_F143EF5A9FC737C4___IFIXBASEPROXY_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xAED68B0)

inline static constexpr unsigned int Class_2_F143EF5A9FC737C4_TypeDefinitionIndex = 51445;

class Class_2_F143EF5A9FC737C4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_1_2B3811E66EE856E4* Field_2_1; // 0x20
	::Class_3_F618693DC2D27561_1* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F618693DC2D27561_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F618693DC2D27561_1*))((::PBYTE)hIl2Cpp + CLASS_2_F143EF5A9FC737C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F143EF5A9FC737C4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F143EF5A9FC737C4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F143EF5A9FC737C4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_9556A99C117541C9(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::JsonEnum* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_2_F143EF5A9FC737C4_METHOD_2_9556A99C117541C9_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F143EF5A9FC737C4_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F143EF5A9FC737C4_GETCONFIG_OFFSET))(this);
	}

	::RPG::GameCore::TaskConfig* __iFixBaseProxy_GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F143EF5A9FC737C4___IFIXBASEPROXY_GETCONFIG_OFFSET))(this);
	}
};
