#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5D7E0C66569A8717_PlaceInteractState.h"
#include "unitysdk/Class_1_E0608365BFC7E6EB_OperateMode.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesJoyStickState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_61D78C3DEA410E5A;
class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace RPG::Client { class VirtualCursor; }
namespace RPG::Client { class VirtualCursorSimulateTouchActionWrapper; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_1_5A45D9532BBF9EF5_GET_CURJOYSTICKSTATE_OFFSET UNITYSDK_OFFSET(0x15B84E00)
#define CLASS_1_5A45D9532BBF9EF5_GET_ISDRAGGINGUIITEM_OFFSET UNITYSDK_OFFSET(0x15B84E20)
#define CLASS_1_5A45D9532BBF9EF5_GET_ISEXPANDSELECT_OFFSET UNITYSDK_OFFSET(0x15B84E40)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x15B845A0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_050D955490C4C3D0_OFFSET UNITYSDK_OFFSET(0x15B834B0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0x15B84B30)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x15B84A30)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_16F329E8131CBCB7_OFFSET UNITYSDK_OFFSET(0x15B84080)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x15B839F0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_2C1C2A8E63DB0F10_OFFSET UNITYSDK_OFFSET(0x15B84650)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_2C9894E935536006_OFFSET UNITYSDK_OFFSET(0x15B83FA0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_3BEE013982122797_OFFSET UNITYSDK_OFFSET(0x15B83EC0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x15B841A0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x15B84150)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15B845F0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_46206B56BD30B28B_OFFSET UNITYSDK_OFFSET(0x15B84D30)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_4C27DE82B2DFE27A_OFFSET UNITYSDK_OFFSET(0x15B83F20)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x15B833F0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x15B84D70)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x15B831A0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_8849372481724D9B_OFFSET UNITYSDK_OFFSET(0x15B84010)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_97428D6179B1CFD2_OFFSET UNITYSDK_OFFSET(0x15B84870)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_A1D8C338F14D1B57_OFFSET UNITYSDK_OFFSET(0x15B84540)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_BCD83C07168CC893_OFFSET UNITYSDK_OFFSET(0x15B7F0B0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_C8242D0340185D87_OFFSET UNITYSDK_OFFSET(0x15B83C20)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_CF2323683121E2E8_OFFSET UNITYSDK_OFFSET(0x15B7EE10)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x15B841F0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x15B838A0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_E4DDC118595D11DF_OFFSET UNITYSDK_OFFSET(0x15B83980)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0x15B83840)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_F4D6A15EBC6DEA3E_OFFSET UNITYSDK_OFFSET(0x15B7EF20)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_F7214300AC6F4344_1_OFFSET UNITYSDK_OFFSET(0x15B84CB0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_F7214300AC6F4344_OFFSET UNITYSDK_OFFSET(0x15B84C30)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x15B83780)
#define CLASS_1_5A45D9532BBF9EF5_SET_CURJOYSTICKSTATE_OFFSET UNITYSDK_OFFSET(0x15B84E10)
#define CLASS_1_5A45D9532BBF9EF5_SET_ISDRAGGINGUIITEM_OFFSET UNITYSDK_OFFSET(0x15B84E30)
#define CLASS_1_5A45D9532BBF9EF5_SET_ISEXPANDSELECT_OFFSET UNITYSDK_OFFSET(0x15B84E50)
#define CLASS_1_5A45D9532BBF9EF5__CTOR_OFFSET UNITYSDK_OFFSET(0x15B830F0)

inline static constexpr unsigned int Class_1_5A45D9532BBF9EF5_TypeDefinitionIndex = 77299;

class Class_1_5A45D9532BBF9EF5 : public ::System::Object
{
public:
	::Class_3_97041AE90E3B2214* PDENFEFCAGN; // 0x10
	::System::Action* OMAICAFCLKK; // 0x18
	::RPG::Common::StateMachine_1<::Class_1_5A45D9532BBF9EF5*>* CBIGPGKJAEI; // 0x20
	::System::Action_3<::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* CLFCPEOPCFK; // 0x28
	::RPG::Client::VirtualCursorSimulateTouchActionWrapper* JMLBHJIEFNF; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState, ::Class_1_61D78C3DEA410E5A*>* FMKOCCEPMBG; // 0x38
	::System::Action_3<::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* AFNLFDEBMKC; // 0x40
	::System::Boolean _IsExpandSelect_k__BackingField; // 0x48
	::System::Boolean _IsDraggingUIItem_k__BackingField; // 0x49
	::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState _CurJoyStickState_k__BackingField; // 0x4C
	::System::Nullable_1<::UnityEngine::Vector3> HOLDJMMAFFN; // 0x50

