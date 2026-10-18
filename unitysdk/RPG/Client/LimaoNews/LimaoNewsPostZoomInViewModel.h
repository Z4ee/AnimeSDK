#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_D501FC103C8A2714;
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xD3E3360)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xD3E3370)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3E32A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xD3E3380)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostZoomInViewModel_TypeDefinitionIndex = 80479;

	class LimaoNewsPostZoomInViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_D501FC103C8A2714* _Messenger; // 0x20
		::System::String* PrefabPath; // 0x28
		::Sofa::Core::SimpleCommand* _OnBtnClose_k__BackingField; // 0x30

		::System::Void _ctor(::System::String* a1, ::Class_1_D501FC103C8A2714* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_D501FC103C8A2714*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnClose()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
