#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEWITHPARAMACTION_METHOD_3_46862A14CB58F6EF_OFFSET UNITYSDK_OFFSET(0x1BEB5290)
#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEWITHPARAMACTION_METHOD_3_85112F128610EF4E_OFFSET UNITYSDK_OFFSET(0x1BEB52D0)
#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEWITHPARAMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB52C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartSplineMoveWithParamAction_TypeDefinitionIndex = 17936;

	class FiveDimStartSplineMoveWithParamAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* StartPoint; // 0x10
		::System::String* EndPoint; // 0x18
		::System::Single Duration; // 0x20
		::System::UInt32 MusicDirectorID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEWITHPARAMACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_46862A14CB58F6EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEWITHPARAMACTION_METHOD_3_46862A14CB58F6EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85112F128610EF4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEWITHPARAMACTION_METHOD_3_85112F128610EF4E_OFFSET))(a1, a2);
		}
	};
}
