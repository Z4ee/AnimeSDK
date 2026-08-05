#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C6F795B6098BF80C.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class Class_1_11A58A840528E5B2;
class Class_1_E88275273EFBFE5C;
class Class_3_15F6A1E5CB2EA145_1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_4_9ABC19824DCCAB88_METHOD_4_0136226C6C09D487_OFFSET UNITYSDK_OFFSET(0x13B598A0)
#define CLASS_4_9ABC19824DCCAB88_METHOD_4_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x13B59FF0)
#define CLASS_4_9ABC19824DCCAB88_METHOD_4_6B11E8FE97F72BB5_OFFSET UNITYSDK_OFFSET(0x13B5A380)
#define CLASS_4_9ABC19824DCCAB88_METHOD_4_9BD53CFEB83F7089_OFFSET UNITYSDK_OFFSET(0x13B59E40)
#define CLASS_4_9ABC19824DCCAB88_METHOD_4_A7915D196CF39423_OFFSET UNITYSDK_OFFSET(0x13B5A5E0)
#define CLASS_4_9ABC19824DCCAB88_METHOD_4_D5106BBEF6C34AD4_OFFSET UNITYSDK_OFFSET(0x13B5A300)
#define CLASS_4_9ABC19824DCCAB88_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x13B5A680)
#define CLASS_4_9ABC19824DCCAB88__CTOR_OFFSET UNITYSDK_OFFSET(0x13B59890)

inline static constexpr unsigned int Class_4_9ABC19824DCCAB88_TypeDefinitionIndex = 51260;

class Class_4_9ABC19824DCCAB88 : public ::Class_3_C6F795B6098BF80C<::Class_3_15F6A1E5CB2EA145_1*>
{
public:
	::System::Void _ctor(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_4_0136226C6C09D487(::Class_1_E88275273EFBFE5C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E88275273EFBFE5C*))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_0136226C6C09D487_OFFSET))(this, a1);
	}

	static ::MoleMole::Battle::Entity* Method_4_9BD53CFEB83F7089(::System::Int32 a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_9BD53CFEB83F7089_OFFSET))(a1);
	}

	::System::Void Method_4_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_4_6B11E8FE97F72BB5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_6B11E8FE97F72BB5_OFFSET))(this, a1);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_E88275273EFBFE5C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E88275273EFBFE5C*))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_4_D5106BBEF6C34AD4(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_D5106BBEF6C34AD4_OFFSET))(a1, a2);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_4_A7915D196CF39423(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_A7915D196CF39423_OFFSET))(a1, a2, a3, a4);
	}
};
