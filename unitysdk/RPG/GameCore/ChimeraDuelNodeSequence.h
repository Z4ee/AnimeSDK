#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelNode; }

#define RPG_GAMECORE_CHIMERADUELNODESEQUENCE_METHOD_2_E407430CD0BAE7FA_OFFSET UNITYSDK_OFFSET(0x1C243B90)
#define RPG_GAMECORE_CHIMERADUELNODESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C243C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNodeSequence_TypeDefinitionIndex = 15373;

	class ChimeraDuelNodeSequence : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* NodeList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNODESEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E407430CD0BAE7FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNodeSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNodeSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNODESEQUENCE_METHOD_2_E407430CD0BAE7FA_OFFSET))(a1, a2);
		}
	};
}
