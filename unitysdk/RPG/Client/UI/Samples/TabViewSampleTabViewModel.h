#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

namespace System { class String; }

#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLETABVIEWMODEL_GET_HASUNREADDOT_OFFSET UNITYSDK_OFFSET(0xE3CF350)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLETABVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xE3CF310)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLETABVIEWMODEL_SET_HASUNREADDOT_OFFSET UNITYSDK_OFFSET(0xE3CF390)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLETABVIEWMODEL_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xE3CF2A0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLETABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CF210)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int TabViewSampleTabViewModel_TypeDefinitionIndex = 73365;

	class TabViewSampleTabViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::String* _Title; // 0x18
		::System::Boolean _HasUnreadDot; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLETABVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLETABVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLETABVIEWMODEL_SET_TITLE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasUnreadDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLETABVIEWMODEL_GET_HASUNREADDOT_OFFSET))(this);
		}

		::System::Void set_HasUnreadDot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLETABVIEWMODEL_SET_HASUNREADDOT_OFFSET))(this, a1);
		}
	};
}
