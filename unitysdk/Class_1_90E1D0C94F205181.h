#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7AADF24AF29C5ADF.h"
#include "unitysdk/MoleMole/UIUrbanMapPageContext_SDefaultFocusInfo.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/Struct_2_24A53FACD918DAF7.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/Struct_2_D9F43A238F81E067.h"
#include "unitysdk/Struct_2_E7E9E1A2E61D79CB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_371;
class Class_1_37DF30C8B3AA0F39;
class Map3DFogItem;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Rendering::Universal::Internal { class Nap3DMapDecalEffect_DecalAreaData; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_ScrollCallback; }
template <typename T> class Class_0_16E4307DCC41950C_12;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_F16D73323D71766B;

inline static constexpr unsigned int Class_1_90E1D0C94F205181_TypeDefinitionIndex = 47390;

template <typename TController, typename TContext>
class Class_1_90E1D0C94F205181 : public ::System::Object
{
public:
	TController Field_1_0; // 0x0
	::Class_0_16E4307DCC41950C_12<::Struct_2_D9F43A238F81E067>* Field_1_1; // 0x0
	::Struct_2_24A53FACD918DAF7 Field_1_2; // 0x0
	::System::Single Field_1_3; // 0x0
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_1_4; // 0x0
	::Class_1_37DF30C8B3AA0F39* Field_1_5; // 0x0
	::Class_2_000597E145D7A42A<TContext>* Field_1_6; // 0x0
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_7; // 0x0
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_8; // 0x0
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_9; // 0x0
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_1_10; // 0x0
	::Class_2_000597E145D7A42A<::Struct_2_E7E9E1A2E61D79CB>* Field_1_11; // 0x0
	::UnityEngine::Transform* Field_1_12; // 0x0
	::UnityEngine::Transform* Field_1_13; // 0x0
	::UnityEngine::Transform* Field_1_14; // 0x0
	::MoleMole::UIBaseController* Field_1_15; // 0x0
	::Struct_2_D9F43A238F81E067 Field_1_16; // 0x0
	::System::Func_3<::Class_0_16E4307DCC419505_371*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*, ::System::Boolean>* Field_1_17; // 0x0
	::System::Func_3<::System::Int32, ::System::Int32, ::System::ValueTuple_4<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3>>* Field_1_18; // 0x0
	::System::Func_2<::System::Int32, ::System::Int32>* Field_1_19; // 0x0
	::System::Action_1<::System::Int32>* Field_1_20; // 0x0
	::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* Field_1_21; // 0x0
	::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* Field_1_22; // 0x0
	::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* Field_1_23; // 0x0
	::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* Field_1_24; // 0x0
	::System::Action_1<::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*>* Field_1_25; // 0x0
	::System::Action_1<::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*>* Field_1_26; // 0x0
	::System::Action_2<::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*, ::System::String*>* Field_1_27; // 0x0
	::System::Int32 Field_1_28; // 0x0
	::System::Func_1<::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo>* Field_1_29; // 0x0
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_30; // 0x0
	::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* Field_1_31; // 0x0
	::System::Func_2<::System::String*, ::Map3DFogItem*>* Field_1_32; // 0x0
	::System::Func_3<::System::Int32, ::System::Boolean, ::UnityEngine::Bounds>* Field_1_33; // 0x0
	::System::Func_5<::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Cameras::CameraTrackBlending*, ::System::Single>* Field_1_34; // 0x0
	::System::Action_1<::Map3DFogItem*>* Field_1_35; // 0x0
	::System::Action_1<::System::Int32>* Field_1_36; // 0x0
};
