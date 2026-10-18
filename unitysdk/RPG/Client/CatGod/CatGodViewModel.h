#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_D501FC103C8A2714;
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_GET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0xC93C470)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_GET_ONBTNSTAY_OFFSET UNITYSDK_OFFSET(0xC93C450)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_SET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0xC93C480)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_SET_ONBTNSTAY_OFFSET UNITYSDK_OFFSET(0xC93C460)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC93C2C0)

namespace RPG::Client::CatGod
{
	inline static constexpr unsigned int CatGodViewModel_TypeDefinitionIndex = 81656;

	class CatGodViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_D501FC103C8A2714* _Messenger; // 0x20
		::Sofa::Core::SimpleCommand* _OnBtnStay_k__BackingField; // 0x28
		::Sofa::Core::SimpleCommand* _OnBtnGo_k__BackingField; // 0x30

		::System::Void _ctor(::Class_1_D501FC103C8A2714* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D501FC103C8A2714*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnStay()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_GET_ONBTNSTAY_OFFSET))(this);
		}

		::System::Void set_OnBtnStay(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_SET_ONBTNSTAY_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnGo()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_GET_ONBTNGO_OFFSET))(this);
		}

		::System::Void set_OnBtnGo(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_SET_ONBTNGO_OFFSET))(this, a1);
		}
	};
}
