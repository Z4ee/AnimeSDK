#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Poser.h"

namespace RootMotion::FinalIK { class GenericPoser_Map; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GENERICPOSER_AUTOMAPPING_OFFSET UNITYSDK_OFFSET(0x1C345480)
#define ROOTMOTION_FINALIK_GENERICPOSER_FIXPOSERTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1C346170)
#define ROOTMOTION_FINALIK_GENERICPOSER_GETTARGETNAMED_OFFSET UNITYSDK_OFFSET(0x1C345A60)
#define ROOTMOTION_FINALIK_GENERICPOSER_INITIATEPOSER_OFFSET UNITYSDK_OFFSET(0x1C345DD0)
#define ROOTMOTION_FINALIK_GENERICPOSER_STOREDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1C345CD0)
#define ROOTMOTION_FINALIK_GENERICPOSER_UPDATEPOSER_OFFSET UNITYSDK_OFFSET(0x1C345DE0)
#define ROOTMOTION_FINALIK_GENERICPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C346330)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GenericPoser_TypeDefinitionIndex = 36669;

	class GenericPoser : public ::RootMotion::FinalIK::Poser
	{
	public:
		::Il2CppArray<::RootMotion::FinalIK::GenericPoser_Map*>* maps; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER__CTOR_OFFSET))(this);
		}

		::System::Void AutoMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_AUTOMAPPING_OFFSET))(this);
		}

		::System::Void InitiatePoser()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_INITIATEPOSER_OFFSET))(this);
		}

		::System::Void UpdatePoser()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_UPDATEPOSER_OFFSET))(this);
		}

		::System::Void FixPoserTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_FIXPOSERTRANSFORMS_OFFSET))(this);
		}

		::System::Void StoreDefaultState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_STOREDEFAULTSTATE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTargetNamed(::System::String* tName, ::Il2CppArray<::UnityEngine::Transform*>* array)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_GETTARGETNAMED_OFFSET))(this, tName, array);
		}
	};
}
