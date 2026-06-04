#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B4357A1C72BABC6B;
class Class_1_F939197C243AEA34;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimLightningConfig; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_FE38724DC6B33B98_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFF3C840)
#define CLASS_1_FE38724DC6B33B98_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xFF3CE40)
#define CLASS_1_FE38724DC6B33B98_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xFF3CBE0)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_02B7A9B7DE670ADB_OFFSET UNITYSDK_OFFSET(0xFF3D610)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_18ED3561638C3714_OFFSET UNITYSDK_OFFSET(0xFF3D980)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xFF3D3A0)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xFF3D120)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_562FC69A5DAE9DD2_OFFSET UNITYSDK_OFFSET(0xFF3DF10)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_588419A0947C86F7_OFFSET UNITYSDK_OFFSET(0xFF3DB20)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_5C67DDBD04B39401_OFFSET UNITYSDK_OFFSET(0xFF3EF10)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_6946C610D47FE5F0_OFFSET UNITYSDK_OFFSET(0xFF3ED30)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_6E8BCE0807D23686_OFFSET UNITYSDK_OFFSET(0xFF3E030)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_745F93A8744358B2_OFFSET UNITYSDK_OFFSET(0xFF3CAA0)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_841AE65B30A64BC9_OFFSET UNITYSDK_OFFSET(0xFF3E8C0)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_8EFA08DEED1F023E_OFFSET UNITYSDK_OFFSET(0xFF3D440)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xFF3CC30)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_A11102BDB84BA59F_OFFSET UNITYSDK_OFFSET(0xFF3CF00)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_ABFDCAB2EBE17174_OFFSET UNITYSDK_OFFSET(0xFF3C890)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFF3ECF0)
#define CLASS_1_FE38724DC6B33B98_METHOD_1_E9CACBD1DC19ED90_OFFSET UNITYSDK_OFFSET(0xFF3EBB0)
#define CLASS_1_FE38724DC6B33B98_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xFF3D1C0)
#define CLASS_1_FE38724DC6B33B98__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF3F080)
#define CLASS_1_FE38724DC6B33B98__CTOR_OFFSET UNITYSDK_OFFSET(0xFF3C670)

inline static constexpr unsigned int Class_1_FE38724DC6B33B98_TypeDefinitionIndex = 71655;

class Class_1_FE38724DC6B33B98 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE38724DC6B33B98_TypeDefinitionIndex)->GetStaticField(0x9DB0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE38724DC6B33B98_TypeDefinitionIndex)->GetStaticField(0x4320);
	}
	// static const ::System::Int32 Field_1_2 = 0x20; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_4; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* Field_1_5; // 0x18
	::Class_1_B4357A1C72BABC6B* Field_1_6; // 0x20
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_7; // 0x28
	::System::Boolean Field_1_8; // 0x30

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98__CCTOR_OFFSET))();
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_EXECUTE_OFFSET))(this);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_1_ABFDCAB2EBE17174()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_ABFDCAB2EBE17174_OFFSET))(this);
	}

	::System::Void Method_1_A11102BDB84BA59F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_A11102BDB84BA59F_OFFSET))(this);
	}

	::System::Void Method_1_8EFA08DEED1F023E(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_8EFA08DEED1F023E_OFFSET))(this, a1);
	}

	::System::Void Method_1_745F93A8744358B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_745F93A8744358B2_OFFSET))(this);
	}

	::System::Boolean Method_1_18ED3561638C3714(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_F939197C243AEA34* a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_F939197C243AEA34*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_18ED3561638C3714_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_588419A0947C86F7(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::FiveDimLightningConfig* a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Vector3, ::RPG::GameCore::FiveDimLightningConfig*))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_588419A0947C86F7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_02B7A9B7DE670ADB(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_02B7A9B7DE670ADB_OFFSET))(this, a1);
	}

	::System::Void Method_1_562FC69A5DAE9DD2(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimLightningStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimLightningStateType))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_562FC69A5DAE9DD2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_841AE65B30A64BC9(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimLightningStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimLightningStateType))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_841AE65B30A64BC9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9CACBD1DC19ED90(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_E9CACBD1DC19ED90_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6E8BCE0807D23686(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_F939197C243AEA34* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_F939197C243AEA34*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_6E8BCE0807D23686_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6946C610D47FE5F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_6946C610D47FE5F0_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_5C67DDBD04B39401(::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_FE38724DC6B33B98_METHOD_1_5C67DDBD04B39401_OFFSET))(this, a1, a2, a3, a4);
	}
};
