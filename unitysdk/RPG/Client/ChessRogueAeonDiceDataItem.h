#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueDLCAeonDiceRow; }
namespace RPG::GameCore { class RogueDLCAeonDiceSurfaceRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9360F70)
#define RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_DESCPARAM_OFFSET UNITYSDK_OFFSET(0x9361130)
#define RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_DICEICONPATH_OFFSET UNITYSDK_OFFSET(0x9361000)
#define RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_DICEID_OFFSET UNITYSDK_OFFSET(0x9360FE0)
#define RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_DICEMODELPATH_OFFSET UNITYSDK_OFFSET(0x9361020)
#define RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_DICESHORTDESC_OFFSET UNITYSDK_OFFSET(0x9361100)
#define RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_DICESTARTEFFECTDESC_OFFSET UNITYSDK_OFFSET(0x93610B0)
#define RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_EXTRAEFFECT_OFFSET UNITYSDK_OFFSET(0x9361040)
#define RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_STARTDESCPARAM_OFFSET UNITYSDK_OFFSET(0x93610E0)
#define RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_SURFACEROWS_OFFSET UNITYSDK_OFFSET(0x93610A0)
#define RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9360E00)
#define RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM__INITROGUEDLCSURFACES_OFFSET UNITYSDK_OFFSET(0x9360E50)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAeonDiceDataItem_TypeDefinitionIndex = 54457;

	class ChessRogueAeonDiceDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueDLCAeonDiceRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*>* _SurfaceRows; // 0x18

		::System::Void _ctor(::RPG::GameCore::RogueDLCAeonDiceRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonDiceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM__CTOR_OFFSET))(this, row);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitRogueDLCSurfaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM__INITROGUEDLCSURFACES_OFFSET))(this);
		}

		::System::UInt32 get_DiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_DICEID_OFFSET))(this);
		}

		::System::String* get_DiceIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_DICEICONPATH_OFFSET))(this);
		}

		::System::String* get_DiceModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_DICEMODELPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffect()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_EXTRAEFFECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*>* get_SurfaceRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_SURFACEROWS_OFFSET))(this);
		}

		::RPG::Client::TextID get_DiceStartEffectDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_DICESTARTEFFECTDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_StartDescParam()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_STARTDESCPARAM_OFFSET))(this);
		}

		::RPG::Client::TextID get_DiceShortDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_DICESHORTDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParam()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDICEDATAITEM_GET_DESCPARAM_OFFSET))(this);
		}
	};
}
