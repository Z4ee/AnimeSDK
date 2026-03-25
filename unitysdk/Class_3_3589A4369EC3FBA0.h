#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CA34172F658E0C88.h"

namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_3589A4369EC3FBA0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106362F0)
#define CLASS_3_3589A4369EC3FBA0_METHOD_3_3608D218C7E0F964_OFFSET UNITYSDK_OFFSET(0x10636940)
#define CLASS_3_3589A4369EC3FBA0_METHOD_3_3B729FB8F775664D_OFFSET UNITYSDK_OFFSET(0x10636400)
#define CLASS_3_3589A4369EC3FBA0_METHOD_3_45078D707DC29044_OFFSET UNITYSDK_OFFSET(0x10636880)
#define CLASS_3_3589A4369EC3FBA0_METHOD_3_DB5ADC09526D5F46_OFFSET UNITYSDK_OFFSET(0x10636A10)
#define CLASS_3_3589A4369EC3FBA0__CTOR_OFFSET UNITYSDK_OFFSET(0x106362B0)
#define CLASS_3_3589A4369EC3FBA0___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10636A00)

inline static constexpr unsigned int Class_3_3589A4369EC3FBA0_TypeDefinitionIndex = 56744;

class Class_3_3589A4369EC3FBA0 : public ::Class_2_CA34172F658E0C88
{
public:
	::System::UInt32 Field_3_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3589A4369EC3FBA0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3589A4369EC3FBA0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_3B729FB8F775664D(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3589A4369EC3FBA0_METHOD_3_3B729FB8F775664D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_45078D707DC29044(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3589A4369EC3FBA0_METHOD_3_45078D707DC29044_OFFSET))(this, a1);
	}

	::System::Void Method_3_3608D218C7E0F964(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3589A4369EC3FBA0_METHOD_3_3608D218C7E0F964_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3589A4369EC3FBA0___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_DB5ADC09526D5F46(::RPG::GameCore::TaskContext* P0, ::RPG::GameCore::PhotoGraphAimContainerConfig* P1, ::System::Int32 P2, ::System::Int32 P3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3589A4369EC3FBA0_METHOD_3_DB5ADC09526D5F46_OFFSET))(this, P0, P1, P2, P3);
	}
};
