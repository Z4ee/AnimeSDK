#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_3FF51CE8B91EFA1B;
class Class_1_B3478091817B6770;
class Class_3_A22F29BC6FDAFAF7;
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

#define CLASS_2_9B62EB4CD55641A9_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x156726A0)
#define CLASS_2_9B62EB4CD55641A9_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15672790)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x156711B0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_102A1038C38883F3_1_OFFSET UNITYSDK_OFFSET(0x15671160)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x15670FA0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15671320)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_3D1D8DCCA33F497D_OFFSET UNITYSDK_OFFSET(0x15671EB0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15671B90)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_58828C82E2A63F3D_OFFSET UNITYSDK_OFFSET(0x15671480)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x15671C60)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_745F93A8744358B2_OFFSET UNITYSDK_OFFSET(0x15671CF0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x15671360)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_8671E9AD2980095B_OFFSET UNITYSDK_OFFSET(0x156717E0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x15671410)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x156725A0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_D799715F2EF979EA_1_OFFSET UNITYSDK_OFFSET(0x15670FF0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x15670E30)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_D87C6C1BB5B9809B_OFFSET UNITYSDK_OFFSET(0x15671200)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_DA65010FF3DD1750_OFFSET UNITYSDK_OFFSET(0x156722E0)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_DDDB3490E38FF95F_OFFSET UNITYSDK_OFFSET(0x15671660)
#define CLASS_2_9B62EB4CD55641A9_METHOD_2_F74441856239DF08_OFFSET UNITYSDK_OFFSET(0x156714D0)
#define CLASS_2_9B62EB4CD55641A9__CTOR_OFFSET UNITYSDK_OFFSET(0x15672860)
#define CLASS_2_9B62EB4CD55641A9__ONBIND_OFFSET UNITYSDK_OFFSET(0x15670B20)
#define CLASS_2_9B62EB4CD55641A9__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15671BF0)

inline static constexpr unsigned int Class_2_9B62EB4CD55641A9_TypeDefinitionIndex = 72294;

class Class_2_9B62EB4CD55641A9 : public ::Class_1_34917908B7833130
{
public:
	static ::Class_2_9B62EB4CD55641A9** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_2_9B62EB4CD55641A9**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9B62EB4CD55641A9_TypeDefinitionIndex)->GetStaticField(0x51520);
	}
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* EFJMLJCGPCJ; // 0x0
	// static const ::System::String* HLKCHICNHJE; // 0x0
	::Class_1_3FF51CE8B91EFA1B* CDMFHPLLFEC; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_F3E48B49C93D6539*>* PLGJPOCAPPN; // 0x68
	::UnityEngine::CanvasGroup* MLMFIEKIPHG; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_A22F29BC6FDAFAF7*>* NAJEKBEDNMK; // 0x78
	::System::Action* IDDFLLPLNDG; // 0x80
	::RPG::Client::MonoClickOutsideDetect* AAFBCFCMAPI; // 0x88
	::RPG::UINavigation::UINavigationZoneManager* DJOAIHJIJKL; // 0x90
	::UnityEngine::Animation* KCOAILOHDND; // 0x98
	::UnityEngine::Transform* FHEMCAFOIKG; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_D799715F2EF979EA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_D799715F2EF979EA_1_OFFSET))(this);
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

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_745F93A8744358B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_745F93A8744358B2_OFFSET))(this);
	}

	::System::Void Method_2_3D1D8DCCA33F497D(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_3D1D8DCCA33F497D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA65010FF3DD1750(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_DA65010FF3DD1750_OFFSET))(this, a1);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_102A1038C38883F3_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_DDDB3490E38FF95F()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_DDDB3490E38FF95F_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B62EB4CD55641A9_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
