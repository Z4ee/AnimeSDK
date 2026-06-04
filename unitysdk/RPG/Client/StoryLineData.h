#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_594;
class Class_1_1AF243935D06EF67;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class StoryLineConfigRow; }
namespace RPG::GameCore { class StoryLineUIDataRow; }
namespace RPG::GameCore { class StroyLineTrialAvatarDataRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STORYLINEDATA_CANSWITCH_OFFSET UNITYSDK_OFFSET(0xC936FF0)
#define RPG_CLIENT_STORYLINEDATA_CREATEBRANCHLINE_OFFSET UNITYSDK_OFFSET(0xC9366A0)
#define RPG_CLIENT_STORYLINEDATA_CREATEMAINLINE_OFFSET UNITYSDK_OFFSET(0xC936560)
#define RPG_CLIENT_STORYLINEDATA_GETALLFLOORIDS_OFFSET UNITYSDK_OFFSET(0xC937750)
#define RPG_CLIENT_STORYLINEDATA_GETCONTENTID_OFFSET UNITYSDK_OFFSET(0xC937900)
#define RPG_CLIENT_STORYLINEDATA_GETSTORYLINEFLOOR_OFFSET UNITYSDK_OFFSET(0xC937690)
#define RPG_CLIENT_STORYLINEDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xC9374A0)
#define RPG_CLIENT_STORYLINEDATA_GET_CHRONICLEICONPATH_OFFSET UNITYSDK_OFFSET(0xC936360)
#define RPG_CLIENT_STORYLINEDATA_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xC936260)
#define RPG_CLIENT_STORYLINEDATA_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0xC936200)
#define RPG_CLIENT_STORYLINEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC9360E0)
#define RPG_CLIENT_STORYLINEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC9360B0)
#define RPG_CLIENT_STORYLINEDATA_GET_ISMAINLINE_OFFSET UNITYSDK_OFFSET(0xC9360D0)
#define RPG_CLIENT_STORYLINEDATA_GET_ISSKIPJOINLINEUP_OFFSET UNITYSDK_OFFSET(0xC9363C0)
#define RPG_CLIENT_STORYLINEDATA_GET_LARGEFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xC9361A0)
#define RPG_CLIENT_STORYLINEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC9362C0)
#define RPG_CLIENT_STORYLINEDATA_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0xC936140)
#define RPG_CLIENT_STORYLINEDATA_ISFLOORUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC937620)
#define RPG_CLIENT_STORYLINEDATA_ONACTIVATED_OFFSET UNITYSDK_OFFSET(0xC936A30)
#define RPG_CLIENT_STORYLINEDATA_ONDEACTIVATED_OFFSET UNITYSDK_OFFSET(0xC9369F0)
#define RPG_CLIENT_STORYLINEDATA_ONGETHEROBASICTYPEINFO_OFFSET UNITYSDK_OFFSET(0xC936BA0)
#define RPG_CLIENT_STORYLINEDATA_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xC936CF0)
#define RPG_CLIENT_STORYLINEDATA_SETMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0xC936B50)
#define RPG_CLIENT_STORYLINEDATA_SETTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC9370F0)
#define RPG_CLIENT_STORYLINEDATA_SETUNLOCKBYSERVER_OFFSET UNITYSDK_OFFSET(0xC937450)
#define RPG_CLIENT_STORYLINEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC9360C0)
#define RPG_CLIENT_STORYLINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9364E0)
#define RPG_CLIENT_STORYLINEDATA__GETSTORYLINETRIALAVATARDATA_OFFSET UNITYSDK_OFFSET(0xC936470)
#define RPG_CLIENT_STORYLINEDATA__GETSTORYLINEUIDATAROW_OFFSET UNITYSDK_OFFSET(0xC936BF0)
#define RPG_CLIENT_STORYLINEDATA__INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC936650)
#define RPG_CLIENT_STORYLINEDATA__INITSTORYLINEFLOORDATA_OFFSET UNITYSDK_OFFSET(0xC9367C0)
#define RPG_CLIENT_STORYLINEDATA__ISITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0xC937A20)
#define RPG_CLIENT_STORYLINEDATA__PREPAREFLOORDATA_OFFSET UNITYSDK_OFFSET(0xC936EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineData_TypeDefinitionIndex = 63608;

