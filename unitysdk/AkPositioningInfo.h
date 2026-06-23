#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Ak3DPositionType.h"
#include "unitysdk/Ak3DSpatializationMode.h"
#include "unitysdk/AkSpeakerPanningType.h"
#include "unitysdk/System/Object.h"

#define AKPOSITIONINGINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E492380)
#define AKPOSITIONINGINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E492260)
#define AKPOSITIONINGINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E492310)
#define AKPOSITIONINGINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1E4921A0)
#define AKPOSITIONINGINFO_GET_BENABLEATTENUATION_OFFSET UNITYSDK_OFFSET(0x1E492AC0)
#define AKPOSITIONINGINFO_GET_BHOLDEMITTERPOSANDORIENT_OFFSET UNITYSDK_OFFSET(0x1E4928C0)
#define AKPOSITIONINGINFO_GET_BUSECONEATTENUATION_OFFSET UNITYSDK_OFFSET(0x1E492BC0)
#define AKPOSITIONINGINFO_GET_E3DPOSITIONINGTYPE_OFFSET UNITYSDK_OFFSET(0x1E4927C0)
#define AKPOSITIONINGINFO_GET_E3DSPATIALIZATIONMODE_OFFSET UNITYSDK_OFFSET(0x1E4929C0)
#define AKPOSITIONINGINFO_GET_FCENTERPCT_OFFSET UNITYSDK_OFFSET(0x1E4925C0)
#define AKPOSITIONINGINFO_GET_FCONEMAXATTENUATION_OFFSET UNITYSDK_OFFSET(0x1E492EF0)
#define AKPOSITIONINGINFO_GET_FINNERANGLE_OFFSET UNITYSDK_OFFSET(0x1E492CD0)
#define AKPOSITIONINGINFO_GET_FMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E493220)
#define AKPOSITIONINGINFO_GET_FOUTERANGLE_OFFSET UNITYSDK_OFFSET(0x1E492DE0)
#define AKPOSITIONINGINFO_GET_FVOLAUXGAMEDEFATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1E493440)
#define AKPOSITIONINGINFO_GET_FVOLAUXUSERDEFATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1E493550)
#define AKPOSITIONINGINFO_GET_FVOLDRYATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1E493330)
#define AKPOSITIONINGINFO_GET_HPFCONE_OFFSET UNITYSDK_OFFSET(0x1E493110)
#define AKPOSITIONINGINFO_GET_HPFVALUEATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1E493770)
#define AKPOSITIONINGINFO_GET_LPFCONE_OFFSET UNITYSDK_OFFSET(0x1E493000)
#define AKPOSITIONINGINFO_GET_LPFVALUEATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1E493660)
#define AKPOSITIONINGINFO_GET_PANNERTYPE_OFFSET UNITYSDK_OFFSET(0x1E4926C0)
#define AKPOSITIONINGINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1E4921B0)
#define AKPOSITIONINGINFO_SET_BENABLEATTENUATION_OFFSET UNITYSDK_OFFSET(0x1E492A40)
#define AKPOSITIONINGINFO_SET_BHOLDEMITTERPOSANDORIENT_OFFSET UNITYSDK_OFFSET(0x1E492840)
#define AKPOSITIONINGINFO_SET_BUSECONEATTENUATION_OFFSET UNITYSDK_OFFSET(0x1E492B40)
#define AKPOSITIONINGINFO_SET_E3DPOSITIONINGTYPE_OFFSET UNITYSDK_OFFSET(0x1E492740)
#define AKPOSITIONINGINFO_SET_E3DSPATIALIZATIONMODE_OFFSET UNITYSDK_OFFSET(0x1E492940)
#define AKPOSITIONINGINFO_SET_FCENTERPCT_OFFSET UNITYSDK_OFFSET(0x1E492530)
#define AKPOSITIONINGINFO_SET_FCONEMAXATTENUATION_OFFSET UNITYSDK_OFFSET(0x1E492E60)
#define AKPOSITIONINGINFO_SET_FINNERANGLE_OFFSET UNITYSDK_OFFSET(0x1E492C40)
#define AKPOSITIONINGINFO_SET_FMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E493190)
#define AKPOSITIONINGINFO_SET_FOUTERANGLE_OFFSET UNITYSDK_OFFSET(0x1E492D50)
#define AKPOSITIONINGINFO_SET_FVOLAUXGAMEDEFATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1E4933B0)
#define AKPOSITIONINGINFO_SET_FVOLAUXUSERDEFATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1E4934C0)
#define AKPOSITIONINGINFO_SET_FVOLDRYATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1E4932A0)
#define AKPOSITIONINGINFO_SET_HPFCONE_OFFSET UNITYSDK_OFFSET(0x1E493080)
#define AKPOSITIONINGINFO_SET_HPFVALUEATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1E4936E0)
#define AKPOSITIONINGINFO_SET_LPFCONE_OFFSET UNITYSDK_OFFSET(0x1E492F70)
#define AKPOSITIONINGINFO_SET_LPFVALUEATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1E4935D0)
#define AKPOSITIONINGINFO_SET_PANNERTYPE_OFFSET UNITYSDK_OFFSET(0x1E492640)
#define AKPOSITIONINGINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4937F0)
#define AKPOSITIONINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E492190)

