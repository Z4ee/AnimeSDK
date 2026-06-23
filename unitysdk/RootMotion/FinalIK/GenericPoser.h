#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Poser.h"

namespace RootMotion::FinalIK { class GenericPoser_Map; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GENERICPOSER_AUTOMAPPING_OFFSET UNITYSDK_OFFSET(0x1E669D30)
#define ROOTMOTION_FINALIK_GENERICPOSER_FIXPOSERTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1E66AA20)
#define ROOTMOTION_FINALIK_GENERICPOSER_GETTARGETNAMED_OFFSET UNITYSDK_OFFSET(0x1E66A310)
#define ROOTMOTION_FINALIK_GENERICPOSER_INITIATEPOSER_OFFSET UNITYSDK_OFFSET(0x1E66A680)
#define ROOTMOTION_FINALIK_GENERICPOSER_STOREDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1E66A580)
#define ROOTMOTION_FINALIK_GENERICPOSER_UPDATEPOSER_OFFSET UNITYSDK_OFFSET(0x1E66A690)
#define ROOTMOTION_FINALIK_GENERICPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E66ABE0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GenericPoser_TypeDefinitionIndex = 38270;

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
