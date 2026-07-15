#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_CHALLENGEPEAKTAG_CREATE_OFFSET UNITYSDK_OFFSET(0x191DC0D0)
#define RPG_CLIENT_CHALLENGEPEAKTAG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x191F2750)
#define RPG_CLIENT_CHALLENGEPEAKTAG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x191F28B0)
#define RPG_CLIENT_CHALLENGEPEAKTAG_GET_ID_OFFSET UNITYSDK_OFFSET(0x191F2690)
#define RPG_CLIENT_CHALLENGEPEAKTAG_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x191F2920)
#define RPG_CLIENT_CHALLENGEPEAKTAG_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x191F2900)
#define RPG_CLIENT_CHALLENGEPEAKTAG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x191F26E0)
#define RPG_CLIENT_CHALLENGEPEAKTAG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x191F2800)
#define RPG_CLIENT_CHALLENGEPEAKTAG_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x191F2930)
#define RPG_CLIENT_CHALLENGEPEAKTAG_SET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x191F2910)
#define RPG_CLIENT_CHALLENGEPEAKTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x191F2940)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTag_TypeDefinitionIndex = 60376;

	class ChallengePeakTag : public ::System::Object
	{
	public:
		::RPG::GameCore::MazeBuffRow* _Meta; // 0x10
		::System::Boolean _IsSpecial_k__BackingField; // 0x18
		::System::Boolean _IsNew_k__BackingField; // 0x19

		::System::Void _ctor(::RPG::GameCore::MazeBuffRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTAG__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTAG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTAG_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTAG_GET_DESC_OFFSET))(this);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTAG_GET_SIMPLEDESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTAG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTAG_GET_ISSPECIAL_OFFSET))(this);
		}

		::System::Void set_IsSpecial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTAG_SET_ISSPECIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTAG_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTAG_SET_ISNEW_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChallengePeakTag* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ChallengePeakTag*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTAG_CREATE_OFFSET))(a1, a2);
		}
	};
}
