#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MAPLAYERORDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1175AF90)

namespace MoleMole
{
	inline static constexpr unsigned int MapLayerOrderInfo_TypeDefinitionIndex = 44519;

	class MapLayerOrderInfo : public ::System::Object
	{
	public:
		::System::Int32 MapAssetId; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* LayerOrder; // 0x18
		::System::Boolean CheckBothIn; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAPLAYERORDERINFO__CTOR_OFFSET))(this);
		}
	};
}
