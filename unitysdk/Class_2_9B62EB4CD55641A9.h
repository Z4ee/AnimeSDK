#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_B3478091817B6770;
class Class_3_EA0CB6127F99EDA0;
class Class_3_F3E48B49C93D6539;
namespace RPG::Client { class MonoClickOutsideDetect; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_9B62EB4CD55641A9_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBEB3CD0)
#define CLASS_2_9B62EB4CD55641A9_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBEB3D90)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xBEB2AC0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0xBEB2850)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0xBEB29C0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBEB2C30)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_47028527E1EF95EB_OFFSET UNITYSDK_OFFSET(0xBEB34F0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_4D5AE7201B2CAA0E_OFFSET UNITYSDK_OFFSET(0xBEB3950)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xBEB4030)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xBEB2C70)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_8F8D080EF5D1D761_OFFSET UNITYSDK_OFFSET(0xBEB2F90)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0xBEB3400)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xBEB2D20)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_AA4ED83B752C7624_OFFSET UNITYSDK_OFFSET(0xBEB3100)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xBEB2670)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_CCEC2964B8BA252F_OFFSET UNITYSDK_OFFSET(0xBEB2DA0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_D87C6C1BB5B9809B_OFFSET UNITYSDK_OFFSET(0xBEB2B10)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xBEB27A0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_E8701D3A54784517_OFFSET UNITYSDK_OFFSET(0xBEB2DF0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xBEB3C00)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_F4F8CECCD815FEBA_OFFSET UNITYSDK_OFFSET(0xBEB36D0)
#define CLASS_2_9B62EB4CD55641A9__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB3E30)
#define CLASS_2_9B62EB4CD55641A9__ONBIND_OFFSET UNITYSDK_OFFSET(0xBEB2270)
#define CLASS_2_9B62EB4CD55641A9__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBEB3460)
#define CLASS_2_9B62EB4CD55641A9___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBEB4090)
#define CLASS_2_9B62EB4CD55641A9___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBEB40F0)
#define CLASS_2_9B62EB4CD55641A9___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xBEB3F70)
#define CLASS_2_9B62EB4CD55641A9___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBEB3FD0)

inline static constexpr unsigned int Class_2_9B62EB4CD55641A9_TypeDefinitionIndex = 59208;

class Class_2_9B62EB4CD55641A9 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::Class_2_9B62EB4CD55641A9** StaticGet_Field_2_1()
	{
		return (::Class_2_9B62EB4CD55641A9**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9B62EB4CD55641A9_TypeDefinitionIndex)->GetStaticField(0x41840);
	}
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	::RPG::Client::MonoClickOutsideDetect* Field_2_5; // 0x60
	::UnityEngine::CanvasGroup* Field_2_4; // 0x68
	::RPG::UINavigation::UINavigationZoneManager* Field_2_8; // 0x70
	::UnityEngine::Animation* Field_2_3; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_F3E48B49C93D6539*>* Field_2_6; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_EA0CB6127F99EDA0*>* Field_2_7; // 0x88
	::UnityEngine::Transform* Field_2_2; // 0x90
	::System::Action* Field_2_9; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_D87C6C1BB5B9809B()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_D87C6C1BB5B9809B_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_CCEC2964B8BA252F(::Class_1_B3478091817B6770* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3478091817B6770*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_CCEC2964B8BA252F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8701D3A54784517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_E8701D3A54784517_OFFSET))(this);
	}

	::System::Void Method_2_AA4ED83B752C7624(::Class_1_B3478091817B6770* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3478091817B6770*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_AA4ED83B752C7624_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_47028527E1EF95EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_47028527E1EF95EB_OFFSET))(this);
	}

	::System::Void Method_2_F4F8CECCD815FEBA(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_F4F8CECCD815FEBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D5AE7201B2CAA0E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_4D5AE7201B2CAA0E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_8F8D080EF5D1D761()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_8F8D080EF5D1D761_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
