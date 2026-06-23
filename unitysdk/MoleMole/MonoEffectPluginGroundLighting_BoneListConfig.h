#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_BONELISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19152C30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginGroundLighting_BoneListConfig_TypeDefinitionIndex = 53991;

	class MonoEffectPluginGroundLighting_BoneListConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* StartBonePointList; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* EndBonePointList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINGROUNDLIGHTING_BONELISTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
