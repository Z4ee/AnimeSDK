#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_69;
class Class_1_8C3AC9786B6764EF;
class Class_1_F0F5FC8CD22F7E83;
class Class_2_4F354829EBADAFFE;
class Class_2_7419679A7698613D;
namespace RPG::GameCore { class PckPatchConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_VERSIONUPDATEMGR_CLEARDOWNLOADEDALLASSETSFLAG_OFFSET UNITYSDK_OFFSET(0xB46FA10)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETASSETSERVERUPDATEURL_OFFSET UNITYSDK_OFFSET(0xB46FB10)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETDOWNLOADALLSIZEWITHBLACKLIST_OFFSET UNITYSDK_OFFSET(0xB46FD70)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETDOWNLOADALLSIZE_OFFSET UNITYSDK_OFFSET(0xB46FC10)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADALLSIZE_OFFSET UNITYSDK_OFFSET(0xB472D30)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADASSETSERVERUPDATEURL_OFFSET UNITYSDK_OFFSET(0xB474EE0)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADFULLSIZE_OFFSET UNITYSDK_OFFSET(0xB472E90)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0xB473D90)
#define RPG_CLIENT_VERSIONUPDATEMGR_HAVEPREDOWNLOADASSETS_OFFSET UNITYSDK_OFFSET(0xB471270)
#define RPG_CLIENT_VERSIONUPDATEMGR_HAVEPREDOWNLOADVERSION_OFFSET UNITYSDK_OFFSET(0xB471670)
#define RPG_CLIENT_VERSIONUPDATEMGR_ISDOWNLOADEDALLASSETS_OFFSET UNITYSDK_OFFSET(0xB46F720)
#define RPG_CLIENT_VERSIONUPDATEMGR_ISPREDOWNLOADEDALLASSETS_OFFSET UNITYSDK_OFFSET(0xB474F70)
#define RPG_CLIENT_VERSIONUPDATEMGR_LOADMINIVERSION_OFFSET UNITYSDK_OFFSET(0xB471720)
#define RPG_CLIENT_VERSIONUPDATEMGR_LOADPREDOWNLOADVERSION_OFFSET UNITYSDK_OFFSET(0xB472100)
#define RPG_CLIENT_VERSIONUPDATEMGR_MAKEDOWNLOADEDALLASSETSFLAG_OFFSET UNITYSDK_OFFSET(0xB46F890)
#define RPG_CLIENT_VERSIONUPDATEMGR_REMOVEPCKPATCHFILE_OFFSET UNITYSDK_OFFSET(0xB471860)
#define RPG_CLIENT_VERSIONUPDATEMGR_REMOVEPCKPATCHS_OFFSET UNITYSDK_OFFSET(0xB471A00)
#define RPG_CLIENT_VERSIONUPDATEMGR_TRYDELETEPREDOWNLOADASSETS_OFFSET UNITYSDK_OFFSET(0xB472310)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHDOWNLOADINFOSCORE_OFFSET UNITYSDK_OFFSET(0xB474330)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHDOWNLOADINFOS_OFFSET UNITYSDK_OFFSET(0xB4703D0)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHPREDOWNLOADINFOS_OFFSET UNITYSDK_OFFSET(0xB474210)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHDOWNLOADINFOSCORE_OFFSET UNITYSDK_OFFSET(0xB470550)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHDOWNLOADINFOS_OFFSET UNITYSDK_OFFSET(0xB470250)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHPREDOWNLOADINFOS_OFFSET UNITYSDK_OFFSET(0xB4740F0)
#define RPG_CLIENT_VERSIONUPDATEMGR__CTOR_OFFSET UNITYSDK_OFFSET(0xB4755C0)
#define RPG_CLIENT_VERSIONUPDATEMGR__GETDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0xB46FEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr_TypeDefinitionIndex = 56506;

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

		static ::System::Void GetDownloadAllSize(::System::Action_1<::System::Int64>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Int64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETDOWNLOADALLSIZE_OFFSET))(callback);
		}

		static ::System::Void GetDownloadAllSizeWithBlackList(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* taskIds, ::System::Action_2<::System::Int64, ::System::Int64>* callback)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Action_2<::System::Int64, ::System::Int64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETDOWNLOADALLSIZEWITHBLACKLIST_OFFSET))(taskIds, callback);
		}

		static ::System::Int64 _GetDownloadSize(::Class_1_8C3AC9786B6764EF* queue)
		{
			return ((::System::Int64(*)(::Class_1_8C3AC9786B6764EF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__GETDOWNLOADSIZE_OFFSET))(queue);
		}

		static ::System::Boolean _CalcBlockHPatchDownloadInfos(::Class_2_7419679A7698613D* blockHPatch, ::System::Int64& sizeHPatch, ::System::Int32& nHPatchBlock, ::System::Int32& nHPatchBin, ::System::Int64& sizeBlock, ::System::Int32& nBlock)
		{
			return ((::System::Boolean(*)(::Class_2_7419679A7698613D*, ::System::Int64&, ::System::Int32&, ::System::Int32&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHDOWNLOADINFOS_OFFSET))(blockHPatch, sizeHPatch, nHPatchBlock, nHPatchBin, sizeBlock, nBlock);
		}

		static ::System::Boolean _CalcBlockHPatchDownloadInfosCore(::Class_2_7419679A7698613D* blockHPatch, ::System::Func_2<::Class_0_16E4307DCC419505_69*, ::System::Boolean>* blockItemFilter, ::System::Int64& sizeHPatch, ::System::Int32& nHPatchBlock, ::System::Int32& nHPatchBin, ::System::Int64& sizeBlock, ::System::Int32& nBlock)
		{
			return ((::System::Boolean(*)(::Class_2_7419679A7698613D*, ::System::Func_2<::Class_0_16E4307DCC419505_69*, ::System::Boolean>*, ::System::Int64&, ::System::Int32&, ::System::Int32&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHDOWNLOADINFOSCORE_OFFSET))(blockHPatch, blockItemFilter, sizeHPatch, nHPatchBlock, nHPatchBin, sizeBlock, nBlock);
		}

		static ::System::Boolean HavePredownloadAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_HAVEPREDOWNLOADASSETS_OFFSET))();
		}

		static ::Class_1_F0F5FC8CD22F7E83* LoadMiniVersion(::System::String* miniInfoRelativeFilePath, ::System::String* predownloadRootPath)
		{
			return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_LOADMINIVERSION_OFFSET))(miniInfoRelativeFilePath, predownloadRootPath);
		}

		static ::System::Boolean HavePredownloadVersion(::System::String* predownloadRootPath, ::System::String* miniInfoRelativeFilePath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_HAVEPREDOWNLOADVERSION_OFFSET))(predownloadRootPath, miniInfoRelativeFilePath);
		}

		static ::System::Void RemovePckPatchFile(::System::String* localRootPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_REMOVEPCKPATCHFILE_OFFSET))(localRootPath);
		}

		static ::System::Void RemovePckPatchs(::RPG::GameCore::PckPatchConfig* pckPatchConfig, ::System::String* localRootPath)
		{
			return ((::System::Void(*)(::RPG::GameCore::PckPatchConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_REMOVEPCKPATCHS_OFFSET))(pckPatchConfig, localRootPath);
		}

		static ::Class_1_F0F5FC8CD22F7E83* LoadPredownloadVersion(::System::String* predownloadRootPath, ::System::String* miniInfoRelativeFilePath)
		{
			return ((::Class_1_F0F5FC8CD22F7E83*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_LOADPREDOWNLOADVERSION_OFFSET))(predownloadRootPath, miniInfoRelativeFilePath);
		}

		static ::System::Void TryDeletePredownloadAssets(::System::Boolean havePredownloadAssets)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_TRYDELETEPREDOWNLOADASSETS_OFFSET))(havePredownloadAssets);
		}

		static ::System::Void GetPredownloadAllSize(::System::Action_2<::System::Int64, ::System::Int64>* callback)
		{
			return ((::System::Void(*)(::System::Action_2<::System::Int64, ::System::Int64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADALLSIZE_OFFSET))(callback);
		}

		static ::System::Int64 GetPreDownloadFullSize(::Class_1_8C3AC9786B6764EF* queue)
		{
			return ((::System::Int64(*)(::Class_1_8C3AC9786B6764EF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADFULLSIZE_OFFSET))(queue);
		}

		static ::System::Int64 GetPreDownloadSize(::Class_1_8C3AC9786B6764EF* queue)
		{
			return ((::System::Int64(*)(::Class_1_8C3AC9786B6764EF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADSIZE_OFFSET))(queue);
		}

		static ::System::Boolean _CalcBlockHPatchPreDownloadInfos(::Class_2_7419679A7698613D* blockHPatch, ::System::Int64& sizeHPatch, ::System::Int32& nHPatchBlock, ::System::Int32& nHPatchBin, ::System::Int64& sizeBlock, ::System::Int32& nBlock)
		{
			return ((::System::Boolean(*)(::Class_2_7419679A7698613D*, ::System::Int64&, ::System::Int32&, ::System::Int32&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHPREDOWNLOADINFOS_OFFSET))(blockHPatch, sizeHPatch, nHPatchBlock, nHPatchBin, sizeBlock, nBlock);
		}

		static ::System::Boolean _CalcAudioHPatchDownloadInfos(::Class_2_4F354829EBADAFFE* audioHPatch, ::System::Int64& sizeHPatch, ::System::Int32& nHPatchBlock, ::System::Int32& nHPatchBin, ::System::Int64& sizeBlock, ::System::Int32& nBlock)
		{
			return ((::System::Boolean(*)(::Class_2_4F354829EBADAFFE*, ::System::Int64&, ::System::Int32&, ::System::Int32&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHDOWNLOADINFOS_OFFSET))(audioHPatch, sizeHPatch, nHPatchBlock, nHPatchBin, sizeBlock, nBlock);
		}

		static ::System::Boolean _CalcAudioHPatchPreDownloadInfos(::Class_2_4F354829EBADAFFE* audioHPatch, ::System::Int64& sizeHPatch, ::System::Int32& nHPatchBlock, ::System::Int32& nHPatchBin, ::System::Int64& sizeBlock, ::System::Int32& nBlock)
		{
			return ((::System::Boolean(*)(::Class_2_4F354829EBADAFFE*, ::System::Int64&, ::System::Int32&, ::System::Int32&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHPREDOWNLOADINFOS_OFFSET))(audioHPatch, sizeHPatch, nHPatchBlock, nHPatchBin, sizeBlock, nBlock);
		}

		static ::System::Boolean _CalcAudioHPatchDownloadInfosCore(::Class_2_4F354829EBADAFFE* audioHPatch, ::System::Func_2<::Class_0_16E4307DCC419505_69*, ::System::Boolean>* blockItemFilter, ::System::Int64& sizeHPatch, ::System::Int32& nHPatchBlock, ::System::Int32& nHPatchBin, ::System::Int64& sizeBlock, ::System::Int32& nBlock)
		{
			return ((::System::Boolean(*)(::Class_2_4F354829EBADAFFE*, ::System::Func_2<::Class_0_16E4307DCC419505_69*, ::System::Boolean>*, ::System::Int64&, ::System::Int32&, ::System::Int32&, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHDOWNLOADINFOSCORE_OFFSET))(audioHPatch, blockItemFilter, sizeHPatch, nHPatchBlock, nHPatchBin, sizeBlock, nBlock);
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
