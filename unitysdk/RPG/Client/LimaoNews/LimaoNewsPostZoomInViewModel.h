#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_5F4D64A4B97E38F9;
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xBDABD60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xBDABD70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBDABCA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBDABD80)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostZoomInViewModel_TypeDefinitionIndex = 73894;

	class LimaoNewsPostZoomInViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::String* PrefabPath; // 0x20
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x28
		::Class_1_2FDE33CCAE591AA8* _OnBtnClose_k__BackingField; // 0x30

		::System::Void _ctor(::System::String* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::Class_1_2FDE33CCAE591AA8* get_OnBtnClose()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Class_1_2FDE33CCAE591AA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
