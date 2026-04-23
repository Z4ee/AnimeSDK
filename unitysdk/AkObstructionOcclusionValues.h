#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKOBSTRUCTIONOCCLUSIONVALUES_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A600BB0)
#define AKOBSTRUCTIONOCCLUSIONVALUES_CLONE_OFFSET UNITYSDK_OFFSET(0x1A600D10)
#define AKOBSTRUCTIONOCCLUSIONVALUES_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A600730)
#define AKOBSTRUCTIONOCCLUSIONVALUES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A600640)
#define AKOBSTRUCTIONOCCLUSIONVALUES_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A6006C0)
#define AKOBSTRUCTIONOCCLUSIONVALUES_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A600530)
#define AKOBSTRUCTIONOCCLUSIONVALUES_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1A600C60)
#define AKOBSTRUCTIONOCCLUSIONVALUES_GET_OBSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1A600B00)
#define AKOBSTRUCTIONOCCLUSIONVALUES_GET_OCCLUSION_OFFSET UNITYSDK_OFFSET(0x1A600990)
#define AKOBSTRUCTIONOCCLUSIONVALUES_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A600580)
#define AKOBSTRUCTIONOCCLUSIONVALUES_SET_OBSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1A600A40)
#define AKOBSTRUCTIONOCCLUSIONVALUES_SET_OCCLUSION_OFFSET UNITYSDK_OFFSET(0x1A6008D0)
#define AKOBSTRUCTIONOCCLUSIONVALUES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A600E30)
#define AKOBSTRUCTIONOCCLUSIONVALUES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A600520)

inline static constexpr unsigned int AkObstructionOcclusionValues_TypeDefinitionIndex = 40326;

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
