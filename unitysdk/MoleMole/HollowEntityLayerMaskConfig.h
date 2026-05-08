#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

#define MOLEMOLE_HOLLOWENTITYLAYERMASKCONFIG_RESETSIZE_OFFSET UNITYSDK_OFFSET(0x16E5ACE0)
#define MOLEMOLE_HOLLOWENTITYLAYERMASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E5AF80)

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityLayerMaskConfig_TypeDefinitionIndex = 41633;

	class HollowEntityLayerMaskConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::System::Boolean>* layerCollisionMatrix; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYLAYERMASKCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void ResetSize(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYLAYERMASKCONFIG_RESETSIZE_OFFSET))(this, size);
		}
	};
}
