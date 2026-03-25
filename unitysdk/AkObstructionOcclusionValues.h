#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKOBSTRUCTIONOCCLUSIONVALUES_CLEAR_OFFSET UNITYSDK_OFFSET(0x18BC55D0)
#define AKOBSTRUCTIONOCCLUSIONVALUES_CLONE_OFFSET UNITYSDK_OFFSET(0x18BC5730)
#define AKOBSTRUCTIONOCCLUSIONVALUES_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18BC5150)
#define AKOBSTRUCTIONOCCLUSIONVALUES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BC5060)
#define AKOBSTRUCTIONOCCLUSIONVALUES_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BC50E0)
#define AKOBSTRUCTIONOCCLUSIONVALUES_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18BC4F50)
#define AKOBSTRUCTIONOCCLUSIONVALUES_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x18BC5680)
#define AKOBSTRUCTIONOCCLUSIONVALUES_GET_OBSTRUCTION_OFFSET UNITYSDK_OFFSET(0x18BC5520)
#define AKOBSTRUCTIONOCCLUSIONVALUES_GET_OCCLUSION_OFFSET UNITYSDK_OFFSET(0x18BC53B0)
#define AKOBSTRUCTIONOCCLUSIONVALUES_SETCPTR_OFFSET UNITYSDK_OFFSET(0x18BC4FA0)
#define AKOBSTRUCTIONOCCLUSIONVALUES_SET_OBSTRUCTION_OFFSET UNITYSDK_OFFSET(0x18BC5460)
#define AKOBSTRUCTIONOCCLUSIONVALUES_SET_OCCLUSION_OFFSET UNITYSDK_OFFSET(0x18BC52F0)
#define AKOBSTRUCTIONOCCLUSIONVALUES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18BC5850)
#define AKOBSTRUCTIONOCCLUSIONVALUES__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC4F40)

inline static constexpr unsigned int AkObstructionOcclusionValues_TypeDefinitionIndex = 34507;

class AkObstructionOcclusionValues : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkObstructionOcclusionValues* obj)
	{
		return ((::System::IntPtr(*)(::AkObstructionOcclusionValues*))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_occlusion(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_SET_OCCLUSION_OFFSET))(this, value);
	}

	::System::Single get_occlusion()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_GET_OCCLUSION_OFFSET))(this);
	}

	::System::Void set_obstruction(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_SET_OBSTRUCTION_OFFSET))(this, value);
	}

	::System::Single get_obstruction()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_GET_OBSTRUCTION_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_CLEAR_OFFSET))(this);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_GETSIZEOF_OFFSET))();
	}

	::System::Void Clone(::AkObstructionOcclusionValues* other)
	{
		return ((::System::Void(*)(::PVOID, ::AkObstructionOcclusionValues*))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_CLONE_OFFSET))(this, other);
	}
};
