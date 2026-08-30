#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_64C35DBC625ACD9D.h"

namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_8E420620DECF0870_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1596EFD0)
#define CLASS_3_8E420620DECF0870_METHOD_3_687EE09F52C59A96_OFFSET UNITYSDK_OFFSET(0x1596F0E0)
#define CLASS_3_8E420620DECF0870_METHOD_3_DAE67D4DC8B67113_OFFSET UNITYSDK_OFFSET(0x1596F4C0)
#define CLASS_3_8E420620DECF0870_METHOD_3_E8C7651F44D942F6_OFFSET UNITYSDK_OFFSET(0x1596F590)
#define CLASS_3_8E420620DECF0870__CTOR_OFFSET UNITYSDK_OFFSET(0x1596EF70)

inline static constexpr unsigned int Class_3_8E420620DECF0870_TypeDefinitionIndex = 69405;

class Class_3_8E420620DECF0870 : public ::Class_2_64C35DBC625ACD9D
{
public:
	::System::UInt32 IFDLFIBAFKE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E420620DECF0870__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E420620DECF0870_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_687EE09F52C59A96(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8E420620DECF0870_METHOD_3_687EE09F52C59A96_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_DAE67D4DC8B67113(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8E420620DECF0870_METHOD_3_DAE67D4DC8B67113_OFFSET))(this, a1);
	}

	::System::Void Method_3_E8C7651F44D942F6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8E420620DECF0870_METHOD_3_E8C7651F44D942F6_OFFSET))(this, a1);
	}
};
