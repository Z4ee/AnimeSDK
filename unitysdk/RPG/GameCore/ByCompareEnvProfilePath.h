#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_METHOD_4_6E3675A7936EE680_OFFSET UNITYSDK_OFFSET(0x1C316970)
#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_METHOD_4_74A17B2BA6EF7BBD_OFFSET UNITYSDK_OFFSET(0x1C3167C0)
#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_METHOD_4_90816E3D9AA4E277_OFFSET UNITYSDK_OFFSET(0x1C316940)
#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_METHOD_4_ADBDFCBCBECA3FD8_OFFSET UNITYSDK_OFFSET(0x1C316780)
#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3167B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEnvProfilePath_TypeDefinitionIndex = 20343;

	class ByCompareEnvProfilePath : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* TargetPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ADBDFCBCBECA3FD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEnvProfilePath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEnvProfilePath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_METHOD_4_ADBDFCBCBECA3FD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_74A17B2BA6EF7BBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEnvProfilePath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEnvProfilePath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_METHOD_4_74A17B2BA6EF7BBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90816E3D9AA4E277(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnvProfilePath*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnvProfilePath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_METHOD_4_90816E3D9AA4E277_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E3675A7936EE680(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnvProfilePath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnvProfilePath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_METHOD_4_6E3675A7936EE680_OFFSET))(a1, a2);
		}
	};
}
