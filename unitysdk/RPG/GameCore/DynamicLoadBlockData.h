#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICLOADBLOCKDATA_METHOD_2_D477584FCFBBF876_OFFSET UNITYSDK_OFFSET(0x196CEB60)
#define RPG_GAMECORE_DYNAMICLOADBLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x196CEC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicLoadBlockData_TypeDefinitionIndex = 18175;

	class DynamicLoadBlockData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StagePath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBLOCKDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D477584FCFBBF876(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicLoadBlockData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicLoadBlockData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBLOCKDATA_METHOD_2_D477584FCFBBF876_OFFSET))(a1, a2);
		}
	};
}
