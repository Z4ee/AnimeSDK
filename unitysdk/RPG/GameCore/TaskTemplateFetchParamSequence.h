#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TASKTEMPLATEFETCHPARAMSEQUENCE_METHOD_3_251BE854C786F840_OFFSET UNITYSDK_OFFSET(0x1908FDE0)
#define RPG_GAMECORE_TASKTEMPLATEFETCHPARAMSEQUENCE_METHOD_3_90FBEEF2E3BFD039_OFFSET UNITYSDK_OFFSET(0x1908FE60)
#define RPG_GAMECORE_TASKTEMPLATEFETCHPARAMSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1908FE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TaskTemplateFetchParamSequence_TypeDefinitionIndex = 22825;

	class TaskTemplateFetchParamSequence : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ParamName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKTEMPLATEFETCHPARAMSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_251BE854C786F840(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TaskTemplateFetchParamSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TaskTemplateFetchParamSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKTEMPLATEFETCHPARAMSEQUENCE_METHOD_3_251BE854C786F840_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_90FBEEF2E3BFD039(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TaskTemplateFetchParamSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TaskTemplateFetchParamSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKTEMPLATEFETCHPARAMSEQUENCE_METHOD_3_90FBEEF2E3BFD039_OFFSET))(a1, a2);
		}
	};
}
