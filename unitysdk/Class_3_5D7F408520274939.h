#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"

class Class_1_03D6D30E62EFB374_1;
class Class_1_ADBE1843AD1E672A;
class Class_3_9CB0178BAC4923B3;
namespace RPG::Client::MVVM::Service { class LimaoNewsWindowService; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5D7F408520274939_GET_ONBTNCONTACT_OFFSET UNITYSDK_OFFSET(0xB25F630)
#define CLASS_3_5D7F408520274939_GET_SHOWSPONSORS_OFFSET UNITYSDK_OFFSET(0xB25F610)
#define CLASS_3_5D7F408520274939_SET_ONBTNCONTACT_OFFSET UNITYSDK_OFFSET(0xB25F640)
#define CLASS_3_5D7F408520274939_SET_SHOWSPONSORS_OFFSET UNITYSDK_OFFSET(0xB25F620)
#define CLASS_3_5D7F408520274939__CTOR_OFFSET UNITYSDK_OFFSET(0xB25F4B0)
#define CLASS_3_5D7F408520274939___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xB25F650)

inline static constexpr unsigned int Class_3_5D7F408520274939_TypeDefinitionIndex = 60964;

class Class_3_5D7F408520274939 : public ::Class_2_3DE15EA7F53A0550
{
public:
	::System::Collections::Generic::List_1<::Class_3_9CB0178BAC4923B3*>* _ShowSponsors_k__BackingField; // 0x18
	::Class_1_ADBE1843AD1E672A* _OnBtnContact_k__BackingField; // 0x20
	::RPG::Client::MVVM::Service::LimaoNewsWindowService* Field_3_3; // 0x28
	::Class_1_03D6D30E62EFB374_1* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D7F408520274939__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_9CB0178BAC4923B3*>* get_ShowSponsors()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_9CB0178BAC4923B3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D7F408520274939_GET_SHOWSPONSORS_OFFSET))(this);
	}

	::System::Void set_ShowSponsors(::System::Collections::Generic::List_1<::Class_3_9CB0178BAC4923B3*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_9CB0178BAC4923B3*>*))((::PBYTE)hIl2Cpp + CLASS_3_5D7F408520274939_SET_SHOWSPONSORS_OFFSET))(this, value);
	}

	::Class_1_ADBE1843AD1E672A* get_OnBtnContact()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D7F408520274939_GET_ONBTNCONTACT_OFFSET))(this);
	}

	::System::Void set_OnBtnContact(::Class_1_ADBE1843AD1E672A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADBE1843AD1E672A*))((::PBYTE)hIl2Cpp + CLASS_3_5D7F408520274939_SET_ONBTNCONTACT_OFFSET))(this, value);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D7F408520274939___CTOR_B__0_0_OFFSET))(this);
	}
};
