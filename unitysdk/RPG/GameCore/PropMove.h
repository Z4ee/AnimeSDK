#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPMOVE_METHOD_3_19CE7629D310C13D_OFFSET UNITYSDK_OFFSET(0x1D17DA30)
#define RPG_GAMECORE_PROPMOVE_METHOD_3_80A321F6FBA57B0A_OFFSET UNITYSDK_OFFSET(0x1D17DAB0)
#define RPG_GAMECORE_PROPMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D17DA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropMove_TypeDefinitionIndex = 21717;

	class PropMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 GroupID; // 0x24
		::System::String* RelativePath; // 0x28
		::System::Single Duration; // 0x30
		::RPG::MVector3 DeltaPosition; // 0x34
		::RPG::MVector3 DeltaRotation; // 0x40
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x50
		::System::Boolean IsLocalMove; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_19CE7629D310C13D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVE_METHOD_3_19CE7629D310C13D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80A321F6FBA57B0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVE_METHOD_3_80A321F6FBA57B0A_OFFSET))(a1, a2);
		}
	};
}
