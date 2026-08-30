#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class EntityEraFlipperShowListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_C8A3CE6964E902C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EBE890)
#define CLASS_2_C8A3CE6964E902C6_METHOD_2_70595BBE3E0E4F2A_OFFSET UNITYSDK_OFFSET(0x17EBEAC0)
#define CLASS_2_C8A3CE6964E902C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EBE530)
#define CLASS_2_C8A3CE6964E902C6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17EBE6F0)
#define CLASS_2_C8A3CE6964E902C6_TICK_OFFSET UNITYSDK_OFFSET(0x17EBEDD0)
#define CLASS_2_C8A3CE6964E902C6__CTOR_OFFSET UNITYSDK_OFFSET(0x17EBE440)

inline static constexpr unsigned int Class_2_C8A3CE6964E902C6_TypeDefinitionIndex = 53035;

class Class_2_C8A3CE6964E902C6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* IICKDKCCNPE; // 0x18
	::RPG::GameCore::EntityEraFlipperShowListener* IGHAHBNLIJA; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
	::Class_3_07C3C4D2990C49EE* OAMDJNHMPBK; // 0x30
	::System::Boolean HPPIMDBIDKA; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EntityEraFlipperShowListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EntityEraFlipperShowListener*))((::PBYTE)hIl2Cpp + CLASS_2_C8A3CE6964E902C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8A3CE6964E902C6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8A3CE6964E902C6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8A3CE6964E902C6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_70595BBE3E0E4F2A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C8A3CE6964E902C6_METHOD_2_70595BBE3E0E4F2A_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C8A3CE6964E902C6_TICK_OFFSET))(this, a1);
	}
};
