#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_1D0F14FBEE98E5ED;
class Class_1_566A03E0D2F6A738;
namespace System { class String; }

#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_4B2EA2D8BC3A00B3_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1147CCB0)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1147DC20)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1147DC80)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1147DC30)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1147CCA0)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_4B2EA2D8BC3A00B3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1147CC90)

inline static constexpr unsigned int Class_1_1D0F14FBEE98E5ED_Class_1_4B2EA2D8BC3A00B3_1_TypeDefinitionIndex = 67711;

class Class_1_1D0F14FBEE98E5ED_Class_1_4B2EA2D8BC3A00B3_1 : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::Class_1_1D0F14FBEE98E5ED* Field_1_2; // 0x18
	::Class_1_566A03E0D2F6A738* Field_1_3; // 0x20
	::System::String* Field_1_6; // 0x28
	::Foundation::AssetRequestHandle Field_1_7; // 0x30
	::Foundation::AssetRequestHandle Field_1_5; // 0x50
	::System::Int32 Field_1_0; // 0x70
	::System::Single Field_1_1; // 0x74

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_4B2EA2D8BC3A00B3_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_4B2EA2D8BC3A00B3_1_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
