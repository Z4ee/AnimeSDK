#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CUSTOMRP_MATERIALINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCC53970)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MaterialInfo_TypeDefinitionIndex = 48487;

	class MaterialInfo : public ::System::Object
	{
	public:
		::UnityEngine::Material* Material; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* PassIDs; // 0x18
		::System::Boolean PatternOnly; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATERIALINFO__CTOR_OFFSET))(this);
		}
	};
}
