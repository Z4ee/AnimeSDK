#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelNode; }

#define RPG_GAMECORE_CHIMERADUELNODESEQUENCE_METHOD_2_3DE3DFC55F598AAF_OFFSET UNITYSDK_OFFSET(0x170A11F0)
#define RPG_GAMECORE_CHIMERADUELNODESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x170A12F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNodeSequence_TypeDefinitionIndex = 14677;

	class ChimeraDuelNodeSequence : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* NodeList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNODESEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3DE3DFC55F598AAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNodeSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNodeSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNODESEQUENCE_METHOD_2_3DE3DFC55F598AAF_OFFSET))(a1, a2);
		}
	};
}
