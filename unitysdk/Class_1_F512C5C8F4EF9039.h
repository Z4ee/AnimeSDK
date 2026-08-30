#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_F512C5C8F4EF9039_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x17E0E730)
#define CLASS_1_F512C5C8F4EF9039_GET_CHILDWEIGHTS_OFFSET UNITYSDK_OFFSET(0x17E0E740)
#define CLASS_1_F512C5C8F4EF9039_GET_HASINSTANCEKEYS_OFFSET UNITYSDK_OFFSET(0x17E0E5E0)
#define CLASS_1_F512C5C8F4EF9039_GET_KEY_OFFSET UNITYSDK_OFFSET(0x17E0E5A0)
#define CLASS_1_F512C5C8F4EF9039_GET_PARENTS_OFFSET UNITYSDK_OFFSET(0x17E0E750)
#define CLASS_1_F512C5C8F4EF9039_GET_REDDOTID_OFFSET UNITYSDK_OFFSET(0x17E0E5B0)
#define CLASS_1_F512C5C8F4EF9039_GET_REDDOTTYPE_OFFSET UNITYSDK_OFFSET(0x17E0E5D0)
#define CLASS_1_F512C5C8F4EF9039_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x17E0E5C0)
#define CLASS_1_F512C5C8F4EF9039_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x17E0E5F0)
#define CLASS_1_F512C5C8F4EF9039__CTOR_OFFSET UNITYSDK_OFFSET(0x17E0E560)

inline static constexpr unsigned int Class_1_F512C5C8F4EF9039_TypeDefinitionIndex = 78680;

class Class_1_F512C5C8F4EF9039 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* _Children_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* _Parents_k__BackingField; // 0x18
	::System::String* _Key_k__BackingField; // 0x20
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _ChildWeights_k__BackingField; // 0x28
	::System::Boolean _HasInstanceKeys_k__BackingField; // 0x30
	::System::UInt32 _UnlockID_k__BackingField; // 0x34
	::RPG::GameCore::RedDotType _RedDotType_k__BackingField; // 0x38
	::System::UInt32 _RedDotID_k__BackingField; // 0x3C

	::System::Void _ctor(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::RPG::GameCore::RedDotType a5, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a6, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a7, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::RedDotType, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F512C5C8F4EF9039__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::String* get_Key()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F512C5C8F4EF9039_GET_KEY_OFFSET))(this);
	}

	::System::UInt32 get_RedDotID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F512C5C8F4EF9039_GET_REDDOTID_OFFSET))(this);
	}

	::System::UInt32 get_UnlockID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F512C5C8F4EF9039_GET_UNLOCKID_OFFSET))(this);
	}

	::RPG::GameCore::RedDotType get_RedDotType()
	{
		return ((::RPG::GameCore::RedDotType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F512C5C8F4EF9039_GET_REDDOTTYPE_OFFSET))(this);
	}

	::System::Boolean get_HasInstanceKeys()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F512C5C8F4EF9039_GET_HASINSTANCEKEYS_OFFSET))(this);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F512C5C8F4EF9039_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_Children()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F512C5C8F4EF9039_GET_CHILDREN_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_ChildWeights()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F512C5C8F4EF9039_GET_CHILDWEIGHTS_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_Parents()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F512C5C8F4EF9039_GET_PARENTS_OFFSET))(this);
	}
};
