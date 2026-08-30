#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_47B927A482F43FA7_OFFSET UNITYSDK_OFFSET(0x1D5ABEA0)
#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_5B91C246067378F7_OFFSET UNITYSDK_OFFSET(0x1D5ABF40)
#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_DCA9B0EC69AD16B3_OFFSET UNITYSDK_OFFSET(0x1D5ABF00)
#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_DFEB583993D76F36_OFFSET UNITYSDK_OFFSET(0x1D5ABE00)
#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ABE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastZombieEntity_TypeDefinitionIndex = 23727;

	class TargetFetchLastZombieEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DFEB583993D76F36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastZombieEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastZombieEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_DFEB583993D76F36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47B927A482F43FA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastZombieEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastZombieEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_47B927A482F43FA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DCA9B0EC69AD16B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastZombieEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastZombieEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_DCA9B0EC69AD16B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5B91C246067378F7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastZombieEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastZombieEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_5B91C246067378F7_OFFSET))(a1, a2);
		}
	};
}