	::System::Void _ctor(::Class_3_97041AE90E3B2214* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97041AE90E3B2214*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_050D955490C4C3D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_050D955490C4C3D0_OFFSET))(this);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_1_EBAC71FBE1837205()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_EBAC71FBE1837205_OFFSET))(this);
	}

	::System::Void Method_1_E4DDC118595D11DF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_E4DDC118595D11DF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C8242D0340185D87()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_C8242D0340185D87_OFFSET))(this);
	}

	::System::Boolean Method_1_4C27DE82B2DFE27A(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_4C27DE82B2DFE27A_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C9894E935536006(::Class_1_5D7E0C66569A8717_PlaceInteractState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D7E0C66569A8717_PlaceInteractState))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_2C9894E935536006_OFFSET))(this, a1);
	}

	::System::Void Method_1_8849372481724D9B(::Class_1_E0608365BFC7E6EB_OperateMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0608365BFC7E6EB_OperateMode))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_8849372481724D9B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_16F329E8131CBCB7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_16F329E8131CBCB7_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_1_A1D8C338F14D1B57(::System::Action_3<::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* a1, ::System::Action_3<::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>*, ::System::Action_3<::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_A1D8C338F14D1B57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_2C1C2A8E63DB0F10(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_2C1C2A8E63DB0F10_OFFSET))(this, a1);
	}

	::System::Void Method_1_97428D6179B1CFD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_97428D6179B1CFD2_OFFSET))(this);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_1_078D85152011B919_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_078D85152011B919_1_OFFSET))(this);
	}

	::System::Void Method_1_F7214300AC6F4344(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_F7214300AC6F4344_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F7214300AC6F4344_1(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_F7214300AC6F4344_1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::VirtualCursor* Method_1_CF2323683121E2E8()
	{
		return ((::RPG::Client::VirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_CF2323683121E2E8_OFFSET))(this);
	}

	::Class_3_97041AE90E3B2214* Method_1_46206B56BD30B28B()
	{
		return ((::Class_3_97041AE90E3B2214*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_46206B56BD30B28B_OFFSET))(this);
	}

	::System::Void Method_1_BCD83C07168CC893(::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_BCD83C07168CC893_OFFSET))(this, a1);
	}

	::System::Void Method_1_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState Method_1_F4D6A15EBC6DEA3E()
	{
		return ((::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_F4D6A15EBC6DEA3E_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::Class_1_61D78C3DEA410E5A* Method_1_E14A7FCF78650419()
	{
		return ((::Class_1_61D78C3DEA410E5A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_E14A7FCF78650419_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState get_CurJoyStickState()
	{
		return ((::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_GET_CURJOYSTICKSTATE_OFFSET))(this);
	}

	::System::Void set_CurJoyStickState(::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_SET_CURJOYSTICKSTATE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDraggingUIItem()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_GET_ISDRAGGINGUIITEM_OFFSET))(this);
	}

	::System::Void set_IsDraggingUIItem(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_SET_ISDRAGGINGUIITEM_OFFSET))(this, a1);
	}

	::System::Boolean get_IsExpandSelect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_GET_ISEXPANDSELECT_OFFSET))(this);
	}

	::System::Void set_IsExpandSelect(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_SET_ISEXPANDSELECT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3BEE013982122797()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_3BEE013982122797_OFFSET))(this);
	}
};
