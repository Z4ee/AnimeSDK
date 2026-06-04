#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SpikeTrapState.h"
#include "unitysdk/Struct_2_BAC27E6E9012E854.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_71117DDA8AC6CF50_Class_3_356AFFAC7ECD341D_2;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_71117DDA8AC6CF50_EXECUTE_OFFSET UNITYSDK_OFFSET(0xAA77DD0)
#define CLASS_1_71117DDA8AC6CF50_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAA78170)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_0C7C8FB7C93D6C0D_OFFSET UNITYSDK_OFFSET(0xAA79680)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_1DAEA1372099E262_OFFSET UNITYSDK_OFFSET(0xAA79100)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_24A329D99B097DDD_OFFSET UNITYSDK_OFFSET(0xAA7B9E0)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_296DA0B4A0A88323_OFFSET UNITYSDK_OFFSET(0xAA79370)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_2CB47B49FAA2B217_OFFSET UNITYSDK_OFFSET(0xAA7A3D0)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_30A54598479DC246_OFFSET UNITYSDK_OFFSET(0xAA7A130)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_40E800FB1FD16E05_OFFSET UNITYSDK_OFFSET(0xAA7AA80)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_431BB24BF7497552_OFFSET UNITYSDK_OFFSET(0xAA78910)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_43EBAF4AA5BCD2CF_OFFSET UNITYSDK_OFFSET(0xAA7A840)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_4D608CA764ED93B8_OFFSET UNITYSDK_OFFSET(0xAA78890)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_54D1C4FBB478C147_OFFSET UNITYSDK_OFFSET(0xAA79610)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_5CCA677CC5179CD2_OFFSET UNITYSDK_OFFSET(0xAA7A780)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_8AF5889CE210A23E_OFFSET UNITYSDK_OFFSET(0xAA79260)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_94E67AA2B361C292_OFFSET UNITYSDK_OFFSET(0xAA78B70)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_9EBA91CF3EA17E94_OFFSET UNITYSDK_OFFSET(0xAA7A2D0)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_9EC825FBEB717B17_OFFSET UNITYSDK_OFFSET(0xAA7BF50)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_A11102BDB84BA59F_OFFSET UNITYSDK_OFFSET(0xAA781D0)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_A3509141C690232A_OFFSET UNITYSDK_OFFSET(0xAA79F40)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_AAE072CBC3BDE9A4_OFFSET UNITYSDK_OFFSET(0xAA7AE80)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_ABFDCAB2EBE17174_OFFSET UNITYSDK_OFFSET(0xAA77E20)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_B093BC071DA36EAF_OFFSET UNITYSDK_OFFSET(0xAA7AF10)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_B28CF91501E2FCE0_OFFSET UNITYSDK_OFFSET(0xAA7A080)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_B6F71B3A651A50DC_OFFSET UNITYSDK_OFFSET(0xAA78640)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_CC8D448CF86F5A02_OFFSET UNITYSDK_OFFSET(0xAA7B6C0)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_E69FC072783CE58E_OFFSET UNITYSDK_OFFSET(0xAA79180)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_E95B7B424CD0F5AD_OFFSET UNITYSDK_OFFSET(0xAA7BAE0)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_ECFD139D86FABA86_OFFSET UNITYSDK_OFFSET(0xAA7A490)
#define CLASS_1_71117DDA8AC6CF50_METHOD_1_EDC14BF43D2DE2A9_OFFSET UNITYSDK_OFFSET(0xAA78030)
#define CLASS_1_71117DDA8AC6CF50_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xAA783F0)
#define CLASS_1_71117DDA8AC6CF50__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA7C270)
#define CLASS_1_71117DDA8AC6CF50__CTOR_OFFSET UNITYSDK_OFFSET(0xAA77C00)

inline static constexpr unsigned int Class_1_71117DDA8AC6CF50_TypeDefinitionIndex = 71679;

class Class_1_71117DDA8AC6CF50 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71117DDA8AC6CF50_TypeDefinitionIndex)->GetStaticField(0x68B30);
	}
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_3; // 0x10
	::RPG::PoolDictionary_2<::System::Int32, ::Class_1_71117DDA8AC6CF50_Class_3_356AFFAC7ECD341D_2*>* Field_1_4; // 0x18
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_5; // 0x20
	::Class_3_1E4F9B0ED3BF21DE* Field_1_6; // 0x28
	::Class_1_B4357A1C72BABC6B* Field_1_7; // 0x30

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50__CCTOR_OFFSET))();
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_EXECUTE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_ABFDCAB2EBE17174()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_ABFDCAB2EBE17174_OFFSET))(this);
	}

	::System::Void Method_1_A11102BDB84BA59F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_A11102BDB84BA59F_OFFSET))(this);
	}

	::System::Void Method_1_B6F71B3A651A50DC(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_B6F71B3A651A50DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_431BB24BF7497552(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_431BB24BF7497552_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_94E67AA2B361C292(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_94E67AA2B361C292_OFFSET))(this, a1);
	}

	::System::Void Method_1_296DA0B4A0A88323(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_296DA0B4A0A88323_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_54D1C4FBB478C147(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_54D1C4FBB478C147_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDC14BF43D2DE2A9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_EDC14BF43D2DE2A9_OFFSET))(this);
	}

	::System::Void Method_1_0C7C8FB7C93D6C0D(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_0C7C8FB7C93D6C0D_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Single, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState> Method_1_A3509141C690232A(::System::Single a1, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::ValueTuple_2<::System::Single, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState>(*)(::PVOID, ::System::Single, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_A3509141C690232A_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_8AF5889CE210A23E(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_8AF5889CE210A23E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B28CF91501E2FCE0(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_B28CF91501E2FCE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9EBA91CF3EA17E94(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_9EBA91CF3EA17E94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E69FC072783CE58E(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_E69FC072783CE58E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CB47B49FAA2B217(::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_2CB47B49FAA2B217_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4D608CA764ED93B8(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_4D608CA764ED93B8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5CCA677CC5179CD2(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_5CCA677CC5179CD2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1DAEA1372099E262(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_1DAEA1372099E262_OFFSET))(this, a1);
	}

	::System::Void Method_1_40E800FB1FD16E05(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_40E800FB1FD16E05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ECFD139D86FABA86(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_ECFD139D86FABA86_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AAE072CBC3BDE9A4(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_AAE072CBC3BDE9A4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_43EBAF4AA5BCD2CF(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_43EBAF4AA5BCD2CF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B093BC071DA36EAF(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_B093BC071DA36EAF_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_CC8D448CF86F5A02(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_CC8D448CF86F5A02_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_24A329D99B097DDD(::UnityEngine::Collider* a1, ::Class_2_B9E8C2EEAA5C96EC*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::Class_2_B9E8C2EEAA5C96EC*&))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_24A329D99B097DDD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9EC825FBEB717B17(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_9EC825FBEB717B17_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E95B7B424CD0F5AD(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Int32 a2, ::Class_2_B9E8C2EEAA5C96EC* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_E95B7B424CD0F5AD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_30A54598479DC246(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Int32 a2, ::Struct_2_BAC27E6E9012E854& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32, ::Struct_2_BAC27E6E9012E854&))((::PBYTE)hIl2Cpp + CLASS_1_71117DDA8AC6CF50_METHOD_1_30A54598479DC246_OFFSET))(this, a1, a2, a3);
	}
};
