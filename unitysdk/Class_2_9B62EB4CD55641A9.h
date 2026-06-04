#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_B3478091817B6770;
class Class_3_9BD4DC5861D61B1D;
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

#define CLASS_2_9B62EB4CD55641A9_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1360DC20)
#define CLASS_2_9B62EB4CD55641A9_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1360DD10)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x1360C8B0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_0CC4BC19C602BCD0_1_OFFSET UNITYSDK_OFFSET(0x1360C6F0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1360C530)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1360CA10)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_3A11E1DCF077C23D_OFFSET UNITYSDK_OFFSET(0x1360D4D0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1360D240)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1360DFE0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_58828C82E2A63F3D_OFFSET UNITYSDK_OFFSET(0x1360CB70)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_745F93A8744358B2_OFFSET UNITYSDK_OFFSET(0x1360D310)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x1360CA50)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_8671E9AD2980095B_OFFSET UNITYSDK_OFFSET(0x1360CEB0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1360CB00)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_D87C6C1BB5B9809B_OFFSET UNITYSDK_OFFSET(0x1360C900)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_DA65010FF3DD1750_OFFSET UNITYSDK_OFFSET(0x1360D8D0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_DDDB3490E38FF95F_OFFSET UNITYSDK_OFFSET(0x1360CD30)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_F0BD65B017F2AC0B_1_OFFSET UNITYSDK_OFFSET(0x1360C860)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x1360C6A0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1360DB50)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_F74441856239DF08_OFFSET UNITYSDK_OFFSET(0x1360CBC0)
#define CLASS_2_9B62EB4CD55641A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1360DDE0)
#define CLASS_2_9B62EB4CD55641A9__ONBIND_OFFSET UNITYSDK_OFFSET(0x1360C230)
#define CLASS_2_9B62EB4CD55641A9__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1360D2A0)
#define CLASS_2_9B62EB4CD55641A9___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1360E040)
#define CLASS_2_9B62EB4CD55641A9___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1360E0A0)
#define CLASS_2_9B62EB4CD55641A9___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1360DF20)
#define CLASS_2_9B62EB4CD55641A9___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1360DF80)

inline static constexpr unsigned int Class_2_9B62EB4CD55641A9_TypeDefinitionIndex = 67541;

class Class_2_9B62EB4CD55641A9 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::Class_2_9B62EB4CD55641A9** StaticGet_Field_2_0()
	{
		return (::Class_2_9B62EB4CD55641A9**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9B62EB4CD55641A9_TypeDefinitionIndex)->GetStaticField(0x485F0);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_9BD4DC5861D61B1D*>* Field_2_4; // 0x60
	::UnityEngine::Animation* Field_2_5; // 0x68
	::UnityEngine::Transform* Field_2_6; // 0x70
	::UnityEngine::CanvasGroup* Field_2_7; // 0x78
	::RPG::Client::MonoClickOutsideDetect* Field_2_8; // 0x80
	::System::Action* Field_2_9; // 0x88
	::RPG::UINavigation::UINavigationZoneManager* Field_2_10; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_F3E48B49C93D6539*>* Field_2_11; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_0CC4BC19C602BCD0_1_OFFSET))(this);
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

	::System::Void Method_2_58828C82E2A63F3D(::Class_1_B3478091817B6770* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3478091817B6770*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_58828C82E2A63F3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_F74441856239DF08()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_F74441856239DF08_OFFSET))(this);
	}

	::System::Void Method_2_8671E9AD2980095B(::Class_1_B3478091817B6770* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3478091817B6770*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_8671E9AD2980095B_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_745F93A8744358B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_745F93A8744358B2_OFFSET))(this);
	}

	::System::Void Method_2_3A11E1DCF077C23D(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_3A11E1DCF077C23D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA65010FF3DD1750(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_DA65010FF3DD1750_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_F0BD65B017F2AC0B_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_DDDB3490E38FF95F()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_DDDB3490E38FF95F_OFFSET))(this);
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
