#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ShaderPropertyOverrideMonoSerialization; }

#define RPG_GAMECORE_STAGESCENEITEMSHAREDSERIALIZATIONDATA_METHOD_2_C51C8261D1B733A0_OFFSET UNITYSDK_OFFSET(0x18E934C0)
#define RPG_GAMECORE_STAGESCENEITEMSHAREDSERIALIZATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E93590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageSceneItemSharedSerializationData_TypeDefinitionIndex = 18236;

	class StageSceneItemSharedSerializationData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ShaderPropertyOverrideMonoSerialization*>* ShaderPropertyOverrideMonoSerialization; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGESCENEITEMSHAREDSERIALIZATIONDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C51C8261D1B733A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageSceneItemSharedSerializationData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageSceneItemSharedSerializationData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGESCENEITEMSHAREDSERIALIZATIONDATA_METHOD_2_C51C8261D1B733A0_OFFSET))(a1, a2);
		}
	};
}
