#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkTransform;

#define AKDIFFRACTIONPATHINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1D5977C0)
#define AKDIFFRACTIONPATHINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D596A20)
#define AKDIFFRACTIONPATHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D596830)
#define AKDIFFRACTIONPATHINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D596950)
#define AKDIFFRACTIONPATHINFO_GETANGLES_OFFSET UNITYSDK_OFFSET(0x1D597580)
#define AKDIFFRACTIONPATHINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1D596780)
#define AKDIFFRACTIONPATHINFO_GETNODES_OFFSET UNITYSDK_OFFSET(0x1D5974A0)
#define AKDIFFRACTIONPATHINFO_GETPORTALS_OFFSET UNITYSDK_OFFSET(0x1D597640)
#define AKDIFFRACTIONPATHINFO_GETROOMS_OFFSET UNITYSDK_OFFSET(0x1D597700)
#define AKDIFFRACTIONPATHINFO_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1D5973F0)
#define AKDIFFRACTIONPATHINFO_GET_DIFFRACTION_OFFSET UNITYSDK_OFFSET(0x1D597060)
#define AKDIFFRACTIONPATHINFO_GET_NODECOUNT_OFFSET UNITYSDK_OFFSET(0x1D596EF0)
#define AKDIFFRACTIONPATHINFO_GET_OBSTRUCTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1D597340)
#define AKDIFFRACTIONPATHINFO_GET_TOTLENGTH_OFFSET UNITYSDK_OFFSET(0x1D5971D0)
#define AKDIFFRACTIONPATHINFO_GET_VIRTUALPOS_OFFSET UNITYSDK_OFFSET(0x1D596D20)
#define AKDIFFRACTIONPATHINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1D5967D0)
#define AKDIFFRACTIONPATHINFO_SET_DIFFRACTION_OFFSET UNITYSDK_OFFSET(0x1D596FA0)
#define AKDIFFRACTIONPATHINFO_SET_NODECOUNT_OFFSET UNITYSDK_OFFSET(0x1D596E30)
#define AKDIFFRACTIONPATHINFO_SET_OBSTRUCTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1D597280)
#define AKDIFFRACTIONPATHINFO_SET_TOTLENGTH_OFFSET UNITYSDK_OFFSET(0x1D597110)
#define AKDIFFRACTIONPATHINFO_SET_VIRTUALPOS_OFFSET UNITYSDK_OFFSET(0x1D596C00)
#define AKDIFFRACTIONPATHINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5978E0)
#define AKDIFFRACTIONPATHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D596770)

inline static constexpr unsigned int AkDiffractionPathInfo_TypeDefinitionIndex = 43543;

class AkDiffractionPathInfo : public ::System::Object
{
public:
	// static const ::System::UInt32 kMaxNodes = 0x8; // 0x0
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkDiffractionPathInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkDiffractionPathInfo*))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_virtualPos(::AkTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkTransform*))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_VIRTUALPOS_OFFSET))(this, a1);
	}

	::AkTransform* get_virtualPos()
	{
		return ((::AkTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_VIRTUALPOS_OFFSET))(this);
	}

	::System::Void set_nodeCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_NODECOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_nodeCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_NODECOUNT_OFFSET))(this);
	}

	::System::Void set_diffraction(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_DIFFRACTION_OFFSET))(this, a1);
	}

	::System::Single get_diffraction()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_DIFFRACTION_OFFSET))(this);
	}

	::System::Void set_totLength(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_TOTLENGTH_OFFSET))(this, a1);
	}

	::System::Single get_totLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_TOTLENGTH_OFFSET))(this);
	}

	::System::Void set_obstructionValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_OBSTRUCTIONVALUE_OFFSET))(this, a1);
	}

	::System::Single get_obstructionValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_OBSTRUCTIONVALUE_OFFSET))(this);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETSIZEOF_OFFSET))();
	}

	::UnityEngine::Vector3 GetNodes(::System::UInt32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETNODES_OFFSET))(this, a1);
	}

	::System::Single GetAngles(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETANGLES_OFFSET))(this, a1);
	}

	::System::UInt64 GetPortals(::System::UInt32 a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETPORTALS_OFFSET))(this, a1);
	}

	::System::UInt64 GetRooms(::System::UInt32 a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETROOMS_OFFSET))(this, a1);
	}

	::System::Void Clone(::AkDiffractionPathInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkDiffractionPathInfo*))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_CLONE_OFFSET))(this, a1);
	}
};
