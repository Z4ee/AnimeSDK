#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9F8AF0992029BE5B_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xB9921F0)
#define CLASS_1_9F8AF0992029BE5B_GET_ADDSTATVALUEMAP_OFFSET UNITYSDK_OFFSET(0xB992230)
#define CLASS_1_9F8AF0992029BE5B_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB992210)
#define CLASS_1_9F8AF0992029BE5B_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xB992200)
#define CLASS_1_9F8AF0992029BE5B_SET_ADDSTATVALUEMAP_OFFSET UNITYSDK_OFFSET(0xB992240)
#define CLASS_1_9F8AF0992029BE5B_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB992220)
#define CLASS_1_9F8AF0992029BE5B__CTOR_OFFSET UNITYSDK_OFFSET(0xB992250)

inline static constexpr unsigned int Class_1_9F8AF0992029BE5B_TypeDefinitionIndex = 81666;

class Class_1_9F8AF0992029BE5B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _AddStatValueMap_k__BackingField; // 0x10
	::System::UInt32 _ActionID_k__BackingField; // 0x18
	::RPG::Client::TextID _Name_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F8AF0992029BE5B__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ActionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F8AF0992029BE5B_GET_ACTIONID_OFFSET))(this);
	}

	::System::Void set_ActionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F8AF0992029BE5B_SET_ACTIONID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F8AF0992029BE5B_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_9F8AF0992029BE5B_SET_NAME_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_AddStatValueMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F8AF0992029BE5B_GET_ADDSTATVALUEMAP_OFFSET))(this);
	}

	::System::Void set_AddStatValueMap(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9F8AF0992029BE5B_SET_ADDSTATVALUEMAP_OFFSET))(this, a1);
	}
};
