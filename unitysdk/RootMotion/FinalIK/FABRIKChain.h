#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class FABRIK; }
namespace System { class String; }

#define ROOTMOTION_FINALIK_FABRIKCHAIN_GETCENTROID_OFFSET UNITYSDK_OFFSET(0x1F8A7D10)
#define ROOTMOTION_FINALIK_FABRIKCHAIN_INITIATE_OFFSET UNITYSDK_OFFSET(0x1F8A7BC0)
#define ROOTMOTION_FINALIK_FABRIKCHAIN_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F8A7A50)
#define ROOTMOTION_FINALIK_FABRIKCHAIN_STAGE1_OFFSET UNITYSDK_OFFSET(0x1F8A7BF0)
#define ROOTMOTION_FINALIK_FABRIKCHAIN_STAGE2_OFFSET UNITYSDK_OFFSET(0x1F8A7F90)
#define ROOTMOTION_FINALIK_FABRIKCHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8A8170)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FABRIKChain_TypeDefinitionIndex = 38833;

	class FABRIKChain : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::FABRIK* ik; // 0x10
		::System::Single pull; // 0x18
		::System::Single pin; // 0x1C
		::Il2CppArray<::System::Int32>* children; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIKCHAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid(::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIKCHAIN_ISVALID_OFFSET))(this, message);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIKCHAIN_INITIATE_OFFSET))(this);
		}

		::System::Void Stage1(::Il2CppArray<::RootMotion::FinalIK::FABRIKChain*>* chain)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::FABRIKChain*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIKCHAIN_STAGE1_OFFSET))(this, chain);
		}

		::System::Void Stage2(::UnityEngine::Vector3 rootPosition, ::Il2CppArray<::RootMotion::FinalIK::FABRIKChain*>* chain)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Il2CppArray<::RootMotion::FinalIK::FABRIKChain*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIKCHAIN_STAGE2_OFFSET))(this, rootPosition, chain);
		}

		::UnityEngine::Vector3 GetCentroid(::Il2CppArray<::RootMotion::FinalIK::FABRIKChain*>* chain)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::FABRIKChain*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIKCHAIN_GETCENTROID_OFFSET))(this, chain);
		}
	};
}
