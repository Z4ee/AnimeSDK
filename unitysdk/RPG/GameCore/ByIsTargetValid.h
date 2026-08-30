#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTARGETVALID_METHOD_4_5AE8CDE9A09C958A_OFFSET UNITYSDK_OFFSET(0x1CDB1140)
#define RPG_GAMECORE_BYISTARGETVALID_METHOD_4_B135880BC1B0E8B8_OFFSET UNITYSDK_OFFSET(0x1CDB0F00)
#define RPG_GAMECORE_BYISTARGETVALID_METHOD_4_B48B75BE1E3C3624_OFFSET UNITYSDK_OFFSET(0x1CDB1170)
#define RPG_GAMECORE_BYISTARGETVALID_METHOD_4_D0A4E98BFF6176DD_OFFSET UNITYSDK_OFFSET(0x1CDB0EC0)
#define RPG_GAMECORE_BYISTARGETVALID__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB0EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTargetValid_TypeDefinitionIndex = 23531;

	class ByIsTargetValid : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean AliveOnly; // 0x28
		::System::Boolean ExcludeDisposing; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D0A4E98BFF6176DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetValid*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetValid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID_METHOD_4_D0A4E98BFF6176DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B135880BC1B0E8B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetValid* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetValid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID_METHOD_4_B135880BC1B0E8B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5AE8CDE9A09C958A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetValid*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetValid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID_METHOD_4_5AE8CDE9A09C958A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B48B75BE1E3C3624(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetValid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetValid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID_METHOD_4_B48B75BE1E3C3624_OFFSET))(a1, a2);
		}
	};
}
