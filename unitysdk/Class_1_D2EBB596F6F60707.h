#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_24C2E7EF22229C6A;
class Class_1_D2EBB596F6F60707_Class_3_48DBB9F4381E040F_2;
class Class_1_D2EBB596F6F60707_Class_3_DB5F8F6457464EB5;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_D2EBB596F6F60707_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEA699E0)
#define CLASS_1_D2EBB596F6F60707_METHOD_1_0F3D59CED568B39A_OFFSET UNITYSDK_OFFSET(0xEA6B9B0)
#define CLASS_1_D2EBB596F6F60707_METHOD_1_323DCA18419DFB89_OFFSET UNITYSDK_OFFSET(0xEA69380)
#define CLASS_1_D2EBB596F6F60707_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xEA69D70)
#define CLASS_1_D2EBB596F6F60707_METHOD_1_55A73953341ACF8B_OFFSET UNITYSDK_OFFSET(0xEA6BC70)
#define CLASS_1_D2EBB596F6F60707_METHOD_1_60F8F4826C8DA571_OFFSET UNITYSDK_OFFSET(0xEA6B1C0)
#define CLASS_1_D2EBB596F6F60707_METHOD_1_7FBA19736CF767B2_OFFSET UNITYSDK_OFFSET(0xEA6BCD0)
#define CLASS_1_D2EBB596F6F60707_METHOD_1_8131D4D8C02BAA62_OFFSET UNITYSDK_OFFSET(0xEA69A30)
#define CLASS_1_D2EBB596F6F60707_METHOD_1_8B4A3741EA3D464F_OFFSET UNITYSDK_OFFSET(0xEA6B3F0)
#define CLASS_1_D2EBB596F6F60707_METHOD_1_B679E9E5B94C6DE8_OFFSET UNITYSDK_OFFSET(0xEA6BD50)
#define CLASS_1_D2EBB596F6F60707_METHOD_1_CAD72CA6EDE4556D_OFFSET UNITYSDK_OFFSET(0xEA6AB20)
#define CLASS_1_D2EBB596F6F60707_METHOD_1_FE3E37275125621B_OFFSET UNITYSDK_OFFSET(0xEA6AC10)
#define CLASS_1_D2EBB596F6F60707_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xEA693E0)
#define CLASS_1_D2EBB596F6F60707__CTOR_OFFSET UNITYSDK_OFFSET(0xEA68EA0)

inline static constexpr unsigned int Class_1_D2EBB596F6F60707_TypeDefinitionIndex = 62615;

class Class_1_D2EBB596F6F60707 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x10
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x18
	::RPG::PoolDictionary_2<::System::String*, ::RPG::PoolList_1<::System::Int32>*>* Field_1_4; // 0x20
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x28
	::RPG::PoolDictionary_2<::System::Int32, ::Class_1_D2EBB596F6F60707_Class_3_DB5F8F6457464EB5*>* Field_1_6; // 0x30
	::RPG::PoolDictionary_2<::System::Int32, ::Class_1_D2EBB596F6F60707_Class_3_48DBB9F4381E040F_2*>* Field_1_5; // 0x38
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x40
	::RPG::PoolList_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>* Field_1_7; // 0x48

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_CAD72CA6EDE4556D(::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>*, ::Class_2_9DD8A46984F1AFFD*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_METHOD_1_CAD72CA6EDE4556D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_323DCA18419DFB89(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_METHOD_1_323DCA18419DFB89_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE3E37275125621B(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_METHOD_1_FE3E37275125621B_OFFSET))(this, a1);
	}

	::System::Void Method_1_60F8F4826C8DA571(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_METHOD_1_60F8F4826C8DA571_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B4A3741EA3D464F(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_METHOD_1_8B4A3741EA3D464F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0F3D59CED568B39A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_METHOD_1_0F3D59CED568B39A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_55A73953341ACF8B(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_METHOD_1_55A73953341ACF8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FBA19736CF767B2(::Class_2_9DD8A46984F1AFFD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_METHOD_1_7FBA19736CF767B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B679E9E5B94C6DE8(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_METHOD_1_B679E9E5B94C6DE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8131D4D8C02BAA62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_METHOD_1_8131D4D8C02BAA62_OFFSET))(this);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2EBB596F6F60707_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}
};
