#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_550;
class Class_0_16E4307DCC419505_555;
class Class_0_16E4307DCC419505_556;
namespace RPG::Client { class AlleyRouteElasticView; }
namespace RPG::Client { template <typename T> class IRoutePointList_1; }
namespace RPG::Client { template <typename T> class RoutePointList_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F3C45649FE8EF3A3_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x11742100)
#define CLASS_1_F3C45649FE8EF3A3_GET_ROUTERENDERER_OFFSET UNITYSDK_OFFSET(0x11741C00)
#define CLASS_1_F3C45649FE8EF3A3_GET_ROUTEVIEW_OFFSET UNITYSDK_OFFSET(0x11741C10)
#define CLASS_1_F3C45649FE8EF3A3_METHOD_1_03165B3791CA3752_OFFSET UNITYSDK_OFFSET(0x11741C40)
#define CLASS_1_F3C45649FE8EF3A3_METHOD_1_0415D8C59E0AE7E7_1_OFFSET UNITYSDK_OFFSET(0x11741EC0)
#define CLASS_1_F3C45649FE8EF3A3_METHOD_1_0415D8C59E0AE7E7_OFFSET UNITYSDK_OFFSET(0x11741E60)
#define CLASS_1_F3C45649FE8EF3A3_METHOD_1_2759A3C378F2ABB9_OFFSET UNITYSDK_OFFSET(0x11741C30)
#define CLASS_1_F3C45649FE8EF3A3_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x11741F20)
#define CLASS_1_F3C45649FE8EF3A3_METHOD_1_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x11742190)
#define CLASS_1_F3C45649FE8EF3A3_METHOD_1_B280CE45C98AD449_OFFSET UNITYSDK_OFFSET(0x11741DE0)
#define CLASS_1_F3C45649FE8EF3A3_METHOD_1_C8807E467EFAAD79_OFFSET UNITYSDK_OFFSET(0x11741FC0)
#define CLASS_1_F3C45649FE8EF3A3_METHOD_1_FBBEDA7A1550FB7B_OFFSET UNITYSDK_OFFSET(0x11741D40)
#define CLASS_1_F3C45649FE8EF3A3_SET_ROUTEVIEW_OFFSET UNITYSDK_OFFSET(0x11741C20)
#define CLASS_1_F3C45649FE8EF3A3_SPAWNED_OFFSET UNITYSDK_OFFSET(0x117422B0)
#define CLASS_1_F3C45649FE8EF3A3__CTOR_OFFSET UNITYSDK_OFFSET(0x11741D90)

inline static constexpr unsigned int Class_1_F3C45649FE8EF3A3_TypeDefinitionIndex = 50626;

class Class_1_F3C45649FE8EF3A3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_2 = 0xC1C; // 0x0
	::Class_0_16E4307DCC419505_555* Field_1_3; // 0x10
	::RPG::Client::AlleyRouteElasticView* Field_1_4; // 0x18
	::RPG::Client::RoutePointList_1<::UnityEngine::Vector2Int>* Field_1_5; // 0x20
	::Class_0_16E4307DCC419505_556* _RouteView_k__BackingField; // 0x28
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_555* get_RouteRenderer()
	{
		return ((::Class_0_16E4307DCC419505_555*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_GET_ROUTERENDERER_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_556* get_RouteView()
	{
		return ((::Class_0_16E4307DCC419505_556*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_GET_ROUTEVIEW_OFFSET))(this);
	}

	::System::Void set_RouteView(::Class_0_16E4307DCC419505_556* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_556*))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_SET_ROUTEVIEW_OFFSET))(this, value);
	}

	::RPG::Client::IRoutePointList_1<::UnityEngine::Vector2Int>* Method_1_2759A3C378F2ABB9()
	{
		return ((::RPG::Client::IRoutePointList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_METHOD_1_2759A3C378F2ABB9_OFFSET))(this);
	}

	::System::Void Method_1_03165B3791CA3752(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_METHOD_1_03165B3791CA3752_OFFSET))(this, a1);
	}

	::System::Void Method_1_FBBEDA7A1550FB7B(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_METHOD_1_FBBEDA7A1550FB7B_OFFSET))(this, a1);
	}

	::System::Void Method_1_B280CE45C98AD449(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_METHOD_1_B280CE45C98AD449_OFFSET))(this, a1);
	}

	::System::Void Method_1_0415D8C59E0AE7E7(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_METHOD_1_0415D8C59E0AE7E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_0415D8C59E0AE7E7_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_METHOD_1_0415D8C59E0AE7E7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8807E467EFAAD79(::Class_0_16E4307DCC419505_550* a1, ::UnityEngine::Transform* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_550*, ::UnityEngine::Transform*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_METHOD_1_C8807E467EFAAD79_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Despawned()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_DESPAWNED_OFFSET))(this);
	}

	::System::Void Spawned()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_SPAWNED_OFFSET))(this);
	}

	::System::Void Method_1_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3C45649FE8EF3A3_METHOD_1_6345BF557E4E4E6A_OFFSET))(this, a1);
	}
};
