#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AbyssS2_DefaultRng; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT_ADDAREACOUNT_OFFSET UNITYSDK_OFFSET(0xFEF8D60)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT_ADDAREAINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xFEF8F40)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT_GETAREACOUNT_OFFSET UNITYSDK_OFFSET(0xFEF8C40)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT_GETAREAINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xFEF8E20)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT_PREPAREGENAREASERIALID_OFFSET UNITYSDK_OFFSET(0xFEF9B10)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT_SETPOINTID2AREA_OFFSET UNITYSDK_OFFSET(0xFEF9F60)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xFEF9000)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_DefaultMapGenerator_GenPointID2AreaInterObject_TypeDefinitionIndex = 82333;

	class AbyssS2_DefaultMapGenerator_GenPointID2AreaInterObject : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* areaIDCounter; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* pointID2AreaResult; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* historyAreaIDIndexCounter; // 0x20
		::MoleMole::AbyssS2_DefaultRng* _areaSerialGen; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* pointID2AreaIndexResult; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* floorRouteCounter; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* guaranteeAreaIDs; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* historyAreaIDCounter; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* areaIDIndexCounter; // 0x50
		::System::Int64 innerSeed; // 0x58

		::System::Void _ctor(::System::Int64 inSeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT__CTOR_OFFSET))(this, inSeed);
		}

		::System::Boolean GetAreaCount(::System::Int32 areaID, ::System::Int32& count, ::System::Boolean containHistory)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT_GETAREACOUNT_OFFSET))(this, areaID, count, containHistory);
		}

		::System::Void AddAreaCount(::System::Int32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT_ADDAREACOUNT_OFFSET))(this, areaID);
		}

		::System::Boolean GetAreaIndexCount(::System::Int32 areaIDIndex, ::System::Int32& count, ::System::Boolean containHistory)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT_GETAREAINDEXCOUNT_OFFSET))(this, areaIDIndex, count, containHistory);
		}

		::System::Void AddAreaIndexCount(::System::Int32 areaIDIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT_ADDAREAINDEXCOUNT_OFFSET))(this, areaIDIndex);
		}

		::System::Boolean PrepareGenAreaSerialID(::System::Int32 targetRoutePoint, ::System::Int32 areaID, ::System::Collections::Generic::List_1<::System::Int32>* exclude, ::System::Int32& targetAreaIDIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT_PREPAREGENAREASERIALID_OFFSET))(this, targetRoutePoint, areaID, exclude, targetAreaIDIndex);
		}

		::System::Void SetPointID2Area(::System::Int32 pointID, ::System::Int32 areaID, ::System::Int32 inSerialID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GENPOINTID2AREAINTEROBJECT_SETPOINTID2AREA_OFFSET))(this, pointID, areaID, inSerialID);
		}
	};
}
