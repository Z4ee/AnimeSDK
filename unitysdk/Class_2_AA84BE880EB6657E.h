#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4F9417780723166C.h"
#include "unitysdk/Class_1_F039F99E561BCF5B_Struct_2_413C98E7F0821DC8.h"

class Class_3_EEF4E8CAD4E8CF37;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AA84BE880EB6657E_METHOD_2_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x19F53790)
#define CLASS_2_AA84BE880EB6657E_METHOD_2_55BD0E9160D532C1_OFFSET UNITYSDK_OFFSET(0x19F53830)
#define CLASS_2_AA84BE880EB6657E__CTOR_OFFSET UNITYSDK_OFFSET(0x19F53780)

inline static constexpr unsigned int Class_2_AA84BE880EB6657E_TypeDefinitionIndex = 60888;

class Class_2_AA84BE880EB6657E : public ::Class_1_4F9417780723166C
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA84BE880EB6657E__CTOR_OFFSET))(this);
	}

	::Class_3_EEF4E8CAD4E8CF37* Method_2_323F95926A2F616E()
	{
		return ((::Class_3_EEF4E8CAD4E8CF37*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA84BE880EB6657E_METHOD_2_323F95926A2F616E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_F039F99E561BCF5B_Struct_2_413C98E7F0821DC8>* Method_2_55BD0E9160D532C1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_F039F99E561BCF5B_Struct_2_413C98E7F0821DC8>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA84BE880EB6657E_METHOD_2_55BD0E9160D532C1_OFFSET))(this);
	}
};
