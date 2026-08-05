#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/Sirenix/Serialization/DataFormat.h"

namespace MoleMole { class UnitSKinAnimationConfigMap; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SKINMAPANIMATIONCLIPDATA_GETFORMATTOSERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x1809F270)
#define MOLEMOLE_SKINMAPANIMATIONCLIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1809F2C0)

namespace MoleMole
{
	inline static constexpr unsigned int SkinMapAnimationClipData_TypeDefinitionIndex = 47395;

	class SkinMapAnimationClipData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UnitSKinAnimationConfigMap*>* animationClipMaps; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINMAPANIMATIONCLIPDATA__CTOR_OFFSET))(this);
		}

		::Sirenix::Serialization::DataFormat GetFormatToSerializeAs(::System::Boolean isPlayer)
		{
			return ((::Sirenix::Serialization::DataFormat(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINMAPANIMATIONCLIPDATA_GETFORMATTOSERIALIZEAS_OFFSET))(this, isPlayer);
		}
	};
}
