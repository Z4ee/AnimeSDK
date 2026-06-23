#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Donjon/DonjonFloorObjectHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_F8A4F21F742B6836;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_CREATEDEFAULTFLOOROBJECT_OFFSET UNITYSDK_OFFSET(0x12E6B700)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_CREATEFLOOROBJECT_OFFSET UNITYSDK_OFFSET(0x12E6B280)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_CREATE_OFFSET UNITYSDK_OFFSET(0x12E6AB40)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x12E6AE00)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12E6AE60)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_GETDONJONFLOOROBJECT_OFFSET UNITYSDK_OFFSET(0x12E6B120)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_GET_INS_OFFSET UNITYSDK_OFFSET(0x12E6AB30)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x12E6AD30)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONPOSTLEVELREADY_OFFSET UNITYSDK_OFFSET(0x12E6BED0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONPOSTPREPAREENTERSCENE_OFFSET UNITYSDK_OFFSET(0x12E6BC80)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONPREPAREENTERSCENE_OFFSET UNITYSDK_OFFSET(0x12E6BA30)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_RECREATE_OFFSET UNITYSDK_OFFSET(0x12E6AD70)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12E6B0C0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E6ACA0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorManager_TypeDefinitionIndex = 74372;

	class DonjonFloorManager : public ::System::Object
	{
	public:
		static ::Foundation::ViewObject::Donjon::DonjonFloorManager** StaticGet__instance()
		{
			return (::Foundation::ViewObject::Donjon::DonjonFloorManager**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager_TypeDefinitionIndex)->GetStaticField(0x354C0);
		}
		// static const ::System::Int32 DefaultDonjonID = 0x7FFFFFFF; // 0x0
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

		::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle CreateDefaultFloorObject(::System::Int32 floorID, ::Class_1_F8A4F21F742B6836* configFloor)
		{
			return ((::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle(*)(::PVOID, ::System::Int32, ::Class_1_F8A4F21F742B6836*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_CREATEDEFAULTFLOOROBJECT_OFFSET))(this, floorID, configFloor);
		}

		::System::Void OnPrepareEnterScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONPREPAREENTERSCENE_OFFSET))(this);
		}

		::System::Void OnPostPrepareEnterScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONPOSTPREPAREENTERSCENE_OFFSET))(this);
		}

		::System::Void OnPostLevelReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONPOSTLEVELREADY_OFFSET))(this);
		}
	};
}
