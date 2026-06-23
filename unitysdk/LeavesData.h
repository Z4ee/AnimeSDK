#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LeavesData_int2x5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LEAVESDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDA4F10)

inline static constexpr unsigned int LeavesData_TypeDefinitionIndex = 26917;

class LeavesData : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_InactivePosition()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(LeavesData_TypeDefinitionIndex)->GetStaticField(0x60A0);
	}
	static ::LeavesData_int2x5* StaticGet_EdgeTable()
	{
		return (::LeavesData_int2x5*)Il2CppClass::FromTypeDefinitionIndex(LeavesData_TypeDefinitionIndex)->GetStaticField(0x60AC);
	}
	// static const ::System::Int32 VerticesPerLeaf = 0x4; // 0x0
	// static const ::System::Int32 EdgesPerLeaf = 0x5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEAVESDATA__CCTOR_OFFSET))();
	}
};
