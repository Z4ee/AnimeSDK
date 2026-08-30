#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define IRI2_PACKVERTEXTYPE_METHOD_2_527DACE32CCDF759_OFFSET UNITYSDK_OFFSET(0x3AF0AE0)
#define IRI2_PACKVERTEXTYPE_METHOD_2_62D3B1E102826B2F_OFFSET UNITYSDK_OFFSET(0x3AF0B30)
#define IRI2_PACKVERTEXTYPE_METHOD_2_85F1C287C26954B0_OFFSET UNITYSDK_OFFSET(0x3AF0B50)
#define IRI2_PACKVERTEXTYPE_METHOD_2_C68F979EE51FFD36_1_OFFSET UNITYSDK_OFFSET(0x18E611A0)
#define IRI2_PACKVERTEXTYPE_METHOD_2_C68F979EE51FFD36_OFFSET UNITYSDK_OFFSET(0x18E61190)
#define IRI2_PACKVERTEXTYPE_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18E60F90)

namespace IRI2
{
	inline static constexpr unsigned int PackVertexType_TypeDefinitionIndex = 50087;

	struct alignas(4) PackVertexType
	{
		::UnityEngine::Vector3 Position; // 0x10
		::System::UInt32 PackUV; // 0x1C
		::UnityEngine::Vector4 Tangent; // 0x20

		::System::Void Method_2_527DACE32CCDF759(::Il2CppArray<::UnityEngine::Vector4>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + IRI2_PACKVERTEXTYPE_METHOD_2_527DACE32CCDF759_OFFSET))(this, a1, a2);
		}

		/*
		::System::Void Method_2_62D3B1E102826B2F(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>&, ::System::Int32))((::PBYTE)hIl2Cpp + IRI2_PACKVERTEXTYPE_METHOD_2_62D3B1E102826B2F_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void Method_2_85F1C287C26954B0(::Il2CppArray<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + IRI2_PACKVERTEXTYPE_METHOD_2_85F1C287C26954B0_OFFSET))(this, a1);
		}

		static ::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + IRI2_PACKVERTEXTYPE_METHOD_2_C74CF020AA42ED85_OFFSET))();
		}

		static ::System::Single Method_2_C68F979EE51FFD36(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IRI2_PACKVERTEXTYPE_METHOD_2_C68F979EE51FFD36_OFFSET))(a1);
		}

		static ::System::UInt32 Method_2_C68F979EE51FFD36_1(::System::Single a1)
		{
			return ((::System::UInt32(*)(::System::Single))((::PBYTE)hIl2Cpp + IRI2_PACKVERTEXTYPE_METHOD_2_C68F979EE51FFD36_1_OFFSET))(a1);
		}
	};
}
