#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_DISPATCHWITHTHREADCOUNT_1_OFFSET UNITYSDK_OFFSET(0x92E1E0)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_DISPATCHWITHTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x92E150)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_DISPATCH_1_OFFSET UNITYSDK_OFFSET(0x92E0C0)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_DISPATCH_OFFSET UNITYSDK_OFFSET(0x92E040)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92E030)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_FILLFLOATS_OFFSET UNITYSDK_OFFSET(0x92E810)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_FILLINTS_1_OFFSET UNITYSDK_OFFSET(0x92E830)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_FILLINTS_OFFSET UNITYSDK_OFFSET(0x92E820)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x92E2A0)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETFLOATS_1_OFFSET UNITYSDK_OFFSET(0x92E670)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETFLOATS_OFFSET UNITYSDK_OFFSET(0x92E430)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x92E3B0)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETINTS_1_OFFSET UNITYSDK_OFFSET(0x92E580)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETINTS_2_OFFSET UNITYSDK_OFFSET(0x92E740)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETINTS_OFFSET UNITYSDK_OFFSET(0x92E4B0)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETINT_OFFSET UNITYSDK_OFFSET(0x92E330)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x92E320)
#define LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x92E020)

namespace LyraSector
{
	inline static constexpr unsigned int LyraSectorUtils_DispatchHelper_TypeDefinitionIndex = 29683;

	struct alignas(8) LyraSectorUtils_DispatchHelper
	{
		::UnityEngine::Rendering::CommandBuffer* cb; // 0x10
		::UnityEngine::ComputeShader* cs; // 0x18
		::Il2CppArray<::System::Int32>* int4; // 0x20
		::Il2CppArray<::System::Int32>* int3; // 0x28
		::Il2CppArray<::System::Single>* float3; // 0x30

		::System::Void _ctor(::UnityEngine::Rendering::CommandBuffer* inCB, ::UnityEngine::ComputeShader* inCS)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER__CTOR_OFFSET))(this, inCB, inCS);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispatch(::System::Int32 kernel, ::UnityEngine::ComputeBuffer* indirectArgs, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_DISPATCH_OFFSET))(this, kernel, indirectArgs, offset);
		}

		::System::Void Dispatch_1(::System::Int32 kernel, ::System::Int32 groupX, ::System::Int32 groupY, ::System::Int32 groupZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_DISPATCH_1_OFFSET))(this, kernel, groupX, groupY, groupZ);
		}

		::System::Void DispatchWithThreadCount(::System::Int32 kernel, ::System::Int32 threadCountX, ::System::Int32 threadCountY, ::System::Int32 threadCountZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_DISPATCHWITHTHREADCOUNT_OFFSET))(this, kernel, threadCountX, threadCountY, threadCountZ);
		}

		/*
		::System::Void DispatchWithThreadCount_1(::System::Int32 kernel, ::UnityEngine::Vector3Int& threadCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3Int&))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_DISPATCHWITHTHREADCOUNT_1_OFFSET))(this, kernel, threadCount);
		}
		*/

		::System::Void SetBuffer(::System::Int32 kernel, ::System::Int32 id, ::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETBUFFER_OFFSET))(this, kernel, id, buffer);
		}

		::System::Void SetTexture(::System::Int32 kernel, ::System::Int32 id, ::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETTEXTURE_OFFSET))(this, kernel, id, tex);
		}

		::System::Void SetInt(::System::Int32 id, ::System::Int32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETINT_OFFSET))(this, id, val);
		}

		::System::Void SetFloat(::System::Int32 id, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETFLOAT_OFFSET))(this, id, val);
		}

		/*
		::System::Void SetFloats(::System::Int32 id, ::UnityEngine::Vector4& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETFLOATS_OFFSET))(this, id, val);
		}
		*/

		/*
		::System::Void SetInts(::System::Int32 property, ::UnityEngine::Vector3Int& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3Int&))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETINTS_OFFSET))(this, property, val);
		}
		*/

		/*
		::System::Void SetInts_1(::System::Int32 property, ::UnityEngine::Vector3Int val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETINTS_1_OFFSET))(this, property, val);
		}
		*/

		/*
		::System::Void SetFloats_1(::System::Int32 property, ::UnityEngine::Vector3& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETFLOATS_1_OFFSET))(this, property, val);
		}
		*/

		/*
		::System::Void SetInts_2(::System::Int32 property, ::LyraSector::LyraSectorUtils_Vector4Int& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::LyraSector::LyraSectorUtils_Vector4Int&))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_SETINTS_2_OFFSET))(this, property, val);
		}
		*/

		/*
		::System::Void FillFloats(::UnityEngine::Vector3& val, ::Il2CppArray<::System::Single>* floats)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_FILLFLOATS_OFFSET))(this, val, floats);
		}
		*/

		/*
		::System::Void FillInts(::UnityEngine::Vector3Int& val, ::Il2CppArray<::System::Int32>* ints)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int&, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_FILLINTS_OFFSET))(this, val, ints);
		}
		*/

		/*
		::System::Void FillInts_1(::LyraSector::LyraSectorUtils_Vector4Int& val, ::Il2CppArray<::System::Int32>* ints)
		{
			return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSectorUtils_Vector4Int&, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_DISPATCHHELPER_FILLINTS_1_OFFSET))(this, val, ints);
		}
		*/
	};
}
