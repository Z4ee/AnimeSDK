#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_64B0865F947DD0FB_CLASS_1_013A96B3D36C22A3_RENT_OFFSET UNITYSDK_OFFSET(0x14244970)
#define CLASS_1_64B0865F947DD0FB_CLASS_1_013A96B3D36C22A3_RETURN_OFFSET UNITYSDK_OFFSET(0x14244B40)
#define CLASS_1_64B0865F947DD0FB_CLASS_1_013A96B3D36C22A3__CTOR_OFFSET UNITYSDK_OFFSET(0x14244910)

inline static constexpr unsigned int Class_1_64B0865F947DD0FB_Class_1_013A96B3D36C22A3_TypeDefinitionIndex = 57227;

class Class_1_64B0865F947DD0FB_Class_1_013A96B3D36C22A3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Char>*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Char>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64B0865F947DD0FB_CLASS_1_013A96B3D36C22A3__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Char>* Rent(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_64B0865F947DD0FB_CLASS_1_013A96B3D36C22A3_RENT_OFFSET))(this, a1);
	}

	::System::Void Return(::Il2CppArray<::System::Char>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + CLASS_1_64B0865F947DD0FB_CLASS_1_013A96B3D36C22A3_RETURN_OFFSET))(this, a1);
	}
};
