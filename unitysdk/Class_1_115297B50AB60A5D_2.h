#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_115297B50AB60A5D_2_GET_LONGTAILMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xB9B6090)
#define CLASS_1_115297B50AB60A5D_2_METHOD_1_A39D046EAA607EC8_1_OFFSET UNITYSDK_OFFSET(0xB9B6000)
#define CLASS_1_115297B50AB60A5D_2_METHOD_1_A39D046EAA607EC8_OFFSET UNITYSDK_OFFSET(0xB9B5F70)
#define CLASS_1_115297B50AB60A5D_2_SET_LONGTAILMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xB9B60A0)
#define CLASS_1_115297B50AB60A5D_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B5200)

inline static constexpr unsigned int Class_1_115297B50AB60A5D_2_TypeDefinitionIndex = 79420;

class Class_1_115297B50AB60A5D_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* FIHNBGAGLPL; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* JLMLECFFHEH; // 0x18
	::System::UInt32 _LongTailMainMissionID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_2__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_A39D046EAA607EC8()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_2_METHOD_1_A39D046EAA607EC8_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_A39D046EAA607EC8_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_2_METHOD_1_A39D046EAA607EC8_1_OFFSET))(this);
	}

	::System::UInt32 get_LongTailMainMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_2_GET_LONGTAILMAINMISSIONID_OFFSET))(this);
	}

	::System::Void set_LongTailMainMissionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_2_SET_LONGTAILMAINMISSIONID_OFFSET))(this, a1);
	}
};
