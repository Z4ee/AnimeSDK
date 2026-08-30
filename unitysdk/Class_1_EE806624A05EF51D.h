#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
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

#define CLASS_1_EE806624A05EF51D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x114D88C0)
#define CLASS_1_EE806624A05EF51D_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x114D8F10)
#define CLASS_1_EE806624A05EF51D_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x114D8CB0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_02B7A9B7DE670ADB_OFFSET UNITYSDK_OFFSET(0x114D97F0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_174C431CE81DB2F0_OFFSET UNITYSDK_OFFSET(0x114D9D70)
#define CLASS_1_EE806624A05EF51D_METHOD_1_18ED3561638C3714_OFFSET UNITYSDK_OFFSET(0x114D9BD0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x114D9580)
#define CLASS_1_EE806624A05EF51D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x114D9290)
#define CLASS_1_EE806624A05EF51D_METHOD_1_562FC69A5DAE9DD2_OFFSET UNITYSDK_OFFSET(0x114DA3D0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_5C67DDBD04B39401_OFFSET UNITYSDK_OFFSET(0x114DB990)
#define CLASS_1_EE806624A05EF51D_METHOD_1_6946C610D47FE5F0_OFFSET UNITYSDK_OFFSET(0x114DB760)
#define CLASS_1_EE806624A05EF51D_METHOD_1_6E8BCE0807D23686_OFFSET UNITYSDK_OFFSET(0x114DA4F0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_72024627B7D588D4_OFFSET UNITYSDK_OFFSET(0x114DADA0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_745F93A8744358B2_OFFSET UNITYSDK_OFFSET(0x114D8B70)
#define CLASS_1_EE806624A05EF51D_METHOD_1_857B4CDE4DCB18D6_OFFSET UNITYSDK_OFFSET(0x114DB500)
#define CLASS_1_EE806624A05EF51D_METHOD_1_8EFA08DEED1F023E_OFFSET UNITYSDK_OFFSET(0x114D9620)
#define CLASS_1_EE806624A05EF51D_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x114D8D00)
#define CLASS_1_EE806624A05EF51D_METHOD_1_A11102BDB84BA59F_OFFSET UNITYSDK_OFFSET(0x114D8FD0)
#define CLASS_1_EE806624A05EF51D_METHOD_1_ABFDCAB2EBE17174_OFFSET UNITYSDK_OFFSET(0x114D8910)
#define CLASS_1_EE806624A05EF51D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x114DB720)
#define CLASS_1_EE806624A05EF51D_METHOD_1_E3173ED7944012D8_OFFSET UNITYSDK_OFFSET(0x114DB470)
#define CLASS_1_EE806624A05EF51D_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x114D9330)
#define CLASS_1_EE806624A05EF51D__CCTOR_OFFSET UNITYSDK_OFFSET(0x114DBB00)
#define CLASS_1_EE806624A05EF51D__CTOR_OFFSET UNITYSDK_OFFSET(0x114D86F0)

inline static constexpr unsigned int Class_1_EE806624A05EF51D_TypeDefinitionIndex = 76658;

class Class_1_EE806624A05EF51D : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KIPGEBIACHF()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE806624A05EF51D_TypeDefinitionIndex)->GetStaticField(0x368F0);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_MCNHCAPBMDG()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE806624A05EF51D_TypeDefinitionIndex)->GetStaticField(0x368F8);
	}
	static ::System::Int32* StaticGet_OKABKDMPCEA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE806624A05EF51D_TypeDefinitionIndex)->GetStaticField(0xE3E0);
	}
	// static const ::System::Int32 BBLNFACHMEF = 0x20; // 0x0
	// static const ::System::Single BNAJPMDCNBL; // 0x0
	// static const ::System::Int32 HEFBEOLEHCP = 0x10; // 0x0
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* LDBOPAHKHJL; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x18
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x20
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* JJJAKENOACB; // 0x28
	::System::Boolean ABKMPGNDAHO; // 0x30

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D__CCTOR_OFFSET))();
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_EXECUTE_OFFSET))(this);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_1_ABFDCAB2EBE17174()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_ABFDCAB2EBE17174_OFFSET))(this);
	}

	::System::Void Method_1_A11102BDB84BA59F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_A11102BDB84BA59F_OFFSET))(this);
	}

	::System::Void Method_1_8EFA08DEED1F023E(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_8EFA08DEED1F023E_OFFSET))(this, a1);
	}

	::System::Void Method_1_745F93A8744358B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_745F93A8744358B2_OFFSET))(this);
	}

	::System::Boolean Method_1_18ED3561638C3714(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_F939197C243AEA34* a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_F939197C243AEA34*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_18ED3561638C3714_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_174C431CE81DB2F0(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::FiveDimLightningConfig* a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Vector3, ::RPG::GameCore::FiveDimLightningConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_174C431CE81DB2F0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_02B7A9B7DE670ADB(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_02B7A9B7DE670ADB_OFFSET))(this, a1);
	}

	::System::Void Method_1_562FC69A5DAE9DD2(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimLightningStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimLightningStateType))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_562FC69A5DAE9DD2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_72024627B7D588D4(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimLightningStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimLightningStateType))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_72024627B7D588D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_857B4CDE4DCB18D6(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_857B4CDE4DCB18D6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_E3173ED7944012D8(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_E3173ED7944012D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E8BCE0807D23686(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_F939197C243AEA34* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_F939197C243AEA34*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_6E8BCE0807D23686_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6946C610D47FE5F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_6946C610D47FE5F0_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_5C67DDBD04B39401(::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_EE806624A05EF51D_METHOD_1_5C67DDBD04B39401_OFFSET))(this, a1, a2, a3, a4);
	}
};
