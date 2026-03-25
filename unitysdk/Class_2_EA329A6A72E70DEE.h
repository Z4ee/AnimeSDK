#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class RequestChangeMatchThreeV2BirdLocation; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_EA329A6A72E70DEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AA5BA0)
#define CLASS_2_EA329A6A72E70DEE_METHOD_2_92BE766FE7637517_OFFSET UNITYSDK_OFFSET(0x8AA5E30)
#define CLASS_2_EA329A6A72E70DEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8AA5CF0)
#define CLASS_2_EA329A6A72E70DEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8AA5BF0)
#define CLASS_2_EA329A6A72E70DEE_TICK_OFFSET UNITYSDK_OFFSET(0x8AA5C90)
#define CLASS_2_EA329A6A72E70DEE__CTOR_OFFSET UNITYSDK_OFFSET(0x8AA5B90)

inline static constexpr unsigned int Class_2_EA329A6A72E70DEE_TypeDefinitionIndex = 42904;

class Class_2_EA329A6A72E70DEE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::RequestChangeMatchThreeV2BirdLocation* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::System::UInt32 Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RequestChangeMatchThreeV2BirdLocation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RequestChangeMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + CLASS_2_EA329A6A72E70DEE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA329A6A72E70DEE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EA329A6A72E70DEE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA329A6A72E70DEE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA329A6A72E70DEE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_92BE766FE7637517(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EA329A6A72E70DEE_METHOD_2_92BE766FE7637517_OFFSET))(this, a1, a2);
	}
};
