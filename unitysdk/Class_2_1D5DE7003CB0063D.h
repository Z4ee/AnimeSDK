#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

class Class_1_049B9A4D827304A8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_1D5DE7003CB0063D_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x128794D0)
#define CLASS_2_1D5DE7003CB0063D_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x128795D0)
#define CLASS_2_1D5DE7003CB0063D_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x12879580)
#define CLASS_2_1D5DE7003CB0063D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12879860)
#define CLASS_2_1D5DE7003CB0063D__CTOR_OFFSET UNITYSDK_OFFSET(0x12879530)

inline static constexpr unsigned int Class_2_1D5DE7003CB0063D_TypeDefinitionIndex = 72653;

class Class_2_1D5DE7003CB0063D : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::String* Field_2_0; // 0x20
	::Class_1_049B9A4D827304A8* Field_2_1; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_1D5DE7003CB0063D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D5DE7003CB0063D_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D5DE7003CB0063D_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D5DE7003CB0063D_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D5DE7003CB0063D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
