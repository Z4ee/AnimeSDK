#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGEHARMONYSIGNALDYNAMICDIALOGMONOSERIALIZATION_METHOD_2_CBFA81D75AE7689A_OFFSET UNITYSDK_OFFSET(0x17767C20)
#define RPG_GAMECORE_STAGEHARMONYSIGNALDYNAMICDIALOGMONOSERIALIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x17767D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageHarmonySignalDynamicDialogMonoSerialization_TypeDefinitionIndex = 17619;

	class StageHarmonySignalDynamicDialogMonoSerialization : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Channle; // 0x10
		::System::Int32 SerialID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEHARMONYSIGNALDYNAMICDIALOGMONOSERIALIZATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CBFA81D75AE7689A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageHarmonySignalDynamicDialogMonoSerialization*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageHarmonySignalDynamicDialogMonoSerialization*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEHARMONYSIGNALDYNAMICDIALOGMONOSERIALIZATION_METHOD_2_CBFA81D75AE7689A_OFFSET))(a1, a2);
		}
	};
}
