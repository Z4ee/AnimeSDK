#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_87;
class Class_1_8CA784D26D9A6CF7;
class Class_1_F0F5FC8CD22F7E83;
class Class_2_570C2CCF5D0BF6A1;
class Class_2_7419679A7698613D;
namespace RPG::GameCore { class PckPatchConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_VERSIONUPDATEMGR_CLEARDOWNLOADEDALLASSETSFLAG_OFFSET UNITYSDK_OFFSET(0xE3FE040)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETASSETSERVERUPDATEURL_OFFSET UNITYSDK_OFFSET(0xE3FE140)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETDOWNLOADALLSIZEWITHBLACKLIST_OFFSET UNITYSDK_OFFSET(0xE3FE3B0)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETDOWNLOADALLSIZE_OFFSET UNITYSDK_OFFSET(0xE3FE240)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADALLSIZE_OFFSET UNITYSDK_OFFSET(0xE4013D0)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADASSETSERVERUPDATEURL_OFFSET UNITYSDK_OFFSET(0xE4040E0)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADFULLSIZE_OFFSET UNITYSDK_OFFSET(0xE401540)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0xE402BA0)
#define RPG_CLIENT_VERSIONUPDATEMGR_HAVEPREDOWNLOADASSETS_OFFSET UNITYSDK_OFFSET(0xE3FFC70)
#define RPG_CLIENT_VERSIONUPDATEMGR_HAVEPREDOWNLOADVERSION_OFFSET UNITYSDK_OFFSET(0xE3FFE50)
#define RPG_CLIENT_VERSIONUPDATEMGR_ISDOWNLOADEDALLASSETS_OFFSET UNITYSDK_OFFSET(0xE3FDD30)
#define RPG_CLIENT_VERSIONUPDATEMGR_ISPREDOWNLOADEDALLASSETS_OFFSET UNITYSDK_OFFSET(0xE404170)
#define RPG_CLIENT_VERSIONUPDATEMGR_LOADMINIVERSION_OFFSET UNITYSDK_OFFSET(0xE3FFF00)
#define RPG_CLIENT_VERSIONUPDATEMGR_LOADPREDOWNLOADVERSION_OFFSET UNITYSDK_OFFSET(0xE4009A0)
#define RPG_CLIENT_VERSIONUPDATEMGR_MAKEDOWNLOADEDALLASSETSFLAG_OFFSET UNITYSDK_OFFSET(0xE3FDEA0)
#define RPG_CLIENT_VERSIONUPDATEMGR_REMOVEPCKPATCHFILE_OFFSET UNITYSDK_OFFSET(0xE400040)
#define RPG_CLIENT_VERSIONUPDATEMGR_REMOVEPCKPATCHS_OFFSET UNITYSDK_OFFSET(0xE4001E0)
#define RPG_CLIENT_VERSIONUPDATEMGR_TRYDELETEPREDOWNLOADASSETS_OFFSET UNITYSDK_OFFSET(0xE400BB0)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHDOWNLOADINFOSCORE_OFFSET UNITYSDK_OFFSET(0xE4031C0)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHDOWNLOADINFOS_OFFSET UNITYSDK_OFFSET(0xE3FEA80)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHPREDOWNLOADINFOS_OFFSET UNITYSDK_OFFSET(0xE403080)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHDOWNLOADINFOSCORE_OFFSET UNITYSDK_OFFSET(0xE3FEC30)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHDOWNLOADINFOS_OFFSET UNITYSDK_OFFSET(0xE3FE8D0)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHPREDOWNLOADINFOS_OFFSET UNITYSDK_OFFSET(0xE402F40)
#define RPG_CLIENT_VERSIONUPDATEMGR__CTOR_OFFSET UNITYSDK_OFFSET(0xE4047C0)
#define RPG_CLIENT_VERSIONUPDATEMGR__GETDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0xE3FE520)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr_TypeDefinitionIndex = 61371;

	class VersionUpdateMgr : public ::System::Object
	{
	public:
		// static const ::System::String* DownloadAllAssetsFlagFile; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsDownloadedAllAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_ISDOWNLOADEDALLASSETS_OFFSET))();
		}

		static ::System::Void MakeDownloadedAllAssetsFlag()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_MAKEDOWNLOADEDALLASSETSFLAG_OFFSET))();
		}

		static ::System::Void ClearDownloadedAllAssetsFlag()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_CLEARDOWNLOADEDALLASSETSFLAG_OFFSET))();
		}

		static ::System::String* GetAssetServerUpdateUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETASSETSERVERUPDATEURL_OFFSET))();
		}

		static ::System::Void GetDownloadAllSize(::System::Action_1<::System::Int64>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Int64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETDOWNLOADALLSIZE_OFFSET))(a1);
		}

		static ::System::Void GetDownloadAllSizeWithBlackList(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Action_2<::System::Int64, ::System::Int64>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Action_2<::System::Int64, ::System::Int64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETDOWNLOADALLSIZEWITHBLACKLIST_OFFSET))(a1, a2);
		}

		static ::System::Int64 _GetDownloadSize(::Class_1_8CA784D26D9A6CF7* a1)
		{
			return ((::System::Int64(*)(::Class_1_8CA784D26D9A6CF7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__GETDOWNLOADSIZE_OFFSET))(a1);
		}

		static ::System::Boolean _CalcBlockHPatchDownloadInfos(::Class_2_7419679A7698613D* a1, ::System::Int64& a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Int64& a5, ::System::Int32& a6)
		{
			return ((::System::Boolean(*)(::Class_2_7419679A7698613D*, ::System::Int64&, ::System::Int32&, ::System::Int32&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHDOWNLOADINFOS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean _CalcBlockHPatchDownloadInfosCore(::Class_2_7419679A7698613D* a1, ::System::Func_2<::Class_0_16E4307DCC419505_87*, ::System::Boolean>* a2, ::System::Int64& a3, ::System::Int32& a4, ::System::Int32& a5, ::System::Int64& a6, ::System::Int32& a7)
		{
			return ((::System::Boolean(*)(::Class_2_7419679A7698613D*, ::System::Func_2<::Class_0_16E4307DCC419505_87*, ::System::Boolean>*, ::System::Int64&, ::System::Int32&, ::System::Int32&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHDOWNLOADINFOSCORE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean HavePredownloadAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_HAVEPREDOWNLOADASSETS_OFFSET))();
		}

		static ::Class_1_F0F5FC8CD22F7E83* LoadMiniVersion(::System::String* a1, ::System::String* a2)
		{
			return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_LOADMINIVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean HavePredownloadVersion(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_HAVEPREDOWNLOADVERSION_OFFSET))(a1, a2);
		}

		static ::System::Void RemovePckPatchFile(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_REMOVEPCKPATCHFILE_OFFSET))(a1);
		}

		static ::System::Void RemovePckPatchs(::RPG::GameCore::PckPatchConfig* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::PckPatchConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_REMOVEPCKPATCHS_OFFSET))(a1, a2);
		}

		static ::Class_1_F0F5FC8CD22F7E83* LoadPredownloadVersion(::System::String* a1, ::System::String* a2)
		{
			return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_LOADPREDOWNLOADVERSION_OFFSET))(a1, a2);
		}

		static ::System::Void TryDeletePredownloadAssets(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_TRYDELETEPREDOWNLOADASSETS_OFFSET))(a1);
		}

		static ::System::Void GetPredownloadAllSize(::System::Action_2<::System::Int64, ::System::Int64>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::System::Int64, ::System::Int64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADALLSIZE_OFFSET))(a1);
		}

		static ::System::Int64 GetPreDownloadFullSize(::Class_1_8CA784D26D9A6CF7* a1)
		{
			return ((::System::Int64(*)(::Class_1_8CA784D26D9A6CF7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADFULLSIZE_OFFSET))(a1);
		}

		static ::System::Int64 GetPreDownloadSize(::Class_1_8CA784D26D9A6CF7* a1)
		{
			return ((::System::Int64(*)(::Class_1_8CA784D26D9A6CF7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADSIZE_OFFSET))(a1);
		}

		static ::System::Boolean _CalcBlockHPatchPreDownloadInfos(::Class_2_7419679A7698613D* a1, ::System::Int64& a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Int64& a5, ::System::Int32& a6)
		{
			return ((::System::Boolean(*)(::Class_2_7419679A7698613D*, ::System::Int64&, ::System::Int32&, ::System::Int32&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHPREDOWNLOADINFOS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean _CalcAudioHPatchDownloadInfos(::Class_2_570C2CCF5D0BF6A1* a1, ::System::Int64& a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Int64& a5, ::System::Int32& a6)
		{
			return ((::System::Boolean(*)(::Class_2_570C2CCF5D0BF6A1*, ::System::Int64&, ::System::Int32&, ::System::Int32&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHDOWNLOADINFOS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean _CalcAudioHPatchPreDownloadInfos(::Class_2_570C2CCF5D0BF6A1* a1, ::System::Int64& a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Int64& a5, ::System::Int32& a6)
		{
			return ((::System::Boolean(*)(::Class_2_570C2CCF5D0BF6A1*, ::System::Int64&, ::System::Int32&, ::System::Int32&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHPREDOWNLOADINFOS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean _CalcAudioHPatchDownloadInfosCore(::Class_2_570C2CCF5D0BF6A1* a1, ::System::Func_2<::Class_0_16E4307DCC419505_87*, ::System::Boolean>* a2, ::System::Int64& a3, ::System::Int32& a4, ::System::Int32& a5, ::System::Int64& a6, ::System::Int32& a7)
		{
			return ((::System::Boolean(*)(::Class_2_570C2CCF5D0BF6A1*, ::System::Func_2<::Class_0_16E4307DCC419505_87*, ::System::Boolean>*, ::System::Int64&, ::System::Int32&, ::System::Int32&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHDOWNLOADINFOSCORE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::String* GetPredownloadAssetServerUpdateUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADASSETSERVERUPDATEURL_OFFSET))();
		}

		static ::System::Boolean IsPredownloadedAllAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_ISPREDOWNLOADEDALLASSETS_OFFSET))();
		}
	};
}
