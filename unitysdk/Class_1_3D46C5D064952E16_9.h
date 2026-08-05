#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_334;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3D46C5D064952E16_9_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x1AEED2D0)
#define CLASS_1_3D46C5D064952E16_9_METHOD_1_80C66335F1B7C73D_OFFSET UNITYSDK_OFFSET(0x1AEED270)
#define CLASS_1_3D46C5D064952E16_9_METHOD_1_AB4F6345C3E840D3_1_OFFSET UNITYSDK_OFFSET(0x1AEED2B0)
#define CLASS_1_3D46C5D064952E16_9_METHOD_1_AB4F6345C3E840D3_OFFSET UNITYSDK_OFFSET(0x1AEED290)
#define CLASS_1_3D46C5D064952E16_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEED260)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_9_TypeDefinitionIndex = 87652;

class Class_1_3D46C5D064952E16_9 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_334* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_208CC9941471731A_334* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_334*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_9__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_80C66335F1B7C73D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_9_METHOD_1_80C66335F1B7C73D_OFFSET))(this);
	}

	::System::String* Method_1_AB4F6345C3E840D3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_9_METHOD_1_AB4F6345C3E840D3_OFFSET))(this);
	}

	::System::String* Method_1_AB4F6345C3E840D3_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_9_METHOD_1_AB4F6345C3E840D3_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_9_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}
};
