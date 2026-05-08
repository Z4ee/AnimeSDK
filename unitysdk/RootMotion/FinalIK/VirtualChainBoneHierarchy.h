#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/VirtualBoneHierarchy.h"

namespace RootMotion::FinalIK { class VirtualBone; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_APPLYTOREALTRANSFORMSFROMINDEX_OFFSET UNITYSDK_OFFSET(0x1C3A4D20)
#define ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_BUILDCHAIN_OFFSET UNITYSDK_OFFSET(0x1C3A48C0)
#define ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x1C3A4EB0)
#define ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_EVALUATE_2_OFFSET UNITYSDK_OFFSET(0x1C3A4E60)
#define ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C3A4E20)
#define ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_GETBONEINDEX_OFFSET UNITYSDK_OFFSET(0x1C3A4980)
#define ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_INITHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1C3A48A0)
#define ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_UPDATEFORWARDFROMINDEX_OFFSET UNITYSDK_OFFSET(0x1C3A4A00)
#define ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3A4F40)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int VirtualChainBoneHierarchy_TypeDefinitionIndex = 36738;

	class VirtualChainBoneHierarchy : public ::RootMotion::FinalIK::VirtualBoneHierarchy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY__CTOR_OFFSET))(this);
		}

		::System::Void InitHierarchy(::Il2CppArray<::RootMotion::FinalIK::VirtualBone*>* bones)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::VirtualBone*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_INITHIERARCHY_OFFSET))(this, bones);
		}

		::System::Void BuildChain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_BUILDCHAIN_OFFSET))(this);
		}

		::System::Int32 GetBoneIndex(::RootMotion::FinalIK::VirtualBone* bone)
		{
			return ((::System::Int32(*)(::PVOID, ::RootMotion::FinalIK::VirtualBone*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_GETBONEINDEX_OFFSET))(this, bone);
		}

		::System::Void UpdateForwardFromIndex(::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_UPDATEFORWARDFROMINDEX_OFFSET))(this, startIndex);
		}

		::System::Void ApplyToRealTransformsFromIndex(::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_APPLYTOREALTRANSFORMSFROMINDEX_OFFSET))(this, startIndex);
		}

		::System::Collections::Generic::List_1<::RootMotion::FinalIK::VirtualBone*>* Evaluate()
		{
			return ((::System::Collections::Generic::List_1<::RootMotion::FinalIK::VirtualBone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_EVALUATE_OFFSET))(this);
		}

		::System::Void Evaluate_1(::RootMotion::FinalIK::VirtualBone* bone)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::VirtualBone*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_EVALUATE_1_OFFSET))(this, bone);
		}

		::System::Void Evaluate_2(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_VIRTUALCHAINBONEHIERARCHY_EVALUATE_2_OFFSET))(this, index);
		}
	};
}
