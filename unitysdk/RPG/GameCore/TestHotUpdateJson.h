#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TESTHOTUPDATEJSON_METHOD_2_D387A9E786BE18AB_OFFSET UNITYSDK_OFFSET(0x19DDFDD0)
#define RPG_GAMECORE_TESTHOTUPDATEJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDFF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TestHotUpdateJson_TypeDefinitionIndex = 23070;

	class TestHotUpdateJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::Int32>* IntIdList; // 0x10
		::Il2CppArray<::System::String*>* StringInfoList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEJSON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D387A9E786BE18AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TestHotUpdateJson*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TestHotUpdateJson*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEJSON_METHOD_2_D387A9E786BE18AB_OFFSET))(a1, a2);
		}
	};
}
