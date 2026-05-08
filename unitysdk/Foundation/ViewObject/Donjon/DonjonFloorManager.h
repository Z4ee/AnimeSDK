#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Donjon/DonjonFloorObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_CREATEFLOOROBJECT_OFFSET UNITYSDK_OFFSET(0x1058FCE0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_CREATE_OFFSET UNITYSDK_OFFSET(0x1058F5A0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1058F860)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1058F8C0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_GETDONJONFLOOROBJECT_OFFSET UNITYSDK_OFFSET(0x1058FB80)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_GET_INS_OFFSET UNITYSDK_OFFSET(0x1058F590)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1058F790)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONPOSTLEVELREADY_OFFSET UNITYSDK_OFFSET(0x105902C0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONPREPAREENTERSCENE_OFFSET UNITYSDK_OFFSET(0x105900C0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_RECREATE_OFFSET UNITYSDK_OFFSET(0x1058F7D0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1058FB20)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1058F700)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorManager_TypeDefinitionIndex = 60746;

	class DonjonFloorManager : public ::System::Object
	{
	public:
		static ::Foundation::ViewObject::Donjon::DonjonFloorManager** StaticGet__instance()
		{
			return (::Foundation::ViewObject::Donjon::DonjonFloorManager**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager_TypeDefinitionIndex)->GetStaticField(0x30370);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::ViewObject::Donjon::DonjonFloorObject*>* _floorObjects; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER__CTOR_OFFSET))(this);
		}

		static ::Foundation::ViewObject::Donjon::DonjonFloorManager* get_Ins()
		{
			return ((::Foundation::ViewObject::Donjon::DonjonFloorManager*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_GET_INS_OFFSET))();
		}

		static ::System::Void Create()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_CREATE_OFFSET))();
		}

		static ::System::Void ReCreate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_RECREATE_OFFSET))();
		}

		static ::System::Void DestroyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_DESTROYINSTANCE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONCREATE_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle GetDonjonFloorObject(::System::Int32 floorID)
		{
			return ((::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_GETDONJONFLOOROBJECT_OFFSET))(this, floorID);
		}

		::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle CreateFloorObject(::System::Int32 dungeonID, ::System::Int32 floorID, ::System::String* name)
		{
			return ((::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_CREATEFLOOROBJECT_OFFSET))(this, dungeonID, floorID, name);
		}

		::System::Void OnPrepareEnterScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONPREPAREENTERSCENE_OFFSET))(this);
		}

		::System::Void OnPostLevelReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONPOSTLEVELREADY_OFFSET))(this);
		}
	};
}
