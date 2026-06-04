#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetSeqOperation; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_6584E619F90D592A_OFFSET UNITYSDK_OFFSET(0x19D2B700)
#define RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_6FAC33ED6102C232_OFFSET UNITYSDK_OFFSET(0x19D2C760)
#define RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_A26600FC872DE6B3_OFFSET UNITYSDK_OFFSET(0x19D1D010)
#define RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_DC476C1F82794999_OFFSET UNITYSDK_OFFSET(0x19D2C6F0)
#define RPG_GAMECORE_TARGETSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1CFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSequence_TypeDefinitionIndex = 22580;

	class TargetSequence : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::TargetSeqOperation*>* Sequence; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DC476C1F82794999(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_DC476C1F82794999_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A26600FC872DE6B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_A26600FC872DE6B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6584E619F90D592A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSequence*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_6584E619F90D592A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FAC33ED6102C232(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSequence* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_METHOD_4_6FAC33ED6102C232_OFFSET))(a1, a2);
		}
	};
}
