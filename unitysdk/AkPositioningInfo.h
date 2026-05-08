#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Ak3DPositionType.h"
#include "unitysdk/Ak3DSpatializationMode.h"
#include "unitysdk/AkSpeakerPanningType.h"
#include "unitysdk/System/Object.h"

#define AKPOSITIONINGINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C150790)
#define AKPOSITIONINGINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C150670)
#define AKPOSITIONINGINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C150720)
#define AKPOSITIONINGINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C1505B0)
#define AKPOSITIONINGINFO_GET_BENABLEATTENUATION_OFFSET UNITYSDK_OFFSET(0x1C150ED0)
#define AKPOSITIONINGINFO_GET_BHOLDEMITTERPOSANDORIENT_OFFSET UNITYSDK_OFFSET(0x1C150CD0)
#define AKPOSITIONINGINFO_GET_BUSECONEATTENUATION_OFFSET UNITYSDK_OFFSET(0x1C150FD0)
#define AKPOSITIONINGINFO_GET_E3DPOSITIONINGTYPE_OFFSET UNITYSDK_OFFSET(0x1C150BD0)
#define AKPOSITIONINGINFO_GET_E3DSPATIALIZATIONMODE_OFFSET UNITYSDK_OFFSET(0x1C150DD0)
#define AKPOSITIONINGINFO_GET_FCENTERPCT_OFFSET UNITYSDK_OFFSET(0x1C1509D0)
#define AKPOSITIONINGINFO_GET_FCONEMAXATTENUATION_OFFSET UNITYSDK_OFFSET(0x1C151300)
#define AKPOSITIONINGINFO_GET_FINNERANGLE_OFFSET UNITYSDK_OFFSET(0x1C1510E0)
#define AKPOSITIONINGINFO_GET_FMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C151630)
#define AKPOSITIONINGINFO_GET_FOUTERANGLE_OFFSET UNITYSDK_OFFSET(0x1C1511F0)
#define AKPOSITIONINGINFO_GET_FVOLAUXGAMEDEFATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1C151850)
#define AKPOSITIONINGINFO_GET_FVOLAUXUSERDEFATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1C151960)
#define AKPOSITIONINGINFO_GET_FVOLDRYATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1C151740)
#define AKPOSITIONINGINFO_GET_HPFCONE_OFFSET UNITYSDK_OFFSET(0x1C151520)
#define AKPOSITIONINGINFO_GET_HPFVALUEATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1C151B80)
#define AKPOSITIONINGINFO_GET_LPFCONE_OFFSET UNITYSDK_OFFSET(0x1C151410)
#define AKPOSITIONINGINFO_GET_LPFVALUEATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1C151A70)
#define AKPOSITIONINGINFO_GET_PANNERTYPE_OFFSET UNITYSDK_OFFSET(0x1C150AD0)
#define AKPOSITIONINGINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C1505C0)
#define AKPOSITIONINGINFO_SET_BENABLEATTENUATION_OFFSET UNITYSDK_OFFSET(0x1C150E50)
#define AKPOSITIONINGINFO_SET_BHOLDEMITTERPOSANDORIENT_OFFSET UNITYSDK_OFFSET(0x1C150C50)
#define AKPOSITIONINGINFO_SET_BUSECONEATTENUATION_OFFSET UNITYSDK_OFFSET(0x1C150F50)
#define AKPOSITIONINGINFO_SET_E3DPOSITIONINGTYPE_OFFSET UNITYSDK_OFFSET(0x1C150B50)
#define AKPOSITIONINGINFO_SET_E3DSPATIALIZATIONMODE_OFFSET UNITYSDK_OFFSET(0x1C150D50)
#define AKPOSITIONINGINFO_SET_FCENTERPCT_OFFSET UNITYSDK_OFFSET(0x1C150940)
#define AKPOSITIONINGINFO_SET_FCONEMAXATTENUATION_OFFSET UNITYSDK_OFFSET(0x1C151270)
#define AKPOSITIONINGINFO_SET_FINNERANGLE_OFFSET UNITYSDK_OFFSET(0x1C151050)
#define AKPOSITIONINGINFO_SET_FMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C1515A0)
#define AKPOSITIONINGINFO_SET_FOUTERANGLE_OFFSET UNITYSDK_OFFSET(0x1C151160)
#define AKPOSITIONINGINFO_SET_FVOLAUXGAMEDEFATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1C1517C0)
#define AKPOSITIONINGINFO_SET_FVOLAUXUSERDEFATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1C1518D0)
#define AKPOSITIONINGINFO_SET_FVOLDRYATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1C1516B0)
#define AKPOSITIONINGINFO_SET_HPFCONE_OFFSET UNITYSDK_OFFSET(0x1C151490)
#define AKPOSITIONINGINFO_SET_HPFVALUEATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1C151AF0)
#define AKPOSITIONINGINFO_SET_LPFCONE_OFFSET UNITYSDK_OFFSET(0x1C151380)
#define AKPOSITIONINGINFO_SET_LPFVALUEATMAXDIST_OFFSET UNITYSDK_OFFSET(0x1C1519E0)
#define AKPOSITIONINGINFO_SET_PANNERTYPE_OFFSET UNITYSDK_OFFSET(0x1C150A50)
#define AKPOSITIONINGINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C151C00)
#define AKPOSITIONINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1505A0)

inline static constexpr unsigned int AkPositioningInfo_TypeDefinitionIndex = 31454;

class AkPositioningInfo : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

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
