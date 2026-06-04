#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETFIVEDIMENTITYATTACHTARGET_METHOD_3_2822733F27C47B12_OFFSET UNITYSDK_OFFSET(0x19C4D830)
#define RPG_GAMECORE_SETFIVEDIMENTITYATTACHTARGET_METHOD_3_A08757B7740D5B89_OFFSET UNITYSDK_OFFSET(0x19C4D8D0)
#define RPG_GAMECORE_SETFIVEDIMENTITYATTACHTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19C4D890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFiveDimEntityAttachTarget_TypeDefinitionIndex = 20110;

	class SetFiveDimEntityAttachTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x18
		::RPG::GameCore::TargetEvaluator* AttachTarget; // 0x20
		::RPG::GameCore::DynamicString* EntityID; // 0x28
		::System::Boolean ClearAttach; // 0x30
		::System::String* AttachPoint; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFIVEDIMENTITYATTACHTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2822733F27C47B12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFiveDimEntityAttachTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFiveDimEntityAttachTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFIVEDIMENTITYATTACHTARGET_METHOD_3_2822733F27C47B12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A08757B7740D5B89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFiveDimEntityAttachTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFiveDimEntityAttachTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFIVEDIMENTITYATTACHTARGET_METHOD_3_A08757B7740D5B89_OFFSET))(a1, a2);
		}
	};
}
