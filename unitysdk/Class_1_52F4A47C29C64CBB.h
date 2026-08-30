#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_52F4A47C29C64CBB_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xED79A70)
#define CLASS_1_52F4A47C29C64CBB_GET_PLANDATA_OFFSET UNITYSDK_OFFSET(0xED79B00)
#define CLASS_1_52F4A47C29C64CBB_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xED79A50)
#define CLASS_1_52F4A47C29C64CBB_METHOD_1_127BBE0707AEE314_OFFSET UNITYSDK_OFFSET(0xED79DA0)
#define CLASS_1_52F4A47C29C64CBB_METHOD_1_2807AF6E64F05A6A_OFFSET UNITYSDK_OFFSET(0xED7A0C0)
#define CLASS_1_52F4A47C29C64CBB_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0xED79B20)
#define CLASS_1_52F4A47C29C64CBB_METHOD_1_B38BA7FF09A3FCB9_OFFSET UNITYSDK_OFFSET(0xED79D00)
#define CLASS_1_52F4A47C29C64CBB_METHOD_1_C3555C7ACCDC14EC_OFFSET UNITYSDK_OFFSET(0xED79D50)
#define CLASS_1_52F4A47C29C64CBB_METHOD_1_C51FDF05180E75AF_OFFSET UNITYSDK_OFFSET(0xED79A90)
#define CLASS_1_52F4A47C29C64CBB_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xED79C00)
#define CLASS_1_52F4A47C29C64CBB_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xED79C90)
#define CLASS_1_52F4A47C29C64CBB_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0xED79A80)
#define CLASS_1_52F4A47C29C64CBB_SET_PLANDATA_OFFSET UNITYSDK_OFFSET(0xED79B10)
#define CLASS_1_52F4A47C29C64CBB_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xED79A60)
#define CLASS_1_52F4A47C29C64CBB__CTOR_OFFSET UNITYSDK_OFFSET(0xED79BC0)

inline static constexpr unsigned int Class_1_52F4A47C29C64CBB_TypeDefinitionIndex = 66894;

class Class_1_52F4A47C29C64CBB : public ::System::Object
{
public:
	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* _PlanData_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* DBHLFFFDPAG; // 0x18
	::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x20
	::System::UInt32 _Version_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_GET_VERSION_OFFSET))(this);
	}

	::System::Void set_Version(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_SET_VERSION_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* get_Avatar()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_GET_AVATAR_OFFSET))(this);
	}

	::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_SET_AVATAR_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarRelicRecommendRow* Method_1_C51FDF05180E75AF()
	{
		return ((::RPG::GameCore::AvatarRelicRecommendRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_METHOD_1_C51FDF05180E75AF_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* get_PlanData()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_GET_PLANDATA_OFFSET))(this);
	}

	::System::Void set_PlanData(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_SET_PLANDATA_OFFSET))(this, a1);
	}

	static ::Class_1_52F4A47C29C64CBB* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_52F4A47C29C64CBB*(*)())((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_METHOD_1_7E9AC3FFDA4606D5_OFFSET))();
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_B38BA7FF09A3FCB9(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_METHOD_1_B38BA7FF09A3FCB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3555C7ACCDC14EC(::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_METHOD_1_C3555C7ACCDC14EC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Method_1_127BBE0707AEE314()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_METHOD_1_127BBE0707AEE314_OFFSET))(this);
	}

	::System::Boolean Method_1_2807AF6E64F05A6A(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_52F4A47C29C64CBB_METHOD_1_2807AF6E64F05A6A_OFFSET))(this, a1);
	}
};
