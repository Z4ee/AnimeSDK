#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RequestChangeMatchThreeBirdLocation; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_8C5C6552E145692B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7DC1C0)
#define CLASS_2_8C5C6552E145692B_METHOD_2_92BE766FE7637517_OFFSET UNITYSDK_OFFSET(0x1A7DC4F0)
#define CLASS_2_8C5C6552E145692B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7DC320)
#define CLASS_2_8C5C6552E145692B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A7DC210)
#define CLASS_2_8C5C6552E145692B_TICK_OFFSET UNITYSDK_OFFSET(0x1A7DC2C0)
#define CLASS_2_8C5C6552E145692B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DC1B0)

inline static constexpr unsigned int Class_2_8C5C6552E145692B_TypeDefinitionIndex = 53286;

class Class_2_8C5C6552E145692B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RequestChangeMatchThreeBirdLocation* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::UInt32 NFPAFAKKALP; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + CLASS_2_8C5C6552E145692B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C5C6552E145692B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C5C6552E145692B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C5C6552E145692B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C5C6552E145692B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_92BE766FE7637517(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8C5C6552E145692B_METHOD_2_92BE766FE7637517_OFFSET))(this, a1, a2);
	}
};
