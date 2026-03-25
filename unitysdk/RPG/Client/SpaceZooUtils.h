#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SpaceZooUtils_SpaceZooFeatureCombination.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"

class Class_1_E05E7A6D9DE9138B;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class SpaceZooCatData; }
namespace RPG::GameCore { class RuanMadeCakeFeatureConfig; }
namespace RPG::GameCore { class RuanMadeCakeFeature_BodyColor; }
namespace RPG::GameCore { class RuanMadeCakeFeature_BodyDecal; }
namespace RPG::GameCore { class RuanMadeCakeFeature_EyeDecal; }
namespace RPG::GameCore { class RuanMadeCakeFeature_HatColor; }
namespace RPG::GameCore { class RuanMadeCakeFeature_HatDecal; }
namespace RPG::GameCore { class RuanMadeCakeFeature_TailDecal; }
namespace RPG::GameCore { class SpaceZooInteractionRow; }
namespace RPG::GameCore { class SpaceZooSpecialCatRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_SPACEZOOUTILS_APPLYTOMATERIAL_OFFSET UNITYSDK_OFFSET(0xA4B03C0)
#define RPG_CLIENT_SPACEZOOUTILS_GET_DEFAULTDECALMATERIALPATH_OFFSET UNITYSDK_OFFSET(0xA4B0260)
#define RPG_CLIENT_SPACEZOOUTILS_HAVEALLPOTENTIALCAT_OFFSET UNITYSDK_OFFSET(0xA4AFB30)
#define RPG_CLIENT_SPACEZOOUTILS_ISMATCHTARGET_OFFSET UNITYSDK_OFFSET(0xA4AFF60)
#define RPG_CLIENT_SPACEZOOUTILS_ISMATCH_OFFSET UNITYSDK_OFFSET(0xA4B1A30)
#define RPG_CLIENT_SPACEZOOUTILS_ISSPECIALCATUNLOCK_OFFSET UNITYSDK_OFFSET(0xA4A7AD0)
#define RPG_CLIENT_SPACEZOOUTILS_ISSUBMISSIONUNLOCK_OFFSET UNITYSDK_OFFSET(0xA4ADD20)
#define RPG_CLIENT_SPACEZOOUTILS_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xA4ADE30)
#define RPG_CLIENT_SPACEZOOUTILS_LOADCUSTOMMATERIAL_OFFSET UNITYSDK_OFFSET(0xA4AEDD0)
#define RPG_CLIENT_SPACEZOOUTILS_LOADSPECIALMATERIAL_OFFSET UNITYSDK_OFFSET(0xA4AED30)
#define RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOOBAGPAGE_OFFSET UNITYSDK_OFFSET(0xA4AF780)
#define RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOOCATTERYPAGE_OFFSET UNITYSDK_OFFSET(0xA4AF4E0)
#define RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOODELETEPAGE_OFFSET UNITYSDK_OFFSET(0xA4AF630)
#define RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOOMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA4AF2B0)
#define RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_1_OFFSET UNITYSDK_OFFSET(0xA4B0CC0)
#define RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_2_OFFSET UNITYSDK_OFFSET(0xA4B06A0)
#define RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_3_OFFSET UNITYSDK_OFFSET(0xA4B12E0)
#define RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_4_OFFSET UNITYSDK_OFFSET(0xA4B0FD0)
#define RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_5_OFFSET UNITYSDK_OFFSET(0xA4B15F0)
#define RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_OFFSET UNITYSDK_OFFSET(0xA4B09B0)
#define RPG_CLIENT_SPACEZOOUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4B29C0)
#define RPG_CLIENT_SPACEZOOUTILS__HAVETEMPLATECATS_OFFSET UNITYSDK_OFFSET(0xA4AF8D0)
#define RPG_CLIENT_SPACEZOOUTILS__ISSAMEFEATUREOFCHANNEL_OFFSET UNITYSDK_OFFSET(0xA4B2810)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooUtils_TypeDefinitionIndex = 55470;

