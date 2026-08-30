#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropTagComponent; }

#define RPG_GAMECORE_PROPTAGCOMPONENTCOLLECTION_METHOD_2_0E8F09B8E2434743_OFFSET UNITYSDK_OFFSET(0x1D361660)
#define RPG_GAMECORE_PROPTAGCOMPONENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D375260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTagComponentCollection_TypeDefinitionIndex = 17372;

	class PropTagComponentCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropTagComponent*>* TagComponents; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGCOMPONENTCOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0E8F09B8E2434743(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTagComponentCollection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTagComponentCollection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGCOMPONENTCOLLECTION_METHOD_2_0E8F09B8E2434743_OFFSET))(a1, a2);
		}
	};
}
