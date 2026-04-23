#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropTagComponent; }

#define RPG_GAMECORE_PROPTAGCOMPONENTCOLLECTION_METHOD_2_3ADCD16ADFB993C6_OFFSET UNITYSDK_OFFSET(0x18C66BF0)
#define RPG_GAMECORE_PROPTAGCOMPONENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7BF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTagComponentCollection_TypeDefinitionIndex = 16680;

	class PropTagComponentCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropTagComponent*>* TagComponents; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGCOMPONENTCOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3ADCD16ADFB993C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTagComponentCollection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTagComponentCollection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGCOMPONENTCOLLECTION_METHOD_2_3ADCD16ADFB993C6_OFFSET))(a1, a2);
		}
	};
}
