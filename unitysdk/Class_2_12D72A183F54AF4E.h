#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GlobalVisibilityControl; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_12D72A183F54AF4E_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x115CA9A0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_01E7A666BC3CA9F9_OFFSET UNITYSDK_OFFSET(0x115CA140)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_1C6C20AF82FBBC1A_OFFSET UNITYSDK_OFFSET(0x115CA930)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_1EF22ECFE1E62892_OFFSET UNITYSDK_OFFSET(0x115C9D30)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_20BE547706A9BCEF_OFFSET UNITYSDK_OFFSET(0x115C8880)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0x115C8580)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_33F4BD9EF41D729C_OFFSET UNITYSDK_OFFSET(0x115CA820)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x115CABC0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_96951D035B9FC668_OFFSET UNITYSDK_OFFSET(0x115CA9B0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_9D521F1B36C9D315_OFFSET UNITYSDK_OFFSET(0x115CA720)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_9F218BA7C451254A_OFFSET UNITYSDK_OFFSET(0x115C8A30)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_A323A7720C85F580_OFFSET UNITYSDK_OFFSET(0x115C9010)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x115C8AD0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_D89E9B7A3325AE84_OFFSET UNITYSDK_OFFSET(0x115C92C0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x115C8ED0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x115C8E30)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_FFB496CF93197B70_OFFSET UNITYSDK_OFFSET(0x115C8B30)
#define CLASS_2_12D72A183F54AF4E_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x115C8510)
#define CLASS_2_12D72A183F54AF4E__CTOR_OFFSET UNITYSDK_OFFSET(0x115CA9C0)
#define CLASS_2_12D72A183F54AF4E___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x115CAB60)

inline static constexpr unsigned int Class_2_12D72A183F54AF4E_TypeDefinitionIndex = 44077;

class Class_2_12D72A183F54AF4E : public ::Class_1_47C4886CB6C61234
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* Field_2_7; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x30
	::RPG::GameCore::GlobalVisibilityControl* Field_2_0; // 0x38
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_5; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_4; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Field_2_8; // 0x50
	::System::Boolean Field_2_3; // 0x58
	::System::Boolean Field_2_6; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E__CTOR_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_20BE547706A9BCEF(::RPG::GameCore::GlobalVisibilityControl* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GlobalVisibilityControl*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_20BE547706A9BCEF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9F218BA7C451254A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_9F218BA7C451254A_OFFSET))(this, a1);
	}

	::System::Void Method_2_232E79648899E21B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_232E79648899E21B_OFFSET))(this);
	}

	::System::Void Method_2_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_CFE6FB160FFF5938_OFFSET))(this);
	}

	::System::Void Method_2_1EF22ECFE1E62892(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_1EF22ECFE1E62892_OFFSET))(this, a1);
	}

	::System::Void Method_2_D89E9B7A3325AE84(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_D89E9B7A3325AE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFB496CF93197B70(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_FFB496CF93197B70_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_2_A323A7720C85F580(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_A323A7720C85F580_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_01E7A666BC3CA9F9(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_01E7A666BC3CA9F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_9D521F1B36C9D315(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_9D521F1B36C9D315_OFFSET))(this, a1);
	}

	::System::Void Method_2_33F4BD9EF41D729C(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_33F4BD9EF41D729C_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C6C20AF82FBBC1A(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_1C6C20AF82FBBC1A_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_GET_NEEDLATEUPDATE_OFFSET))(this);
	}

	::RPG::GameCore::GlobalVisibilityControl* Method_2_96951D035B9FC668()
	{
		return ((::RPG::GameCore::GlobalVisibilityControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_96951D035B9FC668_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
