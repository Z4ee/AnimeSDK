#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_35B8E94AA1DBDC5E;
class Class_1_7ADF327B3942072B;
namespace System { class String; }

#define RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x1B88FB30)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1B88FAE0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_FUNCNT_OFFSET UNITYSDK_OFFSET(0x1B88FA90)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_FUNDESC_OFFSET UNITYSDK_OFFSET(0x1B88FA20)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_FUNNAME_OFFSET UNITYSDK_OFFSET(0x1B88F9B0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88FC40)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleMapFunViewModel_TypeDefinitionIndex = 64005;

	class ExpeditionBattleMapFunViewModel : public ::System::Object
	{
	public:
		::Class_1_35B8E94AA1DBDC5E* _DisplayService; // 0x10
		::Class_1_7ADF327B3942072B* _FunRecord; // 0x18

		::System::Void _ctor(::Class_1_7ADF327B3942072B* a1, ::Class_1_35B8E94AA1DBDC5E* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ADF327B3942072B*, ::Class_1_35B8E94AA1DBDC5E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_FunName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_FUNNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_FunDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_FUNDESC_OFFSET))(this);
		}

		::System::UInt64 get_FunCnt()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_FUNCNT_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_AVATARID_OFFSET))(this);
		}

		::System::String* get_AvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_AVATARICONPATH_OFFSET))(this);
		}
	};
}
