#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A52FBC3F77FB1B3.h"
#include "unitysdk/System/Object.h"

class Class_1_40264A1FD04B14F7;
class Class_2_208CC9941471731A_495;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_9D9172C07F82DDAE_CLASS_1_9C5E3FF38EA712A3_METHOD_1_1E895D3FF72E5431_OFFSET UNITYSDK_OFFSET(0x111B8930)
#define CLASS_2_9D9172C07F82DDAE_CLASS_1_9C5E3FF38EA712A3_METHOD_1_B10FB9597F17FCB4_OFFSET UNITYSDK_OFFSET(0x111B89A0)
#define CLASS_2_9D9172C07F82DDAE_CLASS_1_9C5E3FF38EA712A3__CTOR_OFFSET UNITYSDK_OFFSET(0x111B8920)

inline static constexpr unsigned int Class_2_9D9172C07F82DDAE_Class_1_9C5E3FF38EA712A3_TypeDefinitionIndex = 51952;

class Class_2_9D9172C07F82DDAE_Class_1_9C5E3FF38EA712A3 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_1; // 0x10
	::Class_1_40264A1FD04B14F7* Field_1_2; // 0x18
	::Enum_3_4A52FBC3F77FB1B3 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_9C5E3FF38EA712A3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1E895D3FF72E5431(::Class_2_208CC9941471731A_495* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_495*))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_9C5E3FF38EA712A3_METHOD_1_1E895D3FF72E5431_OFFSET))(this, a1);
	}

	::System::Void Method_1_B10FB9597F17FCB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_9C5E3FF38EA712A3_METHOD_1_B10FB9597F17FCB4_OFFSET))(this);
	}
};
