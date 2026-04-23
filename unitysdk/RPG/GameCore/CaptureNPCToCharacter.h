#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CAPTURENPCTOCHARACTER_METHOD_3_13F05A60B4C1F423_OFFSET UNITYSDK_OFFSET(0x187B7F50)
#define RPG_GAMECORE_CAPTURENPCTOCHARACTER_METHOD_3_2D1FAAED58BA46D3_OFFSET UNITYSDK_OFFSET(0x187B7FD0)
#define RPG_GAMECORE_CAPTURENPCTOCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x187B7FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaptureNPCToCharacter_TypeDefinitionIndex = 19232;

	class CaptureNPCToCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupNpcID; // 0x20
		::RPG::GameCore::DynamicString* CharacterUniqueName; // 0x28
		::System::Boolean ReleaseIfPerformanceEnd; // 0x30
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURENPCTOCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_13F05A60B4C1F423(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureNPCToCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureNPCToCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURENPCTOCHARACTER_METHOD_3_13F05A60B4C1F423_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2D1FAAED58BA46D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureNPCToCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureNPCToCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURENPCTOCHARACTER_METHOD_3_2D1FAAED58BA46D3_OFFSET))(a1, a2);
		}
	};
}
