#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphFreeStyleDataConfig; }

#define RPG_GAMECORE_PHOTOGRAPHFREESTYLECONFIG_METHOD_2_809EA9D54C0FF098_OFFSET UNITYSDK_OFFSET(0x1D434900)
#define RPG_GAMECORE_PHOTOGRAPHFREESTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4349C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphFreeStyleConfig_TypeDefinitionIndex = 18825;

	class PhotoGraphFreeStyleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PhotoGraphFreeStyleDataConfig*>* FreeStyleDataList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFREESTYLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_809EA9D54C0FF098(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphFreeStyleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphFreeStyleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFREESTYLECONFIG_METHOD_2_809EA9D54C0FF098_OFFSET))(a1, a2);
		}
	};
}
