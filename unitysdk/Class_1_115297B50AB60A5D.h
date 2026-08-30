#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_115297B50AB60A5D_GET_ENHANCEDREDDOTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x17915000)
#define CLASS_1_115297B50AB60A5D_GET_ENHANCEDREDDOTTRIALSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x17915010)
#define CLASS_1_115297B50AB60A5D_GET_MAXENHANCEDSEASON_OFFSET UNITYSDK_OFFSET(0x17914FE0)
#define CLASS_1_115297B50AB60A5D_METHOD_1_B6BC1AB86061A135_1_OFFSET UNITYSDK_OFFSET(0x17915060)
#define CLASS_1_115297B50AB60A5D_METHOD_1_B6BC1AB86061A135_OFFSET UNITYSDK_OFFSET(0x17915020)
#define CLASS_1_115297B50AB60A5D_SET_MAXENHANCEDSEASON_OFFSET UNITYSDK_OFFSET(0x17914FF0)
#define CLASS_1_115297B50AB60A5D__CTOR_OFFSET UNITYSDK_OFFSET(0x179150A0)

inline static constexpr unsigned int Class_1_115297B50AB60A5D_TypeDefinitionIndex = 62826;

class Class_1_115297B50AB60A5D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _EnhancedRedDotTrialStageIDs_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* _EnhancedRedDotAvatarIDs_k__BackingField; // 0x18
	::System::UInt32 _MaxEnhancedSeason_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_MaxEnhancedSeason()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_GET_MAXENHANCEDSEASON_OFFSET))(this);
	}

	::System::Void set_MaxEnhancedSeason(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_SET_MAXENHANCEDSEASON_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_EnhancedRedDotAvatarIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_GET_ENHANCEDREDDOTAVATARIDS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_EnhancedRedDotTrialStageIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_GET_ENHANCEDREDDOTTRIALSTAGEIDS_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_B6BC1AB86061A135()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_METHOD_1_B6BC1AB86061A135_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_B6BC1AB86061A135_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_METHOD_1_B6BC1AB86061A135_1_OFFSET))(this);
	}
};
