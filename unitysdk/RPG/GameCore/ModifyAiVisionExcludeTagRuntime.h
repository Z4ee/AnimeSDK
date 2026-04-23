#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYAIVISIONEXCLUDETAGRUNTIME_METHOD_3_FA28B6C6F056AAEE_OFFSET UNITYSDK_OFFSET(0x18B37460)
#define RPG_GAMECORE_MODIFYAIVISIONEXCLUDETAGRUNTIME_METHOD_3_FE4EF4BAC650CAB1_OFFSET UNITYSDK_OFFSET(0x18B373C0)
#define RPG_GAMECORE_MODIFYAIVISIONEXCLUDETAGRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x18B37420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyAiVisionExcludeTagRuntime_TypeDefinitionIndex = 20592;

	class ModifyAiVisionExcludeTagRuntime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::String* VisionID; // 0x20
		::System::Boolean IsAdd; // 0x28
		::Il2CppArray<::RPG::GameCore::EntityTag>* ModifyTag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAIVISIONEXCLUDETAGRUNTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE4EF4BAC650CAB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyAiVisionExcludeTagRuntime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyAiVisionExcludeTagRuntime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAIVISIONEXCLUDETAGRUNTIME_METHOD_3_FE4EF4BAC650CAB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FA28B6C6F056AAEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyAiVisionExcludeTagRuntime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyAiVisionExcludeTagRuntime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAIVISIONEXCLUDETAGRUNTIME_METHOD_3_FA28B6C6F056AAEE_OFFSET))(a1, a2);
		}
	};
}
