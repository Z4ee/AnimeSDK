#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_METHOD_1_5BDCCAF28C3D308E_OFFSET UNITYSDK_OFFSET(0x9EA2C90)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_METHOD_1_A49AB36D595249BF_OFFSET UNITYSDK_OFFSET(0x9EA34E0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_METHOD_1_A67EAA4D4BE9011F_OFFSET UNITYSDK_OFFSET(0x9EA2B60)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_METHOD_1_A770233E6C6576B2_OFFSET UNITYSDK_OFFSET(0x9EA2910)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9EA3550)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9EA2870)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OfflineCullingCellSubData_TypeDefinitionIndex = 60467;

	class OfflineCullingCellSubData : public ::System::Object
	{
	public:
		::System::Boolean UseCompression; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* CullingCompletelyObjs; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* CullingPartialObjs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_A67EAA4D4BE9011F(::RPG::Client::OpenWorld::OfflineCullingCellSubData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::OfflineCullingCellSubData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_METHOD_1_A67EAA4D4BE9011F_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_5BDCCAF28C3D308E(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_METHOD_1_5BDCCAF28C3D308E_OFFSET))(a1, a2);
		}

		::System::Void Method_1_A770233E6C6576B2(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_METHOD_1_A770233E6C6576B2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_A49AB36D595249BF(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_METHOD_1_A49AB36D595249BF_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