	class SpaceZooUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::SpaceZooUtils_SpaceZooFeatureCombination>** StaticGet__CombinationCache()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::SpaceZooUtils_SpaceZooFeatureCombination>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0x256A0);
		}
		static ::System::String** StaticGet__DefaultDecalMaterialPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0x256A8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DecalCustomColorIndex()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0x256B0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_Body1CustomColorIndex()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0x256B8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_Body2CustomColorIndex()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0x256C0);
		}
		static ::System::Int32* StaticGet__PropertyIDHideNPCParts()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0xC130);
		}
		static ::System::Int32* StaticGet__PropertyIDShowPartID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0xC134);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void ShowSpaceZooMainPage(::System::Action_1<::RPG::Client::LuaUIController*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOOMAINPAGE_OFFSET))(callback);
		}

		static ::System::Void ShowSpaceZooCatteryPage(::System::Int32 index, ::System::Action_1<::RPG::Client::LuaUIController*>* callback)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOOCATTERYPAGE_OFFSET))(index, callback);
		}

		static ::System::Void ShowSpaceZooDeletePage(::System::Action_1<::RPG::Client::LuaUIController*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOODELETEPAGE_OFFSET))(callback);
		}

		static ::System::Void ShowSpaceZooBagPage(::System::Action_1<::RPG::Client::LuaUIController*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOOBAGPAGE_OFFSET))(callback);
		}

		static ::System::Boolean IsUnlock(::System::UInt32 unlockMissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_ISUNLOCK_OFFSET))(unlockMissionID);
		}

		static ::System::Boolean IsSubMissionUnlock(::System::UInt32 unlocksubMissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_ISSUBMISSIONUNLOCK_OFFSET))(unlocksubMissionID);
		}

		static ::System::Boolean IsSpecialCatUnlock(::RPG::GameCore::SpaceZooSpecialCatRow* specialCatRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SpaceZooSpecialCatRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_ISSPECIALCATUNLOCK_OFFSET))(specialCatRow);
		}

		static ::System::Boolean _HaveTemplateCats(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* cats)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__HAVETEMPLATECATS_OFFSET))(cats);
		}

		static ::System::Boolean HaveAllPotentialCat(::RPG::Client::SpaceZooCatData* leftParentCat, ::RPG::Client::SpaceZooCatData* rightParentCat)
		{
			return ((::System::Boolean(*)(::RPG::Client::SpaceZooCatData*, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_HAVEALLPOTENTIALCAT_OFFSET))(leftParentCat, rightParentCat);
		}

		static ::System::Boolean IsMatchTarget(::RPG::Client::SpaceZooCatData* leftParentCat, ::RPG::Client::SpaceZooCatData* rightParentCat)
		{
			return ((::System::Boolean(*)(::RPG::Client::SpaceZooCatData*, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_ISMATCHTARGET_OFFSET))(leftParentCat, rightParentCat);
		}

		static ::UnityEngine::Material* LoadCustomMaterial(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpaceZooChannelType, ::System::UInt32>* pFeatureMap, ::Class_1_E05E7A6D9DE9138B* pAssetLoader)
		{
			return ((::UnityEngine::Material*(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpaceZooChannelType, ::System::UInt32>*, ::Class_1_E05E7A6D9DE9138B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_LOADCUSTOMMATERIAL_OFFSET))(pFeatureMap, pAssetLoader);
		}

		static ::UnityEngine::Material* LoadSpecialMaterial(::RPG::GameCore::SpaceZooSpecialCatRow* pConfig, ::Class_1_E05E7A6D9DE9138B* pAssetLoader)
		{
			return ((::UnityEngine::Material*(*)(::RPG::GameCore::SpaceZooSpecialCatRow*, ::Class_1_E05E7A6D9DE9138B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_LOADSPECIALMATERIAL_OFFSET))(pConfig, pAssetLoader);
		}

		static ::System::Void ApplyToMaterial(::RPG::GameCore::RuanMadeCakeFeatureConfig* pConfig, ::Class_1_E05E7A6D9DE9138B* pAssetLoader, ::UnityEngine::Material*& pMat)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeatureConfig*, ::Class_1_E05E7A6D9DE9138B*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_APPLYTOMATERIAL_OFFSET))(pConfig, pAssetLoader, pMat);
		}

		static ::System::String* get_DefaultDecalMaterialPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_GET_DEFAULTDECALMATERIALPATH_OFFSET))();
		}

		static ::System::Boolean IsMatch(::RPG::GameCore::SpaceZooInteractionRow* pRow, ::System::UInt32 nRoomID, ::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* pCats)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SpaceZooInteractionRow*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_ISMATCH_OFFSET))(pRow, nRoomID, pCats);
		}

		static ::System::Void _ApplyToMaterial(::RPG::GameCore::RuanMadeCakeFeature_BodyColor* pConfig, ::Class_1_E05E7A6D9DE9138B* pAssetLoader, ::UnityEngine::Material*& pMat)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeature_BodyColor*, ::Class_1_E05E7A6D9DE9138B*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_OFFSET))(pConfig, pAssetLoader, pMat);
		}

		static ::System::Void _ApplyToMaterial_1(::RPG::GameCore::RuanMadeCakeFeature_HatColor* pConfig, ::Class_1_E05E7A6D9DE9138B* pAssetLoader, ::UnityEngine::Material*& pMat)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeature_HatColor*, ::Class_1_E05E7A6D9DE9138B*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_1_OFFSET))(pConfig, pAssetLoader, pMat);
		}

		static ::System::Void _ApplyToMaterial_2(::RPG::GameCore::RuanMadeCakeFeature_BodyDecal* pConfig, ::Class_1_E05E7A6D9DE9138B* pAssetLoader, ::UnityEngine::Material*& pMat)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeature_BodyDecal*, ::Class_1_E05E7A6D9DE9138B*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_2_OFFSET))(pConfig, pAssetLoader, pMat);
		}

		static ::System::Void _ApplyToMaterial_3(::RPG::GameCore::RuanMadeCakeFeature_HatDecal* pConfig, ::Class_1_E05E7A6D9DE9138B* pAssetLoader, ::UnityEngine::Material*& pMat)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeature_HatDecal*, ::Class_1_E05E7A6D9DE9138B*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_3_OFFSET))(pConfig, pAssetLoader, pMat);
		}

		static ::System::Void _ApplyToMaterial_4(::RPG::GameCore::RuanMadeCakeFeature_TailDecal* pConfig, ::Class_1_E05E7A6D9DE9138B* pAssetLoader, ::UnityEngine::Material*& pMat)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeature_TailDecal*, ::Class_1_E05E7A6D9DE9138B*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_4_OFFSET))(pConfig, pAssetLoader, pMat);
		}

		static ::System::Void _ApplyToMaterial_5(::RPG::GameCore::RuanMadeCakeFeature_EyeDecal* pConfig, ::Class_1_E05E7A6D9DE9138B* pAssetLoader, ::UnityEngine::Material*& pMat)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeature_EyeDecal*, ::Class_1_E05E7A6D9DE9138B*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_5_OFFSET))(pConfig, pAssetLoader, pMat);
		}

		static ::System::Boolean _IsSameFeatureOfChannel(::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>*& pCats, ::RPG::GameCore::SpaceZooChannelType eChannel)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>*&, ::RPG::GameCore::SpaceZooChannelType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__ISSAMEFEATUREOFCHANNEL_OFFSET))(pCats, eChannel);
		}
	};
}
