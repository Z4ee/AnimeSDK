#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BC6109745AFA32BB;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_EBC2E2824DF39B18_METHOD_3_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x920B8C0)
#define CLASS_3_EBC2E2824DF39B18_METHOD_3_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x920B6C0)
#define CLASS_3_EBC2E2824DF39B18_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x920B650)
#define CLASS_3_EBC2E2824DF39B18__CTOR_OFFSET UNITYSDK_OFFSET(0x920B620)

inline static constexpr unsigned int Class_3_EBC2E2824DF39B18_TypeDefinitionIndex = 51265;

class Class_3_EBC2E2824DF39B18 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BC6109745AFA32BB*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BC6109745AFA32BB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BC6109745AFA32BB*))((::PBYTE)hIl2Cpp + CLASS_3_EBC2E2824DF39B18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBC2E2824DF39B18_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBC2E2824DF39B18_METHOD_3_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_3_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBC2E2824DF39B18_METHOD_3_913947B6596EB50A_OFFSET))(this);
	}
};
