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

#define CLASS_2_12D72A183F54AF4E_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x117A92C0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_01E7A666BC3CA9F9_OFFSET UNITYSDK_OFFSET(0x117A8A60)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_1C6C20AF82FBBC1A_OFFSET UNITYSDK_OFFSET(0x117A9250)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_1EF22ECFE1E62892_OFFSET UNITYSDK_OFFSET(0x117A8650)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_20BE547706A9BCEF_OFFSET UNITYSDK_OFFSET(0x117A7240)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0x117A6F40)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_33F4BD9EF41D729C_OFFSET UNITYSDK_OFFSET(0x117A9140)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x117A94E0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_96951D035B9FC668_OFFSET UNITYSDK_OFFSET(0x117A92D0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_9D521F1B36C9D315_OFFSET UNITYSDK_OFFSET(0x117A9040)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_9F218BA7C451254A_OFFSET UNITYSDK_OFFSET(0x117A73F0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_A323A7720C85F580_OFFSET UNITYSDK_OFFSET(0x117A7930)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x117A7490)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_D89E9B7A3325AE84_OFFSET UNITYSDK_OFFSET(0x117A7BE0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x117A77F0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_F773D945760BF918_OFFSET UNITYSDK_OFFSET(0x117A74F0)
#define CLASS_2_12D72A183F54AF4E_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x117A7750)
#define CLASS_2_12D72A183F54AF4E_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x117A6ED0)
#define CLASS_2_12D72A183F54AF4E__CTOR_OFFSET UNITYSDK_OFFSET(0x117A92E0)
#define CLASS_2_12D72A183F54AF4E___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x117A9480)

inline static constexpr unsigned int Class_2_12D72A183F54AF4E_TypeDefinitionIndex = 50782;

class Class_2_12D72A183F54AF4E : public ::Class_1_47C4886CB6C61234
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* Field_2_7; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_4; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x30
	::RPG::GameCore::GlobalVisibilityControl* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Field_2_8; // 0x40
	::RPG::GameCore::TaskContext* Field_2_1; // 0x48
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_5; // 0x50
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

	::System::Void Method_2_F773D945760BF918(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_12D72A183F54AF4E_METHOD_2_F773D945760BF918_OFFSET))(this, a1);
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