	class StoryLineData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 MAIN_LINE_ID = 0x0; // 0x0
		::RPG::GameCore::StroyLineTrialAvatarDataRow* _TrialAvatarData; // 0x10
		::RPG::GameCore::StoryLineConfigRow* _StoryLineRow; // 0x18
		::System::Collections::Generic::List_1<::Class_1_1AF243935D06EF67*>* _StoryLineFloors; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _TrialAvatarIDs; // 0x28
		::Class_0_16E4307DCC419505_594* _UnlockChecker; // 0x30
		::RPG::GameCore::StoryLineUIDataRow* _UIDataRow; // 0x38
		::System::UInt32 _ID_k__BackingField; // 0x40
		::System::Boolean _Activated; // 0x44
		::System::Boolean _MissionDataReady; // 0x45
		::System::Boolean _UnlockByServer; // 0x46

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMainLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_ISMAINLINE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_PortraitPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_PORTRAITPATH_OFFSET))(this);
		}

		::System::String* get_LargeFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_LARGEFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_FIGUREPATH_OFFSET))(this);
		}

		::System::String* get_Color()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_COLOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_ChronicleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_CHRONICLEICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsSkipJoinLineup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_ISSKIPJOINLINEUP_OFFSET))(this);
		}

		static ::RPG::Client::StoryLineData* CreateMainLine()
		{
			return ((::RPG::Client::StoryLineData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_CREATEMAINLINE_OFFSET))();
		}

		static ::RPG::Client::StoryLineData* CreateBranchLine(::RPG::GameCore::StoryLineConfigRow* a1)
		{
			return ((::RPG::Client::StoryLineData*(*)(::RPG::GameCore::StoryLineConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_CREATEBRANCHLINE_OFFSET))(a1);
		}

		::System::Void OnDeactivated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_ONDEACTIVATED_OFFSET))(this);
		}

		::System::Void OnActivated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_ONACTIVATED_OFFSET))(this);
		}

		::System::Void SetMissionDataReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_SETMISSIONDATAREADY_OFFSET))(this, a1);
		}

		::System::Void OnGetHeroBasicTypeInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_ONGETHEROBASICTYPEINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_PREPAREDATA_OFFSET))(this);
		}

		::System::Boolean CanSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_CANSWITCH_OFFSET))(this);
		}

		::System::Void SetTrialAvatarIDs(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_SETTRIALAVATARIDS_OFFSET))(this, a1);
		}

		::System::Void SetUnlockByServer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_SETUNLOCKBYSERVER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::Boolean IsFloorUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_ISFLOORUNLOCKED_OFFSET))(this, a1);
		}

		::Class_1_1AF243935D06EF67* GetStoryLineFloor(::System::UInt32 a1)
		{
			return ((::Class_1_1AF243935D06EF67*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GETSTORYLINEFLOOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAllFloorIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GETALLFLOORIDS_OFFSET))(this);
		}

		::System::UInt32 GetContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GETCONTENTID_OFFSET))(this);
		}

		::System::Void _Initialize(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__INITIALIZE_OFFSET))(this, a1);
		}

		::RPG::GameCore::StoryLineUIDataRow* _GetStoryLineUIDataRow()
		{
			return ((::RPG::GameCore::StoryLineUIDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__GETSTORYLINEUIDATAROW_OFFSET))(this);
		}

		::RPG::GameCore::StroyLineTrialAvatarDataRow* _GetStoryLineTrialAvatarData()
		{
			return ((::RPG::GameCore::StroyLineTrialAvatarDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__GETSTORYLINETRIALAVATARDATA_OFFSET))(this);
		}

		::System::Boolean _IsItemVisible(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__ISITEMVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _InitStoryLineFloorData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__INITSTORYLINEFLOORDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _PrepareFloorData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__PREPAREFLOORDATA_OFFSET))(this);
		}
	};
}
