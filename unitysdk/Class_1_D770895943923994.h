#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StoryLineData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_D770895943923994_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x18F88FD0)
#define CLASS_1_D770895943923994_METHOD_1_5354A13DDABA2EFA_OFFSET UNITYSDK_OFFSET(0x18F88F40)
#define CLASS_1_D770895943923994_METHOD_1_E465D0F588233D19_OFFSET UNITYSDK_OFFSET(0x18F88EE0)
#define CLASS_1_D770895943923994__CTOR_OFFSET UNITYSDK_OFFSET(0x18F88D70)

inline static constexpr unsigned int Class_1_D770895943923994_TypeDefinitionIndex = 71208;

class Class_1_D770895943923994 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10
	::RPG::Client::StoryLineData* Field_1_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D770895943923994__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E465D0F588233D19(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D770895943923994_METHOD_1_E465D0F588233D19_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5354A13DDABA2EFA(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D770895943923994_METHOD_1_5354A13DDABA2EFA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D770895943923994_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}
};
