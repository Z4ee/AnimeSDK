#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemCost; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FACDDA8DA3FDFF6D_METHOD_1_61ED2C9EF0634039_OFFSET UNITYSDK_OFFSET(0x885FE00)
#define CLASS_1_FACDDA8DA3FDFF6D_METHOD_1_8B920303354B15C7_OFFSET UNITYSDK_OFFSET(0x885FB30)
#define CLASS_1_FACDDA8DA3FDFF6D_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x885FAC0)
#define CLASS_1_FACDDA8DA3FDFF6D_METHOD_1_BB63911B3591DFC5_OFFSET UNITYSDK_OFFSET(0x885FCE0)
#define CLASS_1_FACDDA8DA3FDFF6D_METHOD_1_C800BAB3D81AD7E4_OFFSET UNITYSDK_OFFSET(0x885FEF0)
#define CLASS_1_FACDDA8DA3FDFF6D__CTOR_OFFSET UNITYSDK_OFFSET(0x885FF30)

inline static constexpr unsigned int Class_1_FACDDA8DA3FDFF6D_TypeDefinitionIndex = 53363;

class Class_1_FACDDA8DA3FDFF6D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Proto::ItemCost*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FACDDA8DA3FDFF6D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FACDDA8DA3FDFF6D_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_8B920303354B15C7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FACDDA8DA3FDFF6D_METHOD_1_8B920303354B15C7_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_BB63911B3591DFC5(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FACDDA8DA3FDFF6D_METHOD_1_BB63911B3591DFC5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_61ED2C9EF0634039(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FACDDA8DA3FDFF6D_METHOD_1_61ED2C9EF0634039_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Proto::ItemCost*>* Method_1_C800BAB3D81AD7E4()
	{
		return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FACDDA8DA3FDFF6D_METHOD_1_C800BAB3D81AD7E4_OFFSET))(this);
	}
};