inline static constexpr unsigned int AkPositioningInfo_TypeDefinitionIndex = 33005;

class AkPositioningInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkPositioningInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkPositioningInfo*))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_fCenterPct(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_FCENTERPCT_OFFSET))(this, value);
	}

	::System::Single get_fCenterPct()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_FCENTERPCT_OFFSET))(this);
	}

	::System::Void set_pannerType(::AkSpeakerPanningType value)
	{
		return ((::System::Void(*)(::PVOID, ::AkSpeakerPanningType))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_PANNERTYPE_OFFSET))(this, value);
	}

	::AkSpeakerPanningType get_pannerType()
	{
		return ((::AkSpeakerPanningType(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_PANNERTYPE_OFFSET))(this);
	}

	::System::Void set_e3dPositioningType(::Ak3DPositionType value)
	{
		return ((::System::Void(*)(::PVOID, ::Ak3DPositionType))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_E3DPOSITIONINGTYPE_OFFSET))(this, value);
	}

	::Ak3DPositionType get_e3dPositioningType()
	{
		return ((::Ak3DPositionType(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_E3DPOSITIONINGTYPE_OFFSET))(this);
	}

	::System::Void set_bHoldEmitterPosAndOrient(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_BHOLDEMITTERPOSANDORIENT_OFFSET))(this, value);
	}

	::System::Boolean get_bHoldEmitterPosAndOrient()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_BHOLDEMITTERPOSANDORIENT_OFFSET))(this);
	}

	::System::Void set_e3DSpatializationMode(::Ak3DSpatializationMode value)
	{
		return ((::System::Void(*)(::PVOID, ::Ak3DSpatializationMode))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_E3DSPATIALIZATIONMODE_OFFSET))(this, value);
	}

	::Ak3DSpatializationMode get_e3DSpatializationMode()
	{
		return ((::Ak3DSpatializationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_E3DSPATIALIZATIONMODE_OFFSET))(this);
	}

	::System::Void set_bEnableAttenuation(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_BENABLEATTENUATION_OFFSET))(this, value);
	}

	::System::Boolean get_bEnableAttenuation()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_BENABLEATTENUATION_OFFSET))(this);
	}

	::System::Void set_bUseConeAttenuation(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_BUSECONEATTENUATION_OFFSET))(this, value);
	}

	::System::Boolean get_bUseConeAttenuation()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_BUSECONEATTENUATION_OFFSET))(this);
	}

	::System::Void set_fInnerAngle(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_FINNERANGLE_OFFSET))(this, value);
	}

	::System::Single get_fInnerAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_FINNERANGLE_OFFSET))(this);
	}

	::System::Void set_fOuterAngle(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_FOUTERANGLE_OFFSET))(this, value);
	}

	::System::Single get_fOuterAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_FOUTERANGLE_OFFSET))(this);
	}

	::System::Void set_fConeMaxAttenuation(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_FCONEMAXATTENUATION_OFFSET))(this, value);
	}

	::System::Single get_fConeMaxAttenuation()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_FCONEMAXATTENUATION_OFFSET))(this);
	}

	::System::Void set_LPFCone(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_LPFCONE_OFFSET))(this, value);
	}

	::System::Single get_LPFCone()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_LPFCONE_OFFSET))(this);
	}

	::System::Void set_HPFCone(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_HPFCONE_OFFSET))(this, value);
	}

	::System::Single get_HPFCone()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_HPFCONE_OFFSET))(this);
	}

	::System::Void set_fMaxDistance(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_FMAXDISTANCE_OFFSET))(this, value);
	}

	::System::Single get_fMaxDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_FMAXDISTANCE_OFFSET))(this);
	}

	::System::Void set_fVolDryAtMaxDist(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_FVOLDRYATMAXDIST_OFFSET))(this, value);
	}

	::System::Single get_fVolDryAtMaxDist()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_FVOLDRYATMAXDIST_OFFSET))(this);
	}

	::System::Void set_fVolAuxGameDefAtMaxDist(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_FVOLAUXGAMEDEFATMAXDIST_OFFSET))(this, value);
	}

	::System::Single get_fVolAuxGameDefAtMaxDist()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_FVOLAUXGAMEDEFATMAXDIST_OFFSET))(this);
	}

	::System::Void set_fVolAuxUserDefAtMaxDist(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_FVOLAUXUSERDEFATMAXDIST_OFFSET))(this, value);
	}

	::System::Single get_fVolAuxUserDefAtMaxDist()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_FVOLAUXUSERDEFATMAXDIST_OFFSET))(this);
	}

	::System::Void set_LPFValueAtMaxDist(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_LPFVALUEATMAXDIST_OFFSET))(this, value);
	}

	::System::Single get_LPFValueAtMaxDist()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_LPFVALUEATMAXDIST_OFFSET))(this);
	}

	::System::Void set_HPFValueAtMaxDist(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_SET_HPFVALUEATMAXDIST_OFFSET))(this, value);
	}

	::System::Single get_HPFValueAtMaxDist()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONINGINFO_GET_HPFVALUEATMAXDIST_OFFSET))(this);
	}
};
