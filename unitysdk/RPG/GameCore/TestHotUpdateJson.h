#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TESTHOTUPDATEJSON_METHOD_2_D82E9B3D8EC54E19_OFFSET UNITYSDK_OFFSET(0x19095160)
#define RPG_GAMECORE_TESTHOTUPDATEJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x190952C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TestHotUpdateJson_TypeDefinitionIndex = 23421;

	class TestHotUpdateJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::Int32>* IntIdList; // 0x10
		::Il2CppArray<::System::String*>* StringInfoList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEJSON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D82E9B3D8EC54E19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TestHotUpdateJson*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TestHotUpdateJson*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEJSON_METHOD_2_D82E9B3D8EC54E19_OFFSET))(a1, a2);
		}
	};
}
