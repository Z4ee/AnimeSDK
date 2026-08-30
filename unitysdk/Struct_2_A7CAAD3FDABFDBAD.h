#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/Struct_2_A7CAAD3FDABFDBAD_Struct_2_8A5596CB5BF20E53.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_A7CAAD3FDABFDBAD_METHOD_2_8EDC6F3DBBE1ED5F_OFFSET UNITYSDK_OFFSET(0x3B18960)
#define STRUCT_2_A7CAAD3FDABFDBAD_METHOD_2_C726AD1575DBE211_OFFSET UNITYSDK_OFFSET(0x3B18950)
#define STRUCT_2_A7CAAD3FDABFDBAD_METHOD_2_CE98034B09C261F8_OFFSET UNITYSDK_OFFSET(0x3B18940)

inline static constexpr unsigned int Struct_2_A7CAAD3FDABFDBAD_TypeDefinitionIndex = 68417;

struct alignas(8) Struct_2_A7CAAD3FDABFDBAD
{
	::RootMotion::IKJob::IKTransformRef DHIPFJBEJPI; // 0x10
	::System::Single APAKCBFMCAB; // 0x20
	::System::Single MEFCFACAKLA; // 0x24
	::Il2CppArray<::UnityEngine::Quaternion>* JHPBIPDFMNO; // 0x28
	::RootMotion::IKJob::IKTransformRef ADDBPCIJKIC; // 0x30
	::Il2CppArray<::Struct_2_A7CAAD3FDABFDBAD_Struct_2_8A5596CB5BF20E53>* ABBLFCBCGGL; // 0x40
	::UnityEngine::Vector3 PPBJGFLPBCF; // 0x48

	::System::Void Method_2_CE98034B09C261F8(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_A7CAAD3FDABFDBAD_METHOD_2_CE98034B09C261F8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C726AD1575DBE211(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_A7CAAD3FDABFDBAD_METHOD_2_C726AD1575DBE211_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8EDC6F3DBBE1ED5F(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_A7CAAD3FDABFDBAD_METHOD_2_8EDC6F3DBBE1ED5F_OFFSET))(this, a1, a2);
	}
};
