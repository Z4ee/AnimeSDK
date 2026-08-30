#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_DEFORMATIONMARK_APPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0x185772A0)
#define RPG_CUSTOMRP_DEFORMATIONMARK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18577460)
#define RPG_CUSTOMRP_DEFORMATIONMARK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18577290)
#define RPG_CUSTOMRP_DEFORMATIONMARK__CCTOR_OFFSET UNITYSDK_OFFSET(0x18577470)
#define RPG_CUSTOMRP_DEFORMATIONMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x18577270)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DeformationMark_TypeDefinitionIndex = 37030;

	class DeformationMark : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_HeightScaleId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeformationMark_TypeDefinitionIndex)->GetStaticField(0xEC50);
		}
		::System::Boolean CastDeformation; // 0x18
		::System::Boolean ReceiveDeformation; // 0x19
		::System::Single TerrainLayerHeightScale1; // 0x1C
		::System::Single TerrainLayerHeightScale2; // 0x20
		::System::Single TerrainLayerHeightScale3; // 0x24
		::System::Int32 _InstanceId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEFORMATIONMARK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEFORMATIONMARK__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEFORMATIONMARK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEFORMATIONMARK_ONDISABLE_OFFSET))(this);
		}

		::System::Void ApplySettings(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEFORMATIONMARK_APPLYSETTINGS_OFFSET))(this, a1);
		}
	};
}
