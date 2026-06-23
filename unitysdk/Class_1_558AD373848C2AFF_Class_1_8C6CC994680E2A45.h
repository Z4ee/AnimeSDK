#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_558AD373848C2AFF_CLASS_1_8C6CC994680E2A45_METHOD_1_5A6434846524FCDB_OFFSET UNITYSDK_OFFSET(0x18EACBB0)
#define CLASS_1_558AD373848C2AFF_CLASS_1_8C6CC994680E2A45_METHOD_1_BEC2720378CF6C6B_OFFSET UNITYSDK_OFFSET(0x18EACBA0)
#define CLASS_1_558AD373848C2AFF_CLASS_1_8C6CC994680E2A45__CTOR_OFFSET UNITYSDK_OFFSET(0x18EACB90)

inline static constexpr unsigned int Class_1_558AD373848C2AFF_Class_1_8C6CC994680E2A45_TypeDefinitionIndex = 49425;

class Class_1_558AD373848C2AFF_Class_1_8C6CC994680E2A45 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_558AD373848C2AFF_CLASS_1_8C6CC994680E2A45__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_BEC2720378CF6C6B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_558AD373848C2AFF_CLASS_1_8C6CC994680E2A45_METHOD_1_BEC2720378CF6C6B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A6434846524FCDB(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_558AD373848C2AFF_CLASS_1_8C6CC994680E2A45_METHOD_1_5A6434846524FCDB_OFFSET))(this, a1);
	}
};
