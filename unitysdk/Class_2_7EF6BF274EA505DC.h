#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ReturnToLoginPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_7EF6BF274EA505DC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B82780)
#define CLASS_2_7EF6BF274EA505DC_METHOD_2_326667BB73F9EA49_OFFSET UNITYSDK_OFFSET(0x8B827D0)
#define CLASS_2_7EF6BF274EA505DC_METHOD_2_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x8B82980)
#define CLASS_2_7EF6BF274EA505DC_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x8B828F0)
#define CLASS_2_7EF6BF274EA505DC_METHOD_2_DB50A365D0412401_OFFSET UNITYSDK_OFFSET(0x8B82AB0)
#define CLASS_2_7EF6BF274EA505DC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B82860)
#define CLASS_2_7EF6BF274EA505DC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8B82A00)
#define CLASS_2_7EF6BF274EA505DC_TICK_OFFSET UNITYSDK_OFFSET(0x8B82A50)
#define CLASS_2_7EF6BF274EA505DC__CTOR_OFFSET UNITYSDK_OFFSET(0x8B82770)

inline static constexpr unsigned int Class_2_7EF6BF274EA505DC_TypeDefinitionIndex = 43079;

class Class_2_7EF6BF274EA505DC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ReturnToLoginPage* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReturnToLoginPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReturnToLoginPage*))((::PBYTE)hIl2Cpp + CLASS_2_7EF6BF274EA505DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EF6BF274EA505DC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EF6BF274EA505DC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EF6BF274EA505DC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EF6BF274EA505DC_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EF6BF274EA505DC_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_2_326667BB73F9EA49()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EF6BF274EA505DC_METHOD_2_326667BB73F9EA49_OFFSET))(this);
	}

	::System::Void Method_2_DB50A365D0412401(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EF6BF274EA505DC_METHOD_2_DB50A365D0412401_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_64F3965CE4C4DB47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EF6BF274EA505DC_METHOD_2_64F3965CE4C4DB47_OFFSET))(this);
	}
};
