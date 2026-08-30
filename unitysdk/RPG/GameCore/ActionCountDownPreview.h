#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionCountDownPreviewMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONCOUNTDOWNPREVIEW_METHOD_3_6524D7D3ABE9A225_OFFSET UNITYSDK_OFFSET(0x1CD6FB30)
#define RPG_GAMECORE_ACTIONCOUNTDOWNPREVIEW_METHOD_3_ED88D2ED5900CA70_OFFSET UNITYSDK_OFFSET(0x1CD6FAF0)
#define RPG_GAMECORE_ACTIONCOUNTDOWNPREVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6FB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionCountDownPreview_TypeDefinitionIndex = 23420;

	class ActionCountDownPreview : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ActionCountDownPreviewMode Mode; // 0x18
		::System::Int32 Offset; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONCOUNTDOWNPREVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED88D2ED5900CA70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionCountDownPreview*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionCountDownPreview*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONCOUNTDOWNPREVIEW_METHOD_3_ED88D2ED5900CA70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6524D7D3ABE9A225(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionCountDownPreview* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionCountDownPreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONCOUNTDOWNPREVIEW_METHOD_3_6524D7D3ABE9A225_OFFSET))(a1, a2);
		}
	};
}
