#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS_DISTANCESQ_OFFSET UNITYSDK_OFFSET(0x1DEB4E30)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS_GENERATETRANSFORMLIST_OFFSET UNITYSDK_OFFSET(0x1DEB51D0)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS_GETDISTANCETOPANEL_OFFSET UNITYSDK_OFFSET(0x1DEB5920)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS_GETTRANSFORMSCACHE_OFFSET UNITYSDK_OFFSET(0x1DEB5580)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS_ISVALIDBONECHAIN_OFFSET UNITYSDK_OFFSET(0x1DEB4E70)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS_ROTATEAXISTOABOVEPANEL_OFFSET UNITYSDK_OFFSET(0x1DEB5630)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB5960)

namespace RootMotion::FinalIK::SolverLegNap
{
	inline static constexpr unsigned int IKSolverLegNapUtils_TypeDefinitionIndex = 38319;

	class IKSolverLegNapUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet__transformsCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(IKSolverLegNapUtils_TypeDefinitionIndex)->GetStaticField(0x28F30);
		}
		// static const ::System::Int32 MAX_LENGTH = 0x20; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS__CCTOR_OFFSET))();
		}

		static ::System::Single DistanceSQ(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS_DISTANCESQ_OFFSET))(p0, p1);
		}

		static ::System::Boolean IsValidBoneChain(::UnityEngine::Transform* root, ::UnityEngine::Transform* end)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS_ISVALIDBONECHAIN_OFFSET))(root, end);
		}

		static ::System::Boolean GenerateTransformList(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* list, ::UnityEngine::Transform* root, ::UnityEngine::Transform* end)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS_GENERATETRANSFORMLIST_OFFSET))(list, root, end);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GetTransformsCache()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS_GETTRANSFORMSCACHE_OFFSET))();
		}

		static ::System::Boolean RotateAxisToAbovePanel(::UnityEngine::Vector3 root, ::UnityEngine::Vector3 end, ::UnityEngine::Vector3 panelPos, ::UnityEngine::Vector3 panelNormal, ::System::Single& sinVal, ::UnityEngine::Vector3& result)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS_ROTATEAXISTOABOVEPANEL_OFFSET))(root, end, panelPos, panelNormal, sinVal, result);
		}

		static ::System::Single GetDistanceToPanel(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 groundNormal, ::UnityEngine::Vector3 groundPosition)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_IKSOLVERLEGNAPUTILS_GETDISTANCETOPANEL_OFFSET))(position, groundNormal, groundPosition);
		}
	};
}
