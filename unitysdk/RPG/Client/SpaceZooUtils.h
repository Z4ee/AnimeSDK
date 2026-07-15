#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SpaceZooUtils_SpaceZooFeatureCombination.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"

class Class_1_4A90D78D94DB1347;
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

#define RPG_CLIENT_SPACEZOOUTILS_APPLYTOMATERIAL_OFFSET UNITYSDK_OFFSET(0x18915530)
#define RPG_CLIENT_SPACEZOOUTILS_GET_DEFAULTDECALMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x189153D0)
#define RPG_CLIENT_SPACEZOOUTILS_HAVEALLPOTENTIALCAT_OFFSET UNITYSDK_OFFSET(0x189143B0)
#define RPG_CLIENT_SPACEZOOUTILS_ISMATCHTARGET_OFFSET UNITYSDK_OFFSET(0x18915110)
#define RPG_CLIENT_SPACEZOOUTILS_ISMATCH_OFFSET UNITYSDK_OFFSET(0x18916B50)
#define RPG_CLIENT_SPACEZOOUTILS_ISSPECIALCATUNLOCK_OFFSET UNITYSDK_OFFSET(0x1890D7A0)
#define RPG_CLIENT_SPACEZOOUTILS_ISSUBMISSIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x189123F0)
#define RPG_CLIENT_SPACEZOOUTILS_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x18912540)
#define RPG_CLIENT_SPACEZOOUTILS_LOADCUSTOMMATERIAL_OFFSET UNITYSDK_OFFSET(0x18913370)
#define RPG_CLIENT_SPACEZOOUTILS_LOADSPECIALMATERIAL_OFFSET UNITYSDK_OFFSET(0x189132D0)
#define RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOOBAGPAGE_OFFSET UNITYSDK_OFFSET(0x18913F50)
#define RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOOCATTERYPAGE_OFFSET UNITYSDK_OFFSET(0x18913C80)
#define RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOODELETEPAGE_OFFSET UNITYSDK_OFFSET(0x18913DF0)
#define RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOOMAINPAGE_OFFSET UNITYSDK_OFFSET(0x18913920)
#define RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x18915E30)
#define RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_2_OFFSET UNITYSDK_OFFSET(0x18915830)
#define RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_3_OFFSET UNITYSDK_OFFSET(0x18916430)
#define RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_4_OFFSET UNITYSDK_OFFSET(0x18916130)
#define RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_5_OFFSET UNITYSDK_OFFSET(0x18916730)
#define RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_OFFSET UNITYSDK_OFFSET(0x18915B30)
#define RPG_CLIENT_SPACEZOOUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18917BC0)
#define RPG_CLIENT_SPACEZOOUTILS__HAVETEMPLATECATS_OFFSET UNITYSDK_OFFSET(0x189140B0)
#define RPG_CLIENT_SPACEZOOUTILS__ISSAMEFEATUREOFCHANNEL_OFFSET UNITYSDK_OFFSET(0x18917A40)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooUtils_TypeDefinitionIndex = 64963;

	class SpaceZooUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_Body2CustomColorIndex()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0x354D0);
		}
		static ::System::String** StaticGet__DefaultDecalMaterialPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0x354D8);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::SpaceZooUtils_SpaceZooFeatureCombination>** StaticGet__CombinationCache()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::SpaceZooUtils_SpaceZooFeatureCombination>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0x354E0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_Body1CustomColorIndex()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0x354E8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DecalCustomColorIndex()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0x354F0);
		}
		static ::System::Int32* StaticGet__PropertyIDHideNPCParts()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0x8CA0);
		}
		static ::System::Int32* StaticGet__PropertyIDShowPartID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooUtils_TypeDefinitionIndex)->GetStaticField(0x8CA4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void ShowSpaceZooMainPage(::System::Action_1<::RPG::Client::LuaUIController*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOOMAINPAGE_OFFSET))(a1);
		}

		static ::System::Void ShowSpaceZooCatteryPage(::System::Int32 a1, ::System::Action_1<::RPG::Client::LuaUIController*>* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOOCATTERYPAGE_OFFSET))(a1, a2);
		}

		static ::System::Void ShowSpaceZooDeletePage(::System::Action_1<::RPG::Client::LuaUIController*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOODELETEPAGE_OFFSET))(a1);
		}

		static ::System::Void ShowSpaceZooBagPage(::System::Action_1<::RPG::Client::LuaUIController*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_SHOWSPACEZOOBAGPAGE_OFFSET))(a1);
		}

		static ::System::Boolean IsUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_ISUNLOCK_OFFSET))(a1);
		}

		static ::System::Boolean IsSubMissionUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_ISSUBMISSIONUNLOCK_OFFSET))(a1);
		}

		static ::System::Boolean IsSpecialCatUnlock(::RPG::GameCore::SpaceZooSpecialCatRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SpaceZooSpecialCatRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_ISSPECIALCATUNLOCK_OFFSET))(a1);
		}

		static ::System::Boolean _HaveTemplateCats(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__HAVETEMPLATECATS_OFFSET))(a1);
		}

		static ::System::Boolean HaveAllPotentialCat(::RPG::Client::SpaceZooCatData* a1, ::RPG::Client::SpaceZooCatData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::SpaceZooCatData*, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_HAVEALLPOTENTIALCAT_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMatchTarget(::RPG::Client::SpaceZooCatData* a1, ::RPG::Client::SpaceZooCatData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::SpaceZooCatData*, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_ISMATCHTARGET_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Material* LoadCustomMaterial(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpaceZooChannelType, ::System::UInt32>* a1, ::Class_1_4A90D78D94DB1347* a2)
		{
			return ((::UnityEngine::Material*(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpaceZooChannelType, ::System::UInt32>*, ::Class_1_4A90D78D94DB1347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_LOADCUSTOMMATERIAL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Material* LoadSpecialMaterial(::RPG::GameCore::SpaceZooSpecialCatRow* a1, ::Class_1_4A90D78D94DB1347* a2)
		{
			return ((::UnityEngine::Material*(*)(::RPG::GameCore::SpaceZooSpecialCatRow*, ::Class_1_4A90D78D94DB1347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_LOADSPECIALMATERIAL_OFFSET))(a1, a2);
		}

		static ::System::Void ApplyToMaterial(::RPG::GameCore::RuanMadeCakeFeatureConfig* a1, ::Class_1_4A90D78D94DB1347* a2, ::UnityEngine::Material*& a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeatureConfig*, ::Class_1_4A90D78D94DB1347*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_APPLYTOMATERIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::String* get_DefaultDecalMaterialPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_GET_DEFAULTDECALMATERIALPATH_OFFSET))();
		}

		static ::System::Boolean IsMatch(::RPG::GameCore::SpaceZooInteractionRow* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SpaceZooInteractionRow*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS_ISMATCH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _ApplyToMaterial(::RPG::GameCore::RuanMadeCakeFeature_BodyColor* a1, ::Class_1_4A90D78D94DB1347* a2, ::UnityEngine::Material*& a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeature_BodyColor*, ::Class_1_4A90D78D94DB1347*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _ApplyToMaterial_1(::RPG::GameCore::RuanMadeCakeFeature_HatColor* a1, ::Class_1_4A90D78D94DB1347* a2, ::UnityEngine::Material*& a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeature_HatColor*, ::Class_1_4A90D78D94DB1347*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _ApplyToMaterial_2(::RPG::GameCore::RuanMadeCakeFeature_BodyDecal* a1, ::Class_1_4A90D78D94DB1347* a2, ::UnityEngine::Material*& a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeature_BodyDecal*, ::Class_1_4A90D78D94DB1347*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _ApplyToMaterial_3(::RPG::GameCore::RuanMadeCakeFeature_HatDecal* a1, ::Class_1_4A90D78D94DB1347* a2, ::UnityEngine::Material*& a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeature_HatDecal*, ::Class_1_4A90D78D94DB1347*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _ApplyToMaterial_4(::RPG::GameCore::RuanMadeCakeFeature_TailDecal* a1, ::Class_1_4A90D78D94DB1347* a2, ::UnityEngine::Material*& a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeature_TailDecal*, ::Class_1_4A90D78D94DB1347*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _ApplyToMaterial_5(::RPG::GameCore::RuanMadeCakeFeature_EyeDecal* a1, ::Class_1_4A90D78D94DB1347* a2, ::UnityEngine::Material*& a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::RuanMadeCakeFeature_EyeDecal*, ::Class_1_4A90D78D94DB1347*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__APPLYTOMATERIAL_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean _IsSameFeatureOfChannel(::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>*& a1, ::RPG::GameCore::SpaceZooChannelType a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>*&, ::RPG::GameCore::SpaceZooChannelType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS__ISSAMEFEATUREOFCHANNEL_OFFSET))(a1, a2);
		}
	};
}
