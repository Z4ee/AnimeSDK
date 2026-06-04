#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_5F4D64A4B97E38F9;

#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_GET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0xB4BF230)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_GET_ONBTNSTAY_OFFSET UNITYSDK_OFFSET(0xB4BF210)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_SET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0xB4BF240)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL_SET_ONBTNSTAY_OFFSET UNITYSDK_OFFSET(0xB4BF220)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BF080)

namespace RPG::Client::CatGod
{
	inline static constexpr unsigned int CatGodViewModel_TypeDefinitionIndex = 74306;

	class CatGodViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_2FDE33CCAE591AA8* _OnBtnStay_k__BackingField; // 0x20
		::Class_1_2FDE33CCAE591AA8* _OnBtnGo_k__BackingField; // 0x28
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x30

		::System::Void _ctor(::Class_1_5F4D64A4B97E38F9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::Class_1_2FDE33CCAE591AA8* get_OnBtnStay()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_GET_ONBTNSTAY_OFFSET))(this);
		}

		::System::Void set_OnBtnStay(::Class_1_2FDE33CCAE591AA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_SET_ONBTNSTAY_OFFSET))(this, a1);
		}

		::Class_1_2FDE33CCAE591AA8* get_OnBtnGo()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_GET_ONBTNGO_OFFSET))(this);
		}

		::System::Void set_OnBtnGo(::Class_1_2FDE33CCAE591AA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL_SET_ONBTNGO_OFFSET))(this, a1);
		}
	};
}
