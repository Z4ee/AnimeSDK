#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_43038093CB6347E9.h"
#include "unitysdk/Enum_3_502044D76C6270C7.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/UI/AspectRatioFitter_AspectMode.h"

class Class_1_D00124C4966CEBFC;
class Class_1_F7E58FEB09AEC901;
class Class_2_208CC9941471731A_230;
namespace MoleMole { class UIVideoWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Video { class VideoClip; }

#define MOLEMOLE_UIVIDEOWIDGETCONTEXT_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1040A9F0)
#define MOLEMOLE_UIVIDEOWIDGETCONTEXT_GET_VIDEOSKIP_OFFSET UNITYSDK_OFFSET(0x1040AA10)
#define MOLEMOLE_UIVIDEOWIDGETCONTEXT_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1040AA00)
#define MOLEMOLE_UIVIDEOWIDGETCONTEXT_SET_VIDEOSKIP_OFFSET UNITYSDK_OFFSET(0x1040AA20)
#define MOLEMOLE_UIVIDEOWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1040AA30)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoWidgetContext_TypeDefinitionIndex = 65678;

	class UIVideoWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnVideoDestroy; // 0x28
		::System::Action_1<::MoleMole::UIVideoWidgetController*>* OnVideoPrepare; // 0x30
		::System::Action* OnRealPlay; // 0x38
		::Class_1_D00124C4966CEBFC* _Acceleration_k__BackingField; // 0x40
		::Class_1_F7E58FEB09AEC901* _VideoSkip_k__BackingField; // 0x48
		::System::Action* OnPlayEnd; // 0x50
		::Class_2_208CC9941471731A_230* performTemplate; // 0x58
		::System::Action* OnSkip; // 0x60
		::System::Action* OnSetPlayData; // 0x68
		::System::String* relativeUrl; // 0x70
		::System::String* audioTimeline; // 0x78
		::UnityEngine::Video::VideoClip* clip; // 0x80
		::System::Single screenHeightOffset; // 0x88
		::UnityEngine::UI::AspectRatioFitter_AspectMode aspectMode; // 0x8C
		::Enum_3_502044D76C6270C7 endMode; // 0x90
		::Enum_3_43038093CB6347E9 fadeMode; // 0x94
		::System::Boolean IsSkip; // 0x98
		::System::Boolean isPlayOnAwake; // 0x99
		::System::Boolean isAutoPlayByPrepare; // 0x9A
		::System::Boolean autoSetPlayMix; // 0x9B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTEXT__CTOR_OFFSET))(this);
		}

		::Class_1_D00124C4966CEBFC* get_Acceleration()
		{
			return ((::Class_1_D00124C4966CEBFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTEXT_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void set_Acceleration(::Class_1_D00124C4966CEBFC* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D00124C4966CEBFC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTEXT_SET_ACCELERATION_OFFSET))(this, value);
		}

		::Class_1_F7E58FEB09AEC901* get_VideoSkip()
		{
			return ((::Class_1_F7E58FEB09AEC901*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTEXT_GET_VIDEOSKIP_OFFSET))(this);
		}

		::System::Void set_VideoSkip(::Class_1_F7E58FEB09AEC901* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F7E58FEB09AEC901*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTEXT_SET_VIDEOSKIP_OFFSET))(this, value);
		}
	};
}
