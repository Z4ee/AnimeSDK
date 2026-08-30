#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_004034A1FAAF468A;
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class AnchorInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFPREPAREMODELMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE50A00)
#define RPG_CLIENT_ELFPREPAREMODELMANAGER_GET__MONOEFFECTMANAGERREF_OFFSET UNITYSDK_OFFSET(0xCE57680)
#define RPG_CLIENT_ELFPREPAREMODELMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xCE56C90)
#define RPG_CLIENT_ELFPREPAREMODELMANAGER_REFRESHRECIPEMODELS_OFFSET UNITYSDK_OFFSET(0xCE56E50)
#define RPG_CLIENT_ELFPREPAREMODELMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCE522D0)
#define RPG_CLIENT_ELFPREPAREMODELMANAGER__GETRECIPEANCHORINFO_OFFSET UNITYSDK_OFFSET(0xCE57530)
#define RPG_CLIENT_ELFPREPAREMODELMANAGER__RELEASEALLMODEL_OFFSET UNITYSDK_OFFSET(0xCE56CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfPrepareModelManager_TypeDefinitionIndex = 63772;

	class ElfPrepareModelManager : public ::System::Object
	{
	public:
		// static const ::System::String* _Prepare_Recipe_Anchor_Base_Name; // 0x0
		// static const ::System::String* _SMOKE_EFFECT_PATH; // 0x0
		::System::Collections::Generic::List_1<::Class_1_004034A1FAAF468A*>* _RecipeModels; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RecipeIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPREPAREMODELMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPREPAREMODELMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPREPAREMODELMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshRecipeModels(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPREPAREMODELMANAGER_REFRESHRECIPEMODELS_OFFSET))(this, a1);
		}

		::System::Void _ReleaseAllModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPREPAREMODELMANAGER__RELEASEALLMODEL_OFFSET))(this);
		}

		::RPG::GameCore::AnchorInfo* _GetRecipeAnchorInfo(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPREPAREMODELMANAGER__GETRECIPEANCHORINFO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MonoEffectManager* get__MonoEffectManagerRef()
		{
			return ((::RPG::Client::MonoEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPREPAREMODELMANAGER_GET__MONOEFFECTMANAGERREF_OFFSET))(this);
		}
	};
}
