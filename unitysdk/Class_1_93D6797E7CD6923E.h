#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TeamBuildGroupConfigRow; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_93D6797E7CD6923E_GET_CANDIDATEAVATARIDS_OFFSET UNITYSDK_OFFSET(0x152DAF60)
#define CLASS_1_93D6797E7CD6923E_GET_ID_OFFSET UNITYSDK_OFFSET(0x152DAF50)
#define CLASS_1_93D6797E7CD6923E_METHOD_1_CA30623B45275F3F_OFFSET UNITYSDK_OFFSET(0x152DAF70)
#define CLASS_1_93D6797E7CD6923E__CTOR_OFFSET UNITYSDK_OFFSET(0x152DB240)

inline static constexpr unsigned int Class_1_93D6797E7CD6923E_TypeDefinitionIndex = 65077;

class Class_1_93D6797E7CD6923E : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _CandidateAvatarIDs_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_93D6797E7CD6923E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D6797E7CD6923E_GET_ID_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_CandidateAvatarIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D6797E7CD6923E_GET_CANDIDATEAVATARIDS_OFFSET))(this);
	}

	static ::Class_1_93D6797E7CD6923E* Method_1_CA30623B45275F3F(::RPG::GameCore::TeamBuildGroupConfigRow* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
	{
		return ((::Class_1_93D6797E7CD6923E*(*)(::RPG::GameCore::TeamBuildGroupConfigRow*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_93D6797E7CD6923E_METHOD_1_CA30623B45275F3F_OFFSET))(a1, a2);
	}
};
