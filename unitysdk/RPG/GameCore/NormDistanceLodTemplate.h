#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LodDetail; }
namespace System { class String; }

#define RPG_GAMECORE_NORMDISTANCELODTEMPLATE_METHOD_2_33CDAC60D40CD452_OFFSET UNITYSDK_OFFSET(0x1CE8F340)
#define RPG_GAMECORE_NORMDISTANCELODTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8F690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NormDistanceLodTemplate_TypeDefinitionIndex = 18980;

	class NormDistanceLodTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Single NormDistance; // 0x18
		::RPG::GameCore::StreamingLayerType LayerType; // 0x1C
		::Il2CppArray<::RPG::GameCore::LodDetail*>* LodDetailList; // 0x20
		::System::Boolean IsPersistent; // 0x28
		::System::Boolean DitherSwitch; // 0x29
		::System::Boolean UseAABBDist; // 0x2A
		::System::Boolean IsAutoGen; // 0x2B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NORMDISTANCELODTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_33CDAC60D40CD452(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NormDistanceLodTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NormDistanceLodTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NORMDISTANCELODTEMPLATE_METHOD_2_33CDAC60D40CD452_OFFSET))(a1, a2);
		}
	};
}
