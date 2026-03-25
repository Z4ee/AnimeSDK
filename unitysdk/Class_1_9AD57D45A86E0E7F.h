#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_550;
class Class_0_16E4307DCC419505_552;
class Class_0_16E4307DCC419505_555;
class Class_0_16E4307DCC419505_556;
class Class_0_16E4307DCC419505_561;
class Class_0_16E4307DCC419505_567;
class Class_1_3031EE59F7CF0FE3;
class Class_1_BB15C35EB66E7EA8;
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::Client { template <typename T> class IRoutePointList_1; }
namespace RPG::Client { template <typename T> class RoutePointList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9AD57D45A86E0E7F_GET_ROUTERENDERER_OFFSET UNITYSDK_OFFSET(0x893DEB0)
#define CLASS_1_9AD57D45A86E0E7F_GET_ROUTEVIEW_OFFSET UNITYSDK_OFFSET(0x893DED0)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_04E967564E8CD234_OFFSET UNITYSDK_OFFSET(0x893E1F0)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_2759A3C378F2ABB9_OFFSET UNITYSDK_OFFSET(0x893DEA0)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_32A6610C0704A288_1_OFFSET UNITYSDK_OFFSET(0x893DF60)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_32A6610C0704A288_OFFSET UNITYSDK_OFFSET(0x893DEF0)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x893E290)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_6D0DFF41A49C369D_OFFSET UNITYSDK_OFFSET(0x893E510)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_83AE46DB8772209E_OFFSET UNITYSDK_OFFSET(0x893E040)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_9F870C358F156E31_1_OFFSET UNITYSDK_OFFSET(0x893E160)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_9F870C358F156E31_OFFSET UNITYSDK_OFFSET(0x893E0D0)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x893E320)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x893E2D0)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_DEDC64DAD1B9994A_OFFSET UNITYSDK_OFFSET(0x893DFE0)
#define CLASS_1_9AD57D45A86E0E7F_METHOD_1_E1EC8806CFB7A21B_OFFSET UNITYSDK_OFFSET(0x893E390)
#define CLASS_1_9AD57D45A86E0E7F_SET_ROUTERENDERER_OFFSET UNITYSDK_OFFSET(0x893DEC0)
#define CLASS_1_9AD57D45A86E0E7F_SET_ROUTEVIEW_OFFSET UNITYSDK_OFFSET(0x893DEE0)
#define CLASS_1_9AD57D45A86E0E7F__CTOR_OFFSET UNITYSDK_OFFSET(0x893E730)

inline static constexpr unsigned int Class_1_9AD57D45A86E0E7F_TypeDefinitionIndex = 50674;

class Class_1_9AD57D45A86E0E7F : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_3 = 0xC1C; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	::Class_0_16E4307DCC419505_555* _RouteRenderer_k__BackingField; // 0x10
	::Class_1_3031EE59F7CF0FE3* Field_1_6; // 0x18
	::Class_0_16E4307DCC419505_567* Field_1_10; // 0x20
	::Class_0_16E4307DCC419505_556* _RouteView_k__BackingField; // 0x28
	::RPG::Client::RoutePointList_1<::UnityEngine::Vector2Int>* Field_1_8; // 0x30
	::Class_0_16E4307DCC419505_561* Field_1_9; // 0x38
	::System::Int32 Field_1_2; // 0x40
	::System::Boolean Field_1_7; // 0x44
	::UnityEngine::Vector2Int Field_1_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F__CTOR_OFFSET))(this);
	}

	::RPG::Client::IRoutePointList_1<::UnityEngine::Vector2Int>* Method_1_2759A3C378F2ABB9()
	{
		return ((::RPG::Client::IRoutePointList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_2759A3C378F2ABB9_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_555* get_RouteRenderer()
	{
		return ((::Class_0_16E4307DCC419505_555*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_GET_ROUTERENDERER_OFFSET))(this);
	}

	::System::Void set_RouteRenderer(::Class_0_16E4307DCC419505_555* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_555*))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_SET_ROUTERENDERER_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_556* get_RouteView()
	{
		return ((::Class_0_16E4307DCC419505_556*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_GET_ROUTEVIEW_OFFSET))(this);
	}

	::System::Void set_RouteView(::Class_0_16E4307DCC419505_556* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_556*))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_SET_ROUTEVIEW_OFFSET))(this, value);
	}

	::UnityEngine::Vector2Int Method_1_32A6610C0704A288()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_32A6610C0704A288_OFFSET))(this);
	}

	::UnityEngine::Vector2Int Method_1_32A6610C0704A288_1()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_32A6610C0704A288_1_OFFSET))(this);
	}

	::System::Void Method_1_DEDC64DAD1B9994A(::System::Int32 a1, ::Class_1_3031EE59F7CF0FE3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_3031EE59F7CF0FE3*))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_DEDC64DAD1B9994A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_83AE46DB8772209E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_83AE46DB8772209E_OFFSET))(this);
	}

	::System::Void Method_1_9F870C358F156E31(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_9F870C358F156E31_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F870C358F156E31_1(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_9F870C358F156E31_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_04E967564E8CD234(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_04E967564E8CD234_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_561* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_561*))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_1_E1EC8806CFB7A21B(::Class_0_16E4307DCC419505_550* a1, ::UnityEngine::Transform* a2, ::RPG::Client::UIPrefabLoader* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_550*, ::UnityEngine::Transform*, ::RPG::Client::UIPrefabLoader*))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_E1EC8806CFB7A21B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6D0DFF41A49C369D(::Class_1_BB15C35EB66E7EA8* a1, ::System::String* a2, ::Class_0_16E4307DCC419505_552* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB15C35EB66E7EA8*, ::System::String*, ::Class_0_16E4307DCC419505_552*))((::PBYTE)hIl2Cpp + CLASS_1_9AD57D45A86E0E7F_METHOD_1_6D0DFF41A49C369D_OFFSET))(this, a1, a2, a3);
	}
};
