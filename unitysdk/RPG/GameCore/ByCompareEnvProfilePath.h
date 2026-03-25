#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_METHOD_4_74A17B2BA6EF7BBD_OFFSET UNITYSDK_OFFSET(0x17007790)
#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_METHOD_4_99A8EF3D6CF1631B_OFFSET UNITYSDK_OFFSET(0x170076C0)
#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x17007740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEnvProfilePath_TypeDefinitionIndex = 18889;

	class ByCompareEnvProfilePath : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* TargetPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_99A8EF3D6CF1631B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEnvProfilePath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEnvProfilePath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_METHOD_4_99A8EF3D6CF1631B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_74A17B2BA6EF7BBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEnvProfilePath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEnvProfilePath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_METHOD_4_74A17B2BA6EF7BBD_OFFSET))(a1, a2);
		}
	};
}
