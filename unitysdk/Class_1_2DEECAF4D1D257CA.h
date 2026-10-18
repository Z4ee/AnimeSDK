#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PlayerReturnTrialAvatarGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2DEECAF4D1D257CA_GET_ISASSISTAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB924470)
#define CLASS_1_2DEECAF4D1D257CA_GET_USINGASSISTGROUPID_OFFSET UNITYSDK_OFFSET(0xB924450)
#define CLASS_1_2DEECAF4D1D257CA_GET_USINGRETURNID_OFFSET UNITYSDK_OFFSET(0xB924430)
#define CLASS_1_2DEECAF4D1D257CA_GET_USINGTRIALAVATARGROUP_OFFSET UNITYSDK_OFFSET(0xB924490)
#define CLASS_1_2DEECAF4D1D257CA_METHOD_1_0EA837295AE4519F_OFFSET UNITYSDK_OFFSET(0xB923BC0)
#define CLASS_1_2DEECAF4D1D257CA_METHOD_1_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0xB924090)
#define CLASS_1_2DEECAF4D1D257CA_METHOD_1_13004921ED9C7319_OFFSET UNITYSDK_OFFSET(0xB9240F0)
#define CLASS_1_2DEECAF4D1D257CA_METHOD_1_18D6CFE1BE963B0A_OFFSET UNITYSDK_OFFSET(0xB9243D0)
#define CLASS_1_2DEECAF4D1D257CA_METHOD_1_23868C4F4B4610C9_OFFSET UNITYSDK_OFFSET(0xB9242C0)
#define CLASS_1_2DEECAF4D1D257CA_METHOD_1_53C3C61BF4D261AA_OFFSET UNITYSDK_OFFSET(0xB9238B0)
#define CLASS_1_2DEECAF4D1D257CA_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xB923C80)
#define CLASS_1_2DEECAF4D1D257CA_METHOD_1_7B4A205C38FE24BC_OFFSET UNITYSDK_OFFSET(0xB923EA0)
#define CLASS_1_2DEECAF4D1D257CA_METHOD_1_9477221A6F70535F_OFFSET UNITYSDK_OFFSET(0xB9241D0)
#define CLASS_1_2DEECAF4D1D257CA_METHOD_1_A43932CA1D838777_OFFSET UNITYSDK_OFFSET(0xB923960)
#define CLASS_1_2DEECAF4D1D257CA_SET_ISASSISTAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB924480)
#define CLASS_1_2DEECAF4D1D257CA_SET_USINGASSISTGROUPID_OFFSET UNITYSDK_OFFSET(0xB924460)
#define CLASS_1_2DEECAF4D1D257CA_SET_USINGRETURNID_OFFSET UNITYSDK_OFFSET(0xB924440)
#define CLASS_1_2DEECAF4D1D257CA_SET_USINGTRIALAVATARGROUP_OFFSET UNITYSDK_OFFSET(0xB9244A0)
#define CLASS_1_2DEECAF4D1D257CA__CTOR_OFFSET UNITYSDK_OFFSET(0xB9237F0)

inline static constexpr unsigned int Class_1_2DEECAF4D1D257CA_TypeDefinitionIndex = 61889;

class Class_1_2DEECAF4D1D257CA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlayerReturnTrialAvatarGroup*>* GBJMOLLFCNM; // 0x10
	::RPG::Client::PlayerReturnTrialAvatarGroup* _UsingTrialAvatarGroup_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* KOGKDDBPLKK; // 0x20
	::System::Boolean _IsAssistAvailable_k__BackingField; // 0x28
	::System::UInt32 _UsingReturnID_k__BackingField; // 0x2C
	::System::UInt32 _UsingAssistGroupID_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA__CTOR_OFFSET))(this);
	}

	::RPG::Client::PlayerReturnTrialAvatarGroup* Method_1_53C3C61BF4D261AA(::System::UInt32 a1)
	{
		return ((::RPG::Client::PlayerReturnTrialAvatarGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_METHOD_1_53C3C61BF4D261AA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_A43932CA1D838777()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_METHOD_1_A43932CA1D838777_OFFSET))(this);
	}

	::System::Boolean Method_1_0EA837295AE4519F(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_METHOD_1_0EA837295AE4519F_OFFSET))(this, a1);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_7B4A205C38FE24BC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_METHOD_1_7B4A205C38FE24BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_METHOD_1_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_13004921ED9C7319(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_METHOD_1_13004921ED9C7319_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_9477221A6F70535F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_METHOD_1_9477221A6F70535F_OFFSET))(this);
	}

	::System::Boolean Method_1_23868C4F4B4610C9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_METHOD_1_23868C4F4B4610C9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* Method_1_18D6CFE1BE963B0A()
	{
		return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_METHOD_1_18D6CFE1BE963B0A_OFFSET))(this);
	}

	::System::UInt32 get_UsingReturnID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_GET_USINGRETURNID_OFFSET))(this);
	}

	::System::Void set_UsingReturnID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_SET_USINGRETURNID_OFFSET))(this, a1);
	}

	::System::UInt32 get_UsingAssistGroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_GET_USINGASSISTGROUPID_OFFSET))(this);
	}

	::System::Void set_UsingAssistGroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_SET_USINGASSISTGROUPID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAssistAvailable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_GET_ISASSISTAVAILABLE_OFFSET))(this);
	}

	::System::Void set_IsAssistAvailable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_SET_ISASSISTAVAILABLE_OFFSET))(this, a1);
	}

	::RPG::Client::PlayerReturnTrialAvatarGroup* get_UsingTrialAvatarGroup()
	{
		return ((::RPG::Client::PlayerReturnTrialAvatarGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_GET_USINGTRIALAVATARGROUP_OFFSET))(this);
	}

	::System::Void set_UsingTrialAvatarGroup(::RPG::Client::PlayerReturnTrialAvatarGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerReturnTrialAvatarGroup*))((::PBYTE)hIl2Cpp + CLASS_1_2DEECAF4D1D257CA_SET_USINGTRIALAVATARGROUP_OFFSET))(this, a1);
	}
};
