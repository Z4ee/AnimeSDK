#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class PreloadObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12D6A640)
#define CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12D6A650)
#define CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_STRING_SYSTEM_TYPE___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x12D6A890)
#define CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_STRING_SYSTEM_TYPE___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12D6A7E0)
#define CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x12D6A910)
#define CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12D6A840)
#define CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12D6A7F0)
#define CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D6A620)
#define CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9__CTOR_OFFSET UNITYSDK_OFFSET(0x12D6A600)

inline static constexpr unsigned int Class_1_3DD144B525050799_Class_1_9BA83DA094AFE6C9_TypeDefinitionIndex = 85254;

class Class_1_3DD144B525050799_Class_1_9BA83DA094AFE6C9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::MoleMole::PreloadObject*> Field_1_11; // 0x18
	::System::ValueTuple_2<::System::String*, ::System::Type*> Field_1_7; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>* Field_1_4; // 0x40
	::System::Int32 Field_1_0; // 0x48
	::System::Int32 Field_1_6; // 0x4C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_MOVENEXT_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::String*, ::System::Type*> System_Collections_Generic_IEnumerator__System_String_System_Type___get_Current()
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::Type*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_STRING_SYSTEM_TYPE___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>* System_Collections_Generic_IEnumerable__System_String_System_Type___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_STRING_SYSTEM_TYPE___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD144B525050799_CLASS_1_9BA83DA094AFE6C9_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
