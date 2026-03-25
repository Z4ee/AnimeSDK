#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_81595715048249D2_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x87DA3B0)
#define CLASS_1_81595715048249D2_GET_PLANDATA_OFFSET UNITYSDK_OFFSET(0x87DA440)
#define CLASS_1_81595715048249D2_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x87DA390)
#define CLASS_1_81595715048249D2_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x87DA460)
#define CLASS_1_81595715048249D2_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x87DA5D0)
#define CLASS_1_81595715048249D2_METHOD_1_A782C50886F8453A_OFFSET UNITYSDK_OFFSET(0x87DA640)
#define CLASS_1_81595715048249D2_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x87DA540)
#define CLASS_1_81595715048249D2_METHOD_1_B42E22529089AE55_OFFSET UNITYSDK_OFFSET(0x87DA690)
#define CLASS_1_81595715048249D2_METHOD_1_C2A28CA64905AA3E_OFFSET UNITYSDK_OFFSET(0x87DA9A0)
#define CLASS_1_81595715048249D2_METHOD_1_C7105891E78E20D6_OFFSET UNITYSDK_OFFSET(0x87DA3D0)
#define CLASS_1_81595715048249D2_METHOD_1_D5C6D7AC80D95BF7_OFFSET UNITYSDK_OFFSET(0x87DA6E0)
#define CLASS_1_81595715048249D2_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x87DA3C0)
#define CLASS_1_81595715048249D2_SET_PLANDATA_OFFSET UNITYSDK_OFFSET(0x87DA450)
#define CLASS_1_81595715048249D2_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x87DA3A0)
#define CLASS_1_81595715048249D2__CTOR_OFFSET UNITYSDK_OFFSET(0x87DA500)

inline static constexpr unsigned int Class_1_81595715048249D2_TypeDefinitionIndex = 54415;

class Class_1_81595715048249D2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Field_1_0; // 0x10
	::RPG::Client::IAvatarInfoProvider* _Avatar_k__BackingField; // 0x18
	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* _PlanData_k__BackingField; // 0x20
	::System::UInt32 _Version_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_GET_VERSION_OFFSET))(this);
	}

	::System::Void set_Version(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_SET_VERSION_OFFSET))(this, value);
	}

	::RPG::Client::IAvatarInfoProvider* get_Avatar()
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_GET_AVATAR_OFFSET))(this);
	}

	::System::Void set_Avatar(::RPG::Client::IAvatarInfoProvider* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_SET_AVATAR_OFFSET))(this, value);
	}

	::RPG::GameCore::AvatarRelicRecommendRow* Method_1_C7105891E78E20D6()
	{
		return ((::RPG::GameCore::AvatarRelicRecommendRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_C7105891E78E20D6_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* get_PlanData()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_GET_PLANDATA_OFFSET))(this);
	}

	::System::Void set_PlanData(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_SET_PLANDATA_OFFSET))(this, value);
	}

	static ::Class_1_81595715048249D2* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_81595715048249D2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_7E9AC3FFDA4606D5_OFFSET))();
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_A782C50886F8453A(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_A782C50886F8453A_OFFSET))(this, a1);
	}

	::System::Void Method_1_B42E22529089AE55(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_B42E22529089AE55_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Method_1_D5C6D7AC80D95BF7()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_D5C6D7AC80D95BF7_OFFSET))(this);
	}

	::System::Boolean Method_1_C2A28CA64905AA3E(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_81595715048249D2_METHOD_1_C2A28CA64905AA3E_OFFSET))(this, a1);
	}
};
