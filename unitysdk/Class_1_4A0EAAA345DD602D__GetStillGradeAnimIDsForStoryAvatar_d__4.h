#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelNPCStillConfigData; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDFBE830)
#define CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDFBEB30)
#define CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDFBEAC0)
#define CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDFBEBB0)
#define CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDFBEB20)
#define CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDFBEAD0)
#define CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFBE810)
#define CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0xDFBE370)
#define CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDFBE820)

inline static constexpr unsigned int Class_1_4A0EAAA345DD602D__GetStillGradeAnimIDsForStoryAvatar_d__4_TypeDefinitionIndex = 48368;

class Class_1_4A0EAAA345DD602D__GetStillGradeAnimIDsForStoryAvatar_d__4 : public ::System::Object
{
public:
	::System::String* __2__current; // 0x10
	::System::String* storyAvatarID; // 0x18
	::System::String* _freeStyleID_5__2; // 0x20
	::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::RPG::GameCore::LevelNPCStillConfigData*> __7__wrap2; // 0x28
	::System::String* __3__storyAvatarID; // 0x50
	::System::Int32 __1__state; // 0x58
	::System::Int32 __l__initialThreadId; // 0x5C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4___M__FINALLY1_OFFSET))(this);
	}

	::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A0EAAA345DD602D__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
