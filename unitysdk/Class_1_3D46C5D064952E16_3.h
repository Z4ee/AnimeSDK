#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_892;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3D46C5D064952E16_3_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x161C78F0)
#define CLASS_1_3D46C5D064952E16_3_METHOD_1_80C66335F1B7C73D_OFFSET UNITYSDK_OFFSET(0x161C7890)
#define CLASS_1_3D46C5D064952E16_3_METHOD_1_AB4F6345C3E840D3_1_OFFSET UNITYSDK_OFFSET(0x161C78D0)
#define CLASS_1_3D46C5D064952E16_3_METHOD_1_AB4F6345C3E840D3_OFFSET UNITYSDK_OFFSET(0x161C78B0)
#define CLASS_1_3D46C5D064952E16_3__CTOR_OFFSET UNITYSDK_OFFSET(0x161C7880)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_3_TypeDefinitionIndex = 47350;

class Class_1_3D46C5D064952E16_3 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_892* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_208CC9941471731A_892* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_892*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_3__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_80C66335F1B7C73D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_3_METHOD_1_80C66335F1B7C73D_OFFSET))(this);
	}

	::System::String* Method_1_AB4F6345C3E840D3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_3_METHOD_1_AB4F6345C3E840D3_OFFSET))(this);
	}

	::System::String* Method_1_AB4F6345C3E840D3_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_3_METHOD_1_AB4F6345C3E840D3_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_3_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}
};
