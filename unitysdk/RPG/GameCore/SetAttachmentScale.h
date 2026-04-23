#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttachmentVisibilityNode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETATTACHMENTSCALE_METHOD_3_78DF49299B7E6A1A_OFFSET UNITYSDK_OFFSET(0x18E095F0)
#define RPG_GAMECORE_SETATTACHMENTSCALE_METHOD_3_99EE598DBCE2A994_OFFSET UNITYSDK_OFFSET(0x18E097F0)
#define RPG_GAMECORE_SETATTACHMENTSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E097B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAttachmentScale_TypeDefinitionIndex = 21257;

	class SetAttachmentScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean OnceOnly; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttachmentVisibilityNode*>* AttachPoints; // 0x28
		::System::Boolean IsReset; // 0x30
		::RPG::MVector3 Scale; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_78DF49299B7E6A1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentScale*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentScale*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALE_METHOD_3_78DF49299B7E6A1A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99EE598DBCE2A994(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAttachmentScale* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAttachmentScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALE_METHOD_3_99EE598DBCE2A994_OFFSET))(a1, a2);
		}
	};
}
