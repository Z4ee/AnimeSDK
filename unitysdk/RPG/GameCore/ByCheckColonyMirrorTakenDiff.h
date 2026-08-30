#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_23DA4797A4DD9CAF_OFFSET UNITYSDK_OFFSET(0x1C2FB080)
#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_70E2DB72E29C8626_OFFSET UNITYSDK_OFFSET(0x1C2FAF00)
#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_8D769CC35060A1C2_OFFSET UNITYSDK_OFFSET(0x1C2FB0B0)
#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_D55C28E78A16DE65_OFFSET UNITYSDK_OFFSET(0x1C2FAF40)
#define RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2FAF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckColonyMirrorTakenDiff_TypeDefinitionIndex = 21623;

	class ByCheckColonyMirrorTakenDiff : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_70E2DB72E29C8626(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_70E2DB72E29C8626_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D55C28E78A16DE65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_D55C28E78A16DE65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_23DA4797A4DD9CAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_23DA4797A4DD9CAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8D769CC35060A1C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYMIRRORTAKENDIFF_METHOD_4_8D769CC35060A1C2_OFFSET))(a1, a2);
		}
	};
}
