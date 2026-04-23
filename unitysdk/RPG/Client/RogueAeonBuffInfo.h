#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffData; }
namespace RPG::GameCore { class RogueAeonRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEAEONBUFFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB021890)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GETBASICBUFF_OFFSET UNITYSDK_OFFSET(0xB021910)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GETENHANCEBUFFS_OFFSET UNITYSDK_OFFSET(0xB021AF0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONDISPLAYID_OFFSET UNITYSDK_OFFSET(0xB021D60)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONID_OFFSET UNITYSDK_OFFSET(0xB021D20)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONROW_OFFSET UNITYSDK_OFFSET(0xB021D40)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_EFFECTDESC1_OFFSET UNITYSDK_OFFSET(0xB021D80)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_EFFECTDESC2_OFFSET UNITYSDK_OFFSET(0xB021DB0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_ROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xB021DE0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0xB021840)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_SET_AEONID_OFFSET UNITYSDK_OFFSET(0xB021D30)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_SET_AEONROW_OFFSET UNITYSDK_OFFSET(0xB021D50)
#define RPG_CLIENT_ROGUEAEONBUFFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB021770)
#define RPG_CLIENT_ROGUEAEONBUFFINFO__TRYINIT_OFFSET UNITYSDK_OFFSET(0xB021780)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAeonBuffInfo_TypeDefinitionIndex = 62156;

	class RogueAeonBuffInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueAeonRow* _AeonRow_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _EnhanceBuffs; // 0x18
		::RPG::Client::RogueBuffData* _BasicBuff; // 0x20
		::System::UInt32 _AeonID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 aeonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO__CTOR_OFFSET))(this, aeonID);
		}

		::System::Void Refresh(::System::UInt32 aeonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_REFRESH_OFFSET))(this, aeonID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _TryInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO__TRYINIT_OFFSET))(this);
		}

		::RPG::Client::RogueBuffData* GetBasicBuff()
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GETBASICBUFF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* GetEnhanceBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GETENHANCEBUFFS_OFFSET))(this);
		}

		::System::UInt32 get_AeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONID_OFFSET))(this);
		}

		::System::Void set_AeonID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_SET_AEONID_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueAeonRow* get_AeonRow()
		{
			return ((::RPG::GameCore::RogueAeonRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONROW_OFFSET))(this);
		}

		::System::Void set_AeonRow(::RPG::GameCore::RogueAeonRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_SET_AEONROW_OFFSET))(this, value);
		}

		::System::UInt32 get_AeonDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONDISPLAYID_OFFSET))(this);
		}

		::RPG::Client::TextID get_EffectDesc1()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_EFFECTDESC1_OFFSET))(this);
		}

		::RPG::Client::TextID get_EffectDesc2()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_EFFECTDESC2_OFFSET))(this);
		}

		::System::UInt32 get_RogueBuffType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_ROGUEBUFFTYPE_OFFSET))(this);
		}
	};
}
