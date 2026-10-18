#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1512;
namespace RPG::Client::MechCraft::View { class MechCraftNpcCommentControlBinder; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD641700)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_METHOD_5_1F2D766A8C220114_OFFSET UNITYSDK_OFFSET(0xD6417A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD641740)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD641CA0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftNpcCommentControl_TypeDefinitionIndex = 80037;

	class MechCraftNpcCommentControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_0_16E4307DCC419505_1512* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftNpcCommentControlBinder* _Binder; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1512* get_Content()
		{
			return ((::Class_0_16E4307DCC419505_1512*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_0_16E4307DCC419505_1512* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1512*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void Method_5_1F2D766A8C220114(::Class_0_16E4307DCC419505_1512* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1512*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTNPCCOMMENTCONTROL_METHOD_5_1F2D766A8C220114_OFFSET))(this, a1);
		}
	};
}
