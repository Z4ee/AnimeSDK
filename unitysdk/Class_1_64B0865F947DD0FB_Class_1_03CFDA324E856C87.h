#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_64B0865F947DD0FB_CLASS_1_03CFDA324E856C87_RENT_OFFSET UNITYSDK_OFFSET(0x11470AF0)
#define CLASS_1_64B0865F947DD0FB_CLASS_1_03CFDA324E856C87_RETURN_OFFSET UNITYSDK_OFFSET(0x11470C90)
#define CLASS_1_64B0865F947DD0FB_CLASS_1_03CFDA324E856C87__CTOR_OFFSET UNITYSDK_OFFSET(0x11470A90)

inline static constexpr unsigned int Class_1_64B0865F947DD0FB_Class_1_03CFDA324E856C87_TypeDefinitionIndex = 49643;

class Class_1_64B0865F947DD0FB_Class_1_03CFDA324E856C87 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Char>*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Char>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64B0865F947DD0FB_CLASS_1_03CFDA324E856C87__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Char>* Rent(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_64B0865F947DD0FB_CLASS_1_03CFDA324E856C87_RENT_OFFSET))(this, a1);
	}

	::System::Void Return(::Il2CppArray<::System::Char>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + CLASS_1_64B0865F947DD0FB_CLASS_1_03CFDA324E856C87_RETURN_OFFSET))(this, a1);
	}
};
