#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

class Class_1_049B9A4D827304A8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_1D5DE7003CB0063D_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xB903160)
#define CLASS_2_1D5DE7003CB0063D_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0xB903210)
#define CLASS_2_1D5DE7003CB0063D_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xB903260)
#define CLASS_2_1D5DE7003CB0063D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9034B0)
#define CLASS_2_1D5DE7003CB0063D__CTOR_OFFSET UNITYSDK_OFFSET(0xB9031C0)

inline static constexpr unsigned int Class_2_1D5DE7003CB0063D_TypeDefinitionIndex = 80907;

class Class_2_1D5DE7003CB0063D : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::Class_1_049B9A4D827304A8* BGKEEIDDGOB; // 0x20
	::System::String* IIHFKAGKEMC; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_1D5DE7003CB0063D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D5DE7003CB0063D_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D5DE7003CB0063D_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D5DE7003CB0063D_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D5DE7003CB0063D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
