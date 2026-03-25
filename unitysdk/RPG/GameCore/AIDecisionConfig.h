#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIDecisionBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AIDECISIONCONFIG_METHOD_4_0410081A58D88259_OFFSET UNITYSDK_OFFSET(0x16E901C0)
#define RPG_GAMECORE_AIDECISIONCONFIG_METHOD_4_2ED7CA096FCB1D0E_OFFSET UNITYSDK_OFFSET(0x16E90180)
#define RPG_GAMECORE_AIDECISIONCONFIG_METHOD_4_CF75B9F7101F576B_OFFSET UNITYSDK_OFFSET(0x16E8F860)
#define RPG_GAMECORE_AIDECISIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8F850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIDecisionConfig_TypeDefinitionIndex = 14180;

	class AIDecisionConfig : public ::RPG::GameCore::AIDecisionBaseConfig
	{
	public:
		::System::String* DecisionName; // 0x28
		::RPG::GameCore::TaskConfig* RootTask; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2ED7CA096FCB1D0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIDecisionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIDecisionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONCONFIG_METHOD_4_2ED7CA096FCB1D0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF75B9F7101F576B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIDecisionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIDecisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONCONFIG_METHOD_4_CF75B9F7101F576B_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>* Method_4_0410081A58D88259()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONCONFIG_METHOD_4_0410081A58D88259_OFFSET))(this);
		}
	};
}
