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

#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLBOUND_OFFSET UNITYSDK_OFFSET(0x9EA1AD0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x9EA1A90)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLSUBDATA_OFFSET UNITYSDK_OFFSET(0x9EA1A50)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9EA1B70)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_LIGHTVISIBILITYDATA_OFFSET UNITYSDK_OFFSET(0x9EA1BB0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_USECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x9EA1B30)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_02B8FAA3BE7582C4_OFFSET UNITYSDK_OFFSET(0x9EA1CE0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_1C298FA6BB9350FA_OFFSET UNITYSDK_OFFSET(0x9EA1D90)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_1FCC3BCBD5E9F995_OFFSET UNITYSDK_OFFSET(0x9EA1BF0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_6E01F0CC6DB3685D_OFFSET UNITYSDK_OFFSET(0x9EA1F60)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_FA3756AC469A42D7_OFFSET UNITYSDK_OFFSET(0x9EA2990)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLBOUND_OFFSET UNITYSDK_OFFSET(0x9EA1B00)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x9EA1AB0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLSUBDATA_OFFSET UNITYSDK_OFFSET(0x9EA1A70)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x9EA1B90)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_LIGHTVISIBILITYDATA_OFFSET UNITYSDK_OFFSET(0x9EA1BD0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_USECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x9EA1B50)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EA2B20)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9EA2AD0)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OfflineCullingCellData_TypeDefinitionIndex = 60469;

	class OfflineCullingCellData : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Int32* StaticGet_PartitionMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OfflineCullingCellData_TypeDefinitionIndex)->GetStaticField(0x11AE0);
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

		::System::Boolean Method_3_1C298FA6BB9350FA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_1C298FA6BB9350FA_OFFSET))(this);
		}

		::System::Void Method_3_6E01F0CC6DB3685D(::System::Int32 a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_6E01F0CC6DB3685D_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_FA3756AC469A42D7(::System::Collections::Generic::List_1<::System::Single>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_METHOD_3_FA3756AC469A42D7_OFFSET))(this, a1, a2);
		}
	};
}
