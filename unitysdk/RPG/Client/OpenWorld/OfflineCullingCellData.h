#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client::OpenWorld { class OfflineCullingCellSerializeData; }
namespace RPG::Client::OpenWorld { class OfflineCullingCellSubData; }
namespace RPG::GameCore { class OfflineCullingIndex; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLBOUND_OFFSET UNITYSDK_OFFSET(0xD9F3480)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0xD9F3440)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLSUBDATA_OFFSET UNITYSDK_OFFSET(0xD9F3400)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xD9F3520)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_LIGHTVISIBILITYDATA_OFFSET UNITYSDK_OFFSET(0xD9F3560)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_USECOMPRESSION_OFFSET UNITYSDK_OFFSET(0xD9F34E0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_02B8FAA3BE7582C4_OFFSET UNITYSDK_OFFSET(0xD9F3690)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_1FCC3BCBD5E9F995_OFFSET UNITYSDK_OFFSET(0xD9F35A0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0xD9F3740)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_9390D296E70A7430_OFFSET UNITYSDK_OFFSET(0xD9F3890)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_F8F4A6517C8F0D4E_OFFSET UNITYSDK_OFFSET(0xD9F46C0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLBOUND_OFFSET UNITYSDK_OFFSET(0xD9F34B0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0xD9F3460)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLSUBDATA_OFFSET UNITYSDK_OFFSET(0xD9F3420)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xD9F3540)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_LIGHTVISIBILITYDATA_OFFSET UNITYSDK_OFFSET(0xD9F3580)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_USECOMPRESSION_OFFSET UNITYSDK_OFFSET(0xD9F3500)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD9F4880)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD9F4830)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OfflineCullingCellData_TypeDefinitionIndex = 73651;

	class OfflineCullingCellData : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Int32* StaticGet_PartitionMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OfflineCullingCellData_TypeDefinitionIndex)->GetStaticField(0xF530);
		}
		::RPG::Client::OpenWorld::OfflineCullingCellSerializeData* SelfData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::OfflineCullingCellSerializeData*>* ChildData; // 0x20
		::RPG::GameCore::OfflineCullingIndex* SelfIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::OfflineCullingCellSubData*>* get_CellSubData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::OfflineCullingCellSubData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLSUBDATA_OFFSET))(this);
		}

		::System::Void set_CellSubData(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::OfflineCullingCellSubData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::OfflineCullingCellSubData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLSUBDATA_OFFSET))(this, a1);
		}

		::System::Single get_CellSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLSIZE_OFFSET))(this);
		}

		::System::Void set_CellSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_CellBound()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLBOUND_OFFSET))(this);
		}

		::System::Void set_CellBound(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLBOUND_OFFSET))(this, a1);
		}

		::System::Boolean get_UseCompression()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_USECOMPRESSION_OFFSET))(this);
		}

		::System::Void set_UseCompression(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_USECOMPRESSION_OFFSET))(this, a1);
		}

		::System::Int64 get_Index()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_LightVisibilityData()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_LIGHTVISIBILITYDATA_OFFSET))(this);
		}

		::System::Void set_LightVisibilityData(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_LIGHTVISIBILITYDATA_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::OfflineCullingCellSerializeData* Method_3_1FCC3BCBD5E9F995()
		{
			return ((::RPG::Client::OpenWorld::OfflineCullingCellSerializeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_1FCC3BCBD5E9F995_OFFSET))(this);
		}

		::System::Void Method_3_02B8FAA3BE7582C4(::RPG::Client::OpenWorld::OfflineCullingCellSerializeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::OfflineCullingCellSerializeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_02B8FAA3BE7582C4_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_595E641DF1B4387D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_595E641DF1B4387D_OFFSET))(this);
		}

		::System::Void Method_3_9390D296E70A7430(::System::Int32 a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_9390D296E70A7430_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_F8F4A6517C8F0D4E(::System::Collections::Generic::List_1<::System::Single>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_F8F4A6517C8F0D4E_OFFSET))(this, a1, a2);
		}
	};
}
