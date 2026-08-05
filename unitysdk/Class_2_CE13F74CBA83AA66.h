#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CE13F74CBA83AA66_Struct_2_D08DE63CD5EF476B.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_B7243C9C64DCB5EF_Class_0_16E7307DCC43CB2C_60;
namespace MoleMole::Timeline { class ChatPlusDialogBehaviour; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CE13F74CBA83AA66_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0xB1896B0)
#define CLASS_2_CE13F74CBA83AA66_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xB1896A0)
#define CLASS_2_CE13F74CBA83AA66_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB189000)
#define CLASS_2_CE13F74CBA83AA66_METHOD_2_A6948C8510FCBA1A_OFFSET UNITYSDK_OFFSET(0xB189080)
#define CLASS_2_CE13F74CBA83AA66_METHOD_2_E15316BBF6256FB5_OFFSET UNITYSDK_OFFSET(0xB1891E0)
#define CLASS_2_CE13F74CBA83AA66_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xB189070)
#define CLASS_2_CE13F74CBA83AA66_METHOD_2_EEE25E7E24F40C88_OFFSET UNITYSDK_OFFSET(0xB1896C0)
#define CLASS_2_CE13F74CBA83AA66_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x12FCCFE0)
#define CLASS_2_CE13F74CBA83AA66_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB188F40)
#define CLASS_2_CE13F74CBA83AA66_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12FCCC50)
#define CLASS_2_CE13F74CBA83AA66__CTOR_OFFSET UNITYSDK_OFFSET(0xB189060)

inline static constexpr unsigned int Class_2_CE13F74CBA83AA66_TypeDefinitionIndex = 66668;

class Class_2_CE13F74CBA83AA66 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_2_B7243C9C64DCB5EF_Class_0_16E7307DCC43CB2C_60* Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE13F74CBA83AA66__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE13F74CBA83AA66_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_CE13F74CBA83AA66_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_CE13F74CBA83AA66_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE13F74CBA83AA66_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Int32 Method_2_A6948C8510FCBA1A(::Class_2_CE13F74CBA83AA66_Struct_2_D08DE63CD5EF476B a1, ::Class_2_CE13F74CBA83AA66_Struct_2_D08DE63CD5EF476B a2)
	{
		return ((::System::Int32(*)(::Class_2_CE13F74CBA83AA66_Struct_2_D08DE63CD5EF476B, ::Class_2_CE13F74CBA83AA66_Struct_2_D08DE63CD5EF476B))((::PBYTE)hIl2Cpp + CLASS_2_CE13F74CBA83AA66_METHOD_2_A6948C8510FCBA1A_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_CE13F74CBA83AA66_Struct_2_D08DE63CD5EF476B>* Method_2_E15316BBF6256FB5(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_CE13F74CBA83AA66_Struct_2_D08DE63CD5EF476B>*(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_CE13F74CBA83AA66_METHOD_2_E15316BBF6256FB5_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_CE13F74CBA83AA66_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_CE13F74CBA83AA66_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_EEE25E7E24F40C88(::MoleMole::Timeline::ChatPlusDialogBehaviour* a1)
	{
		return ((::System::Int32(*)(::MoleMole::Timeline::ChatPlusDialogBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_CE13F74CBA83AA66_METHOD_2_EEE25E7E24F40C88_OFFSET))(a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE13F74CBA83AA66_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
