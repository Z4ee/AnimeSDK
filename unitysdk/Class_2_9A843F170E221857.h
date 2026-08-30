#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetTextJoinValue; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_9A843F170E221857_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDB5BA0)
#define CLASS_2_9A843F170E221857_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0xBDB5C60)
#define CLASS_2_9A843F170E221857_METHOD_2_96DF1C1F0EC5F05D_OFFSET UNITYSDK_OFFSET(0xBDB5990)
#define CLASS_2_9A843F170E221857_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDB57A0)
#define CLASS_2_9A843F170E221857_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBDB56E0)
#define CLASS_2_9A843F170E221857_TICK_OFFSET UNITYSDK_OFFSET(0xBDB5740)
#define CLASS_2_9A843F170E221857__CTOR_OFFSET UNITYSDK_OFFSET(0xBDB56B0)

inline static constexpr unsigned int Class_2_9A843F170E221857_TypeDefinitionIndex = 53512;

class Class_2_9A843F170E221857 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetTextJoinValue* OFKGLJOAMLD; // 0x18
	::System::String* MAPPBDEIBIB; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTextJoinValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTextJoinValue*))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_464F9487BF0D77F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_METHOD_2_464F9487BF0D77F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_96DF1C1F0EC5F05D(::RPG::GameCore::TextJoinConfigRow* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_METHOD_2_96DF1C1F0EC5F05D_OFFSET))(this, a1, a2);
	}
};
