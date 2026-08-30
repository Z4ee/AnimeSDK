#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_6F2CC3A2F2CEF554_GET_HIDESKILLIDS_OFFSET UNITYSDK_OFFSET(0xB7F68F0)
#define CLASS_1_6F2CC3A2F2CEF554_METHOD_1_04982BC3C81BAD74_OFFSET UNITYSDK_OFFSET(0xB7F67E0)
#define CLASS_1_6F2CC3A2F2CEF554_METHOD_1_79ADF2A344751F1C_OFFSET UNITYSDK_OFFSET(0xB7F65C0)
#define CLASS_1_6F2CC3A2F2CEF554_SET_HIDESKILLIDS_OFFSET UNITYSDK_OFFSET(0xB7F6900)
#define CLASS_1_6F2CC3A2F2CEF554__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F6910)

inline static constexpr unsigned int Class_1_6F2CC3A2F2CEF554_TypeDefinitionIndex = 57104;

class Class_1_6F2CC3A2F2CEF554 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _HideSkillIDs_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F2CC3A2F2CEF554__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_79ADF2A344751F1C(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6F2CC3A2F2CEF554_METHOD_1_79ADF2A344751F1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_04982BC3C81BAD74(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6F2CC3A2F2CEF554_METHOD_1_04982BC3C81BAD74_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* get_HideSkillIDs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F2CC3A2F2CEF554_GET_HIDESKILLIDS_OFFSET))(this);
	}

	::System::Void set_HideSkillIDs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_6F2CC3A2F2CEF554_SET_HIDESKILLIDS_OFFSET))(this, a1);
	}
};
