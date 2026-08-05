#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class BigSceneStoreLightData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGBIGSCENESTORELIGHT_GETSTORELIGHTLIST_OFFSET UNITYSDK_OFFSET(0x1B56A8D0)
#define MOLEMOLE_CONFIGBIGSCENESTORELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56A9B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBigSceneStoreLight_TypeDefinitionIndex = 50564;

	class ConfigBigSceneStoreLight : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::BigSceneStoreLightData*>* StoreLight; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBIGSCENESTORELIGHT__CTOR_OFFSET))(this);
		}

		::MoleMole::BigSceneStoreLightData* GetStoreLightList(::System::Int32 storeId)
		{
			return ((::MoleMole::BigSceneStoreLightData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBIGSCENESTORELIGHT_GETSTORELIGHTLIST_OFFSET))(this, storeId);
		}
	};
}
