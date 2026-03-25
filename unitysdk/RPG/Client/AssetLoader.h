#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A81EE615F7FF4710;
class Class_1_AB3731E66128D034;
class Class_1_D0948460F4810867;
namespace RPG::Client { class OnSceneOperationDelegate; }
namespace System { class String; }

#define RPG_CLIENT_ASSETLOADER_CANCELAYSCLOADSCENE_OFFSET UNITYSDK_OFFSET(0x90DBA80)
#define RPG_CLIENT_ASSETLOADER_CHECKASSETIFINSTARTSUBPAK_OFFSET UNITYSDK_OFFSET(0x90DBB60)
#define RPG_CLIENT_ASSETLOADER_CHECKDESIGNDATAIFINSTARTSUBPAK_OFFSET UNITYSDK_OFFSET(0x90DAD40)
#define RPG_CLIENT_ASSETLOADER_CHECKIFASSETNULLPATH_OFFSET UNITYSDK_OFFSET(0x90DBBA0)
#define RPG_CLIENT_ASSETLOADER_CHECKMULTIINSTANCE_OFFSET UNITYSDK_OFFSET(0x90DB0B0)
#define RPG_CLIENT_ASSETLOADER_EXISTLUA_OFFSET UNITYSDK_OFFSET(0x90DB560)
#define RPG_CLIENT_ASSETLOADER_EXISTSDESIGNDATA_OFFSET UNITYSDK_OFFSET(0x90DB4C0)
#define RPG_CLIENT_ASSETLOADER_EXISTS_OFFSET UNITYSDK_OFFSET(0x90DB3F0)
#define RPG_CLIENT_ASSETLOADER_GETASSETLOADINGINFO_OFFSET UNITYSDK_OFFSET(0x90DBD90)
#define RPG_CLIENT_ASSETLOADER_GETASSETOBJECTLOADSTATISTICALSUMMARYV1_OFFSET UNITYSDK_OFFSET(0x90DBCA0)
#define RPG_CLIENT_ASSETLOADER_GET_S_CONFIGFILEROOT_OFFSET UNITYSDK_OFFSET(0x90DB720)
#define RPG_CLIENT_ASSETLOADER_LOADBINARYFROMFILE_OFFSET UNITYSDK_OFFSET(0x90DAD80)
#define RPG_CLIENT_ASSETLOADER_LOADLUABINARYFROMFILE_OFFSET UNITYSDK_OFFSET(0x90DAC00)
#define RPG_CLIENT_ASSETLOADER_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x90DB830)
#define RPG_CLIENT_ASSETLOADER_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x90DB7A0)
#define RPG_CLIENT_ASSETLOADER_LOADTEXTFROMFILE_OFFSET UNITYSDK_OFFSET(0x90DAE90)
#define RPG_CLIENT_ASSETLOADER_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x90DB910)

namespace RPG::Client
{
	inline static constexpr unsigned int AssetLoader_TypeDefinitionIndex = 48078;

	class AssetLoader : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_USE_ASYNC_INSTANTIATE()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetLoader_TypeDefinitionIndex)->GetStaticField(0x12F90);
		}

		static ::Il2CppArray<::System::Byte>* LoadLuaBinaryFromFile(::System::String* sPath)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_LOADLUABINARYFROMFILE_OFFSET))(sPath);
		}

		static ::Il2CppArray<::System::Byte>* LoadBinaryFromFile(::System::String* sPath, ::System::Int64 offset, ::System::Int64 len)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_LOADBINARYFROMFILE_OFFSET))(sPath, offset, len);
		}

		static ::System::String* LoadTextFromFile(::System::String* Path, ::System::Int64 offset, ::System::Int64 len)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_LOADTEXTFROMFILE_OFFSET))(Path, offset, len);
		}

		static ::System::Void CheckMultiInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_CHECKMULTIINSTANCE_OFFSET))();
		}

		static ::System::Boolean Exists(::System::String* assetShortName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_EXISTS_OFFSET))(assetShortName);
		}

		static ::System::Boolean ExistsDesignData(::System::String* assetShortName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_EXISTSDESIGNDATA_OFFSET))(assetShortName);
		}

		static ::System::Boolean ExistLua(::System::String* assetShortName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_EXISTLUA_OFFSET))(assetShortName);
		}

		static ::System::String* get_s_ConfigFileRoot()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_GET_S_CONFIGFILEROOT_OFFSET))();
		}

		static ::Class_1_D0948460F4810867* LoadScene(::System::String* sceneName, ::System::Boolean isForceLoad)
		{
			return ((::Class_1_D0948460F4810867*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_LOADSCENE_OFFSET))(sceneName, isForceLoad);
		}

		static ::Class_1_D0948460F4810867* LoadSceneAsync(::System::String* sceneName, ::RPG::Client::OnSceneOperationDelegate* loadStartHandle, ::RPG::Client::OnSceneOperationDelegate* loadCompleteHandle, ::System::Boolean isForceLoad, ::System::Boolean isAdditive, ::System::Single percent)
		{
			return ((::Class_1_D0948460F4810867*(*)(::System::String*, ::RPG::Client::OnSceneOperationDelegate*, ::RPG::Client::OnSceneOperationDelegate*, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_LOADSCENEASYNC_OFFSET))(sceneName, loadStartHandle, loadCompleteHandle, isForceLoad, isAdditive, percent);
		}

		static ::System::Void UnLoadScene(::System::String* sceneName, ::System::Boolean isAdditiveScene)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_UNLOADSCENE_OFFSET))(sceneName, isAdditiveScene);
		}

		static ::System::Void CancelAyscLoadScene(::Class_1_D0948460F4810867* sceneLoadRequest, ::System::Boolean isAdditiveScene)
		{
			return ((::System::Void(*)(::Class_1_D0948460F4810867*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_CANCELAYSCLOADSCENE_OFFSET))(sceneLoadRequest, isAdditiveScene);
		}

		static ::System::Void CheckAssetIfInStartSubPak(::System::String* assetShortName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_CHECKASSETIFINSTARTSUBPAK_OFFSET))(assetShortName);
		}

		static ::System::Void CheckDesignDataIfInStartSubPak(::System::String* assetShortName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_CHECKDESIGNDATAIFINSTARTSUBPAK_OFFSET))(assetShortName);
		}

		static ::System::Void CheckIfAssetNullPath(::System::String* assetShortName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_CHECKIFASSETNULLPATH_OFFSET))(assetShortName);
		}

		static ::Class_1_A81EE615F7FF4710* GetAssetObjectLoadStatisticalSummaryV1()
		{
			return ((::Class_1_A81EE615F7FF4710*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_GETASSETOBJECTLOADSTATISTICALSUMMARYV1_OFFSET))();
		}

		static ::Class_1_AB3731E66128D034* GetAssetLoadingInfo(::System::String* assetShortName)
		{
			return ((::Class_1_AB3731E66128D034*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_GETASSETLOADINGINFO_OFFSET))(assetShortName);
		}
	};
}
