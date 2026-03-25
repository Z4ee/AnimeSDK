#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F964FCD89F35B351_GET__RANDOM_OFFSET UNITYSDK_OFFSET(0x10C00B90)
#define CLASS_1_F964FCD89F35B351_METHOD_1_21F5622A803BDDD2_OFFSET UNITYSDK_OFFSET(0x10C00C90)
#define CLASS_1_F964FCD89F35B351_METHOD_1_85C746F74910D9C1_OFFSET UNITYSDK_OFFSET(0x10C00F00)
#define CLASS_1_F964FCD89F35B351_METHOD_1_8DE44EEC3E24E5B0_1_OFFSET UNITYSDK_OFFSET(0x10C00F60)
#define CLASS_1_F964FCD89F35B351_METHOD_1_8DE44EEC3E24E5B0_OFFSET UNITYSDK_OFFSET(0x10C00C20)
#define CLASS_1_F964FCD89F35B351_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10C00BE0)
#define CLASS_1_F964FCD89F35B351_METHOD_1_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0x10C00E80)
#define CLASS_1_F964FCD89F35B351__CTOR_OFFSET UNITYSDK_OFFSET(0x10C00BA0)

inline static constexpr unsigned int Class_1_F964FCD89F35B351_TypeDefinitionIndex = 62973;

class Class_1_F964FCD89F35B351 : public ::System::Object
{
public:
	::System::Random* __Random_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F964FCD89F35B351__CTOR_OFFSET))(this, a1);
	}

	::System::Random* get__Random()
	{
		return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F964FCD89F35B351_GET__RANDOM_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F964FCD89F35B351_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_1_8DE44EEC3E24E5B0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F964FCD89F35B351_METHOD_1_8DE44EEC3E24E5B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_21F5622A803BDDD2(::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F964FCD89F35B351_METHOD_1_21F5622A803BDDD2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FCAE20CD32D19671(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F964FCD89F35B351_METHOD_1_FCAE20CD32D19671_OFFSET))(this, a1);
	}

	::System::Double Method_1_85C746F74910D9C1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F964FCD89F35B351_METHOD_1_85C746F74910D9C1_OFFSET))(this);
	}

	::System::Int32 Method_1_8DE44EEC3E24E5B0_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F964FCD89F35B351_METHOD_1_8DE44EEC3E24E5B0_1_OFFSET))(this, a1, a2);
	}
};
