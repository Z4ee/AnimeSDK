#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/Struct_2_0DC8B4C201AFD519.h"
#include "unitysdk/Struct_2_A7CAAD3FDABFDBAD.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_9337153130FDFA1E_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x2DE5E40)

inline static constexpr unsigned int Struct_2_9337153130FDFA1E_TypeDefinitionIndex = 68421;

struct alignas(8) Struct_2_9337153130FDFA1E
{
	::System::Single EMBOAAJDADC; // 0x10
	::System::Single GJCODLDEDOP; // 0x14
	::RootMotion::IKJob::IKTransformRef DICDJJOJKGF; // 0x18
	::RootMotion::IKJob::IKTransformRef MFNKBADPJIH; // 0x28
	::Il2CppArray<::Struct_2_A7CAAD3FDABFDBAD>* CKBMEBFDKGK; // 0x38
	::Il2CppArray<::Struct_2_0DC8B4C201AFD519>* PEJOIJFLIBN; // 0x40

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9337153130FDFA1E_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}
};
