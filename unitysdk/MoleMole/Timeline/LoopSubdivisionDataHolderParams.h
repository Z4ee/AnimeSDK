#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_0EA9D7540291AC8F_OFFSET UNITYSDK_OFFSET(0x17DF7540)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_3A6DFE61FFB0BB49_OFFSET UNITYSDK_OFFSET(0x17DF73D0)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17DF77A0)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_BD7DED8FEE3D8D25_OFFSET UNITYSDK_OFFSET(0x17DF7C60)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17DF7860)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17DF7750)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_CF9B395CF675FE18_OFFSET UNITYSDK_OFFSET(0x17DF7A40)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_FA6F4268E75FDA93_OFFSET UNITYSDK_OFFSET(0x17DF7910)
#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF7390)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LoopSubdivisionDataHolderParams_TypeDefinitionIndex = 77907;

	class LoopSubdivisionDataHolderParams : public ::System::Object
	{
	public:
		::System::Boolean allowLoopSubdivision; // 0x10
		::System::Boolean skipAllAdaptiveStrategies; // 0x11
		::System::Boolean enableNormalConstraint; // 0x12
		::System::Boolean enableBackFaceCulling; // 0x13
		::System::Boolean enableFrontFaceCulling; // 0x14
		::System::Boolean enableDistanceCulling; // 0x15
		::System::Boolean enableVertexLengthCulling; // 0x16
		::System::Single frontFaceCullingStart; // 0x18
		::System::Single frontFaceCullingEnd; // 0x1C
		::System::Single frontFaceCullingTolerance; // 0x20
		::System::Single screenLengthCullingStart; // 0x24
		::System::Single screenLengthCullingEnd; // 0x28
		::System::Single distanceCullingStart; // 0x2C
		::System::Single distanceCullingEnd; // 0x30
		::System::Single allowLoopSubdivisionF; // 0x34
		::System::Single skipAllAdaptiveStrategiesF; // 0x38
		::System::Single enableNormalConstraintF; // 0x3C
		::System::Single enableBackFaceCullingF; // 0x40
		::System::Single enableFrontFaceCullingF; // 0x44
		::System::Single enableDistanceCullingF; // 0x48
		::System::Single enableVertexLengthCullingF; // 0x4C
		::System::Single frontFaceCullingStartF; // 0x50
		::System::Single frontFaceCullingEndF; // 0x54
		::System::Single frontFaceCullingToleranceF; // 0x58
		::System::Single screenLengthCullingStartF; // 0x5C
		::System::Single screenLengthCullingEndF; // 0x60
		::System::Single distanceCullingStartF; // 0x64
		::System::Single distanceCullingEndF; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_3A6DFE61FFB0BB49(::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_3A6DFE61FFB0BB49_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		static ::MoleMole::Timeline::LoopSubdivisionDataHolderParams* Method_1_FA6F4268E75FDA93(::MoleMole::Timeline::LoopSubdivisionDataHolderParams* a1, ::MoleMole::Timeline::LoopSubdivisionDataHolderParams* a2)
		{
			return ((::MoleMole::Timeline::LoopSubdivisionDataHolderParams*(*)(::MoleMole::Timeline::LoopSubdivisionDataHolderParams*, ::MoleMole::Timeline::LoopSubdivisionDataHolderParams*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_FA6F4268E75FDA93_OFFSET))(a1, a2);
		}

		::System::Void Method_1_CF9B395CF675FE18(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_CF9B395CF675FE18_OFFSET))(this, a1);
		}

		static ::MoleMole::Timeline::LoopSubdivisionDataHolderParams* Method_1_BD7DED8FEE3D8D25(::System::Single a1, ::MoleMole::Timeline::LoopSubdivisionDataHolderParams* a2)
		{
			return ((::MoleMole::Timeline::LoopSubdivisionDataHolderParams*(*)(::System::Single, ::MoleMole::Timeline::LoopSubdivisionDataHolderParams*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_BD7DED8FEE3D8D25_OFFSET))(a1, a2);
		}

		::System::Void Method_1_0EA9D7540291AC8F(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERPARAMS_METHOD_1_0EA9D7540291AC8F_OFFSET))(this, a1);
		}
	};
}
