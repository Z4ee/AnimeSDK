#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1296;
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAMTABCONTENTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE405940)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAMTABCONTENTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE405990)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatPamTabContentControl_TypeDefinitionIndex = 73452;

	class FriendChatPamTabContentControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1296*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAMTABCONTENTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1296*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1296*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAMTABCONTENTCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
