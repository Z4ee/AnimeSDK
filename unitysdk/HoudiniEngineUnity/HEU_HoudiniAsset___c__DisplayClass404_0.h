#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_Curve; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System { template <typename T> class Predicate_1; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__DISPLAYCLASS404_0__COPYPROPERTIESTO_B__0_OFFSET UNITYSDK_OFFSET(0x1B429E00)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__DISPLAYCLASS404_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B427E00)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAsset___c__DisplayClass404_0_TypeDefinitionIndex = 39103;

	class HEU_HoudiniAsset___c__DisplayClass404_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::HoudiniEngineUnity::HEU_Curve*>* __9__0; // 0x10
		::HoudiniEngineUnity::HEU_HoudiniAsset* newAsset; // 0x18
		::System::Int32 i; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__DISPLAYCLASS404_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CopyPropertiesTo_b__0(::HoudiniEngineUnity::HEU_Curve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_Curve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__DISPLAYCLASS404_0__COPYPROPERTIESTO_B__0_OFFSET))(this, a1);
		}
	};
}
