#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA_CHECKNEEDMATERIALWITHCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1A0410B0)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A040D70)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A040F50)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA_GETGROWTHTARGETMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x1A0412A0)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x1A040E40)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A040E10)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__ENSURECOMPOSEMATERIALMAP_OFFSET UNITYSDK_OFFSET(0x1A041480)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__ENSUREDATA_OFFSET UNITYSDK_OFFSET(0x1A041120)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__GETHASVALIDCACHE_OFFSET UNITYSDK_OFFSET(0x1A041400)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__REMOVENOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x1A040FA0)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__RESETNEEDMATERIALLIST_OFFSET UNITYSDK_OFFSET(0x1A041350)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__TRYADDNEEDMATERIALWITHCOMPOSESET_OFFSET UNITYSDK_OFFSET(0x1A042060)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__UPDATENEEDMATERIALLIST_OFFSET UNITYSDK_OFFSET(0x1A041E30)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__UPDATENEEDMATERIALWITHCOMPOSESET_OFFSET UNITYSDK_OFFSET(0x1A041EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthTargetNeedMaterialData_TypeDefinitionIndex = 65666;

	class GrowthTargetNeedMaterialData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _NeedMaterialList; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _NeedMaterialWithComposeSet; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _ComposeMaterialMap; // 0x20
		::System::UInt32 _LastAvatarID; // 0x28
		::System::Nullable_1<::System::Boolean> _LastIncludeLowPrioritySkillTree; // 0x2C
		::System::Boolean _IgnoreExistingItem; // 0x2E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GrowthTargetNeedMaterialData* Create(::System::Boolean a1)
		{
			return ((::RPG::Client::GrowthTargetNeedMaterialData*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean CheckNeedMaterialWithCompose(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA_CHECKNEEDMATERIALWITHCOMPOSE_OFFSET))(this, a1);
		}

		::System::String* GetGrowthTargetMiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA_GETGROWTHTARGETMINIICONPATH_OFFSET))(this);
		}

		::System::Void _AddNotifyHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__ADDNOTIFYHANDLER_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__REMOVENOTIFYHANDLER_OFFSET))(this);
		}

		::System::Void _EnsureData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__ENSUREDATA_OFFSET))(this);
		}

		::System::Boolean _GetHasValidCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__GETHASVALIDCACHE_OFFSET))(this);
		}

		::System::Void _EnsureComposeMaterialMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__ENSURECOMPOSEMATERIALMAP_OFFSET))(this);
		}

		::System::Void _UpdateNeedMaterialList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__UPDATENEEDMATERIALLIST_OFFSET))(this);
		}

		::System::Void _UpdateNeedMaterialWithComposeSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__UPDATENEEDMATERIALWITHCOMPOSESET_OFFSET))(this);
		}

		::System::Void _TryAddNeedMaterialWithComposeSet(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__TRYADDNEEDMATERIALWITHCOMPOSESET_OFFSET))(this, a1);
		}

		::System::Void _ResetNeedMaterialList(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA__RESETNEEDMATERIALLIST_OFFSET))(this, a1);
		}
	};
}
