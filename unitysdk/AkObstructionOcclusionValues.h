#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKOBSTRUCTIONOCCLUSIONVALUES_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EEE37F0)
#define AKOBSTRUCTIONOCCLUSIONVALUES_CLONE_OFFSET UNITYSDK_OFFSET(0x1EEE3950)
#define AKOBSTRUCTIONOCCLUSIONVALUES_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EEE3330)
#define AKOBSTRUCTIONOCCLUSIONVALUES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEE3140)
#define AKOBSTRUCTIONOCCLUSIONVALUES_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EEE3260)
#define AKOBSTRUCTIONOCCLUSIONVALUES_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEE3090)
#define AKOBSTRUCTIONOCCLUSIONVALUES_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1EEE38A0)
#define AKOBSTRUCTIONOCCLUSIONVALUES_GET_OBSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1EEE3740)
#define AKOBSTRUCTIONOCCLUSIONVALUES_GET_OCCLUSION_OFFSET UNITYSDK_OFFSET(0x1EEE35D0)
#define AKOBSTRUCTIONOCCLUSIONVALUES_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEE30E0)
#define AKOBSTRUCTIONOCCLUSIONVALUES_SET_OBSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1EEE3680)
#define AKOBSTRUCTIONOCCLUSIONVALUES_SET_OCCLUSION_OFFSET UNITYSDK_OFFSET(0x1EEE3510)
#define AKOBSTRUCTIONOCCLUSIONVALUES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEE3A70)
#define AKOBSTRUCTIONOCCLUSIONVALUES__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEE3080)

inline static constexpr unsigned int AkObstructionOcclusionValues_TypeDefinitionIndex = 43579;

class AkObstructionOcclusionValues : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkObstructionOcclusionValues* a1)
	{
		return ((::System::IntPtr(*)(::AkObstructionOcclusionValues*))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_occlusion(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_SET_OCCLUSION_OFFSET))(this, a1);
	}

	::System::Single get_occlusion()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_GET_OCCLUSION_OFFSET))(this);
	}

	::System::Void set_obstruction(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_SET_OBSTRUCTION_OFFSET))(this, a1);
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

	::System::Void Clone(::AkObstructionOcclusionValues* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkObstructionOcclusionValues*))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUES_CLONE_OFFSET))(this, a1);
	}
};
