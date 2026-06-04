#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_64C35DBC625ACD9D.h"

namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_986DC923D88906CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1429C3A0)
#define CLASS_3_986DC923D88906CE_METHOD_3_2E24602706D93F1A_OFFSET UNITYSDK_OFFSET(0x1429CA40)
#define CLASS_3_986DC923D88906CE_METHOD_3_687EE09F52C59A96_OFFSET UNITYSDK_OFFSET(0x1429C4B0)
#define CLASS_3_986DC923D88906CE_METHOD_3_DAE67D4DC8B67113_OFFSET UNITYSDK_OFFSET(0x1429C890)
#define CLASS_3_986DC923D88906CE_METHOD_3_E8C7651F44D942F6_OFFSET UNITYSDK_OFFSET(0x1429C960)
#define CLASS_3_986DC923D88906CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1429C340)
#define CLASS_3_986DC923D88906CE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1429CA30)

inline static constexpr unsigned int Class_3_986DC923D88906CE_TypeDefinitionIndex = 64911;

class Class_3_986DC923D88906CE : public ::Class_2_64C35DBC625ACD9D
{
public:
	::System::UInt32 Field_3_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_986DC923D88906CE__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_986DC923D88906CE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_687EE09F52C59A96(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_986DC923D88906CE_METHOD_3_687EE09F52C59A96_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_DAE67D4DC8B67113(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_986DC923D88906CE_METHOD_3_DAE67D4DC8B67113_OFFSET))(this, a1);
	}

	::System::Void Method_3_E8C7651F44D942F6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_986DC923D88906CE_METHOD_3_E8C7651F44D942F6_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_986DC923D88906CE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_2E24602706D93F1A(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_986DC923D88906CE_METHOD_3_2E24602706D93F1A_OFFSET))(this, a1, a2, a3, a4);
	}
};
