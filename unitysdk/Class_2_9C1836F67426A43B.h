#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_39.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9C1836F67426A43B_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0xA9873E0)
#define CLASS_2_9C1836F67426A43B_METHOD_2_AF4C1E1C68698312_OFFSET UNITYSDK_OFFSET(0xA9874B0)
#define CLASS_2_9C1836F67426A43B_METHOD_2_F9B7966EAEC825B3_OFFSET UNITYSDK_OFFSET(0xA9874A0)
#define CLASS_2_9C1836F67426A43B__CTOR_OFFSET UNITYSDK_OFFSET(0xA987380)

inline static constexpr unsigned int Class_2_9C1836F67426A43B_TypeDefinitionIndex = 54936;

class Class_2_9C1836F67426A43B : public ::Class_1_43BD383C98B4C0C5_39
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C1836F67426A43B__CTOR_OFFSET))(this);
	}

	static ::Class_2_9C1836F67426A43B* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_9C1836F67426A43B*(*)())((::PBYTE)hIl2Cpp + CLASS_2_9C1836F67426A43B_METHOD_2_08A44229CA25E941_OFFSET))();
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_F9B7966EAEC825B3()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C1836F67426A43B_METHOD_2_F9B7966EAEC825B3_OFFSET))(this);
	}

	::System::Void Method_2_AF4C1E1C68698312(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_9C1836F67426A43B_METHOD_2_AF4C1E1C68698312_OFFSET))(this, a1);
	}
};
