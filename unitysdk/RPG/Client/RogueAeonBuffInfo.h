#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffData; }
namespace RPG::GameCore { class RogueAeonRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEAEONBUFFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC76C7D0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GETBASICBUFF_OFFSET UNITYSDK_OFFSET(0xC76C850)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GETENHANCEBUFFS_OFFSET UNITYSDK_OFFSET(0xC76CA20)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONDISPLAYID_OFFSET UNITYSDK_OFFSET(0xC76CCF0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONID_OFFSET UNITYSDK_OFFSET(0xC76CCB0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONROW_OFFSET UNITYSDK_OFFSET(0xC76CCD0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_EFFECTDESC1_OFFSET UNITYSDK_OFFSET(0xC76CD10)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_EFFECTDESC2_OFFSET UNITYSDK_OFFSET(0xC76CD40)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_ROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xC76CD70)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0xC76C780)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_SET_AEONID_OFFSET UNITYSDK_OFFSET(0xC76CCC0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_SET_AEONROW_OFFSET UNITYSDK_OFFSET(0xC76CCE0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC76C6B0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO__TRYINIT_OFFSET UNITYSDK_OFFSET(0xC76C6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAeonBuffInfo_TypeDefinitionIndex = 63089;

	class RogueAeonBuffInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueBuffData* _BasicBuff; // 0x10
		::RPG::GameCore::RogueAeonRow* _AeonRow_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _EnhanceBuffs; // 0x20
		::System::UInt32 _AeonID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void Refresh(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_REFRESH_OFFSET))(this, a1);
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

		::System::Void set_AeonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_SET_AEONID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueAeonRow* get_AeonRow()
		{
			return ((::RPG::GameCore::RogueAeonRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONROW_OFFSET))(this);
		}

		::System::Void set_AeonRow(::RPG::GameCore::RogueAeonRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_SET_AEONROW_OFFSET))(this, a1);
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
