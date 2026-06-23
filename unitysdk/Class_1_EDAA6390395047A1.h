#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
class Class_1_81B5F058B515CAFD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EDAA6390395047A1_METHOD_1_617289BF9F859F6D_OFFSET UNITYSDK_OFFSET(0x195418B0)
#define CLASS_1_EDAA6390395047A1__CTOR_OFFSET UNITYSDK_OFFSET(0x195418A0)

inline static constexpr unsigned int Class_1_EDAA6390395047A1_TypeDefinitionIndex = 63336;

class Class_1_EDAA6390395047A1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_1EA8435E138F2E03* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Class_1_81B5F058B515CAFD*>* Field_1_4; // 0x20
	::System::Int64 Field_1_2; // 0x28
	::System::Boolean Field_1_3; // 0x30
	::System::Int64 Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDAA6390395047A1__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_617289BF9F859F6D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDAA6390395047A1_METHOD_1_617289BF9F859F6D_OFFSET))(this);
	}
};
