#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleOptionUIUtilType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TalkOptionData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E87825DEC8ADB719_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DED2B0)
#define CLASS_1_E87825DEC8ADB719_METHOD_1_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0x11DED3C0)
#define CLASS_1_E87825DEC8ADB719_METHOD_1_67539A3F46DC4236_OFFSET UNITYSDK_OFFSET(0x11DED860)
#define CLASS_1_E87825DEC8ADB719_METHOD_1_6946C610D47FE5F0_OFFSET UNITYSDK_OFFSET(0x11DEDC90)
#define CLASS_1_E87825DEC8ADB719_METHOD_1_7AFEA59B9600CEDE_OFFSET UNITYSDK_OFFSET(0x11DEDD60)
#define CLASS_1_E87825DEC8ADB719_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11DEDBE0)
#define CLASS_1_E87825DEC8ADB719_METHOD_1_C50B7F2ADB9AC2D8_OFFSET UNITYSDK_OFFSET(0x11DED490)
#define CLASS_1_E87825DEC8ADB719__CTOR_OFFSET UNITYSDK_OFFSET(0x11DEDE90)

inline static constexpr unsigned int Class_1_E87825DEC8ADB719_TypeDefinitionIndex = 72298;

class Class_1_E87825DEC8ADB719 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* Field_1_0; // 0x10
	::RPG::GameCore::PropOptionTrigger_ButtonParam* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* Field_1_1; // 0x20
	::RPG::GameCore::GameEntity* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* Field_1_2; // 0x30
	::System::Boolean Field_1_4; // 0x38
	::RPG::Client::Prop::PuzzleOptionUIUtilType Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87825DEC8ADB719__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87825DEC8ADB719_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C50B7F2ADB9AC2D8(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Action*>* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Action*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E87825DEC8ADB719_METHOD_1_C50B7F2ADB9AC2D8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_67539A3F46DC4236(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Action*>* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Action*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E87825DEC8ADB719_METHOD_1_67539A3F46DC4236_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87825DEC8ADB719_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87825DEC8ADB719_METHOD_1_159CB55E631AFCB9_OFFSET))(this);
	}

	::System::Void Method_1_7AFEA59B9600CEDE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E87825DEC8ADB719_METHOD_1_7AFEA59B9600CEDE_OFFSET))(this, a1);
	}

	::System::Void Method_1_6946C610D47FE5F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E87825DEC8ADB719_METHOD_1_6946C610D47FE5F0_OFFSET))(this);
	}
};
