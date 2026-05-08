#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace UnityEngine { class ComputeBuffer; }

inline static constexpr unsigned int StructCBuffer_1_TypeDefinitionIndex = 29454;

template <typename T>
class StructCBuffer_1 : public ::System::Object
{
public:
	::UnityEngine::ComputeBuffer* GPUBuffer; // 0x0
	static ::System::Type** StaticGet_typeOfT()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(StructCBuffer_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Il2CppArray<T>* cpuData; // 0x0
	::System::Int32 SizeInBytes; // 0x0
	::System::Boolean dirty; // 0x0
};
