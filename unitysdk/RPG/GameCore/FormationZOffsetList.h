#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FormationZOffsetParams; }

#define RPG_GAMECORE_FORMATIONZOFFSETLIST_METHOD_2_B1DC6CB3FAFB1A40_OFFSET UNITYSDK_OFFSET(0x1D1124F0)
#define RPG_GAMECORE_FORMATIONZOFFSETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1125E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationZOffsetList_TypeDefinitionIndex = 16400;

	class FormationZOffsetList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FormationZOffsetParams*>* TeamZOffset; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONZOFFSETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B1DC6CB3FAFB1A40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationZOffsetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationZOffsetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONZOFFSETLIST_METHOD_2_B1DC6CB3FAFB1A40_OFFSET))(a1, a2);
		}
	};
}
