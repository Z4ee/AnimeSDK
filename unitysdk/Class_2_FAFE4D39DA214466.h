#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

class Class_2_293C6AF513403273;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_FAFE4D39DA214466_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x113DC470)
#define CLASS_2_FAFE4D39DA214466_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x113DC570)
#define CLASS_2_FAFE4D39DA214466_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x113DC520)
#define CLASS_2_FAFE4D39DA214466_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x113DC7F0)
#define CLASS_2_FAFE4D39DA214466__CTOR_OFFSET UNITYSDK_OFFSET(0x113DC4D0)

inline static constexpr unsigned int Class_2_FAFE4D39DA214466_TypeDefinitionIndex = 64593;

class Class_2_FAFE4D39DA214466 : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::String* Field_2_0; // 0x20
	::Class_2_293C6AF513403273* Field_2_1; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_FAFE4D39DA214466__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFE4D39DA214466_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFE4D39DA214466_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFE4D39DA214466_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFE4D39DA214466_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
