#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWENTITYFLOATMESSAGE_METHOD_3_249066E4D05279CE_OFFSET UNITYSDK_OFFSET(0x1D5267E0)
#define RPG_GAMECORE_SHOWENTITYFLOATMESSAGE_METHOD_3_7140768CD1E446E3_OFFSET UNITYSDK_OFFSET(0x1D526840)
#define RPG_GAMECORE_SHOWENTITYFLOATMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D526820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEntityFloatMessage_TypeDefinitionIndex = 22235;

	class ShowEntityFloatMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AliveOnly; // 0x20
		::RPG::Client::TextID ContentID; // 0x28
		::System::Boolean IsShowUIMessageFromModel; // 0x38
		::RPG::GameCore::FloatMessageType MessageType; // 0x3C
		::System::Single ShowUIMessageDelayTime; // 0x40
		::System::Single ShowUIMessageInternalTime; // 0x44
		::System::String* CustomUIModelAttachPointName; // 0x48
		::RPG::MVector3 CustomOffset; // 0x50
		::System::Boolean ForceVisible; // 0x5C
		::System::Boolean UseFixedPosition; // 0x5D
		::System::Boolean ScreenSpaceFloatMsg; // 0x5E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTITYFLOATMESSAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_249066E4D05279CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEntityFloatMessage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEntityFloatMessage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTITYFLOATMESSAGE_METHOD_3_249066E4D05279CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7140768CD1E446E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEntityFloatMessage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEntityFloatMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTITYFLOATMESSAGE_METHOD_3_7140768CD1E446E3_OFFSET))(a1, a2);
		}
	};
}
