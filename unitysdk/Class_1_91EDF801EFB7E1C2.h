#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7578AC7702FD0A38;
class Class_1_CC0F8AEEF044EF7C;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_91EDF801EFB7E1C2_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC719FC0)
#define CLASS_1_91EDF801EFB7E1C2_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xC719FD0)
#define CLASS_1_91EDF801EFB7E1C2_METHOD_1_98F5AAA93BF786AA_OFFSET UNITYSDK_OFFSET(0xC71A040)
#define CLASS_1_91EDF801EFB7E1C2_METHOD_1_9E9E31C8C52B2D9F_OFFSET UNITYSDK_OFFSET(0xC71A2D0)
#define CLASS_1_91EDF801EFB7E1C2_METHOD_1_A4809B95D76424A4_OFFSET UNITYSDK_OFFSET(0xC71A090)
#define CLASS_1_91EDF801EFB7E1C2_METHOD_1_BEEEB78F79566EBD_OFFSET UNITYSDK_OFFSET(0xC71A210)
#define CLASS_1_91EDF801EFB7E1C2__CTOR_OFFSET UNITYSDK_OFFSET(0xC719FE0)

inline static constexpr unsigned int Class_1_91EDF801EFB7E1C2_TypeDefinitionIndex = 56632;

class Class_1_91EDF801EFB7E1C2 : public ::System::Object
{
public:
	::Class_1_CC0F8AEEF044EF7C* _Config_k__BackingField; // 0x10
	::Class_1_7578AC7702FD0A38* _Progress_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_CC0F8AEEF044EF7C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC0F8AEEF044EF7C*))((::PBYTE)hIl2Cpp + CLASS_1_91EDF801EFB7E1C2__CTOR_OFFSET))(this, a1);
	}

	::Class_1_CC0F8AEEF044EF7C* get_Config()
	{
		return ((::Class_1_CC0F8AEEF044EF7C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EDF801EFB7E1C2_GET_CONFIG_OFFSET))(this);
	}

	::Class_1_7578AC7702FD0A38* get_Progress()
	{
		return ((::Class_1_7578AC7702FD0A38*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EDF801EFB7E1C2_GET_PROGRESS_OFFSET))(this);
	}

	::System::Void Method_1_98F5AAA93BF786AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EDF801EFB7E1C2_METHOD_1_98F5AAA93BF786AA_OFFSET))(this);
	}

	::System::Boolean Method_1_A4809B95D76424A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EDF801EFB7E1C2_METHOD_1_A4809B95D76424A4_OFFSET))(this);
	}

	::System::Boolean Method_1_BEEEB78F79566EBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EDF801EFB7E1C2_METHOD_1_BEEEB78F79566EBD_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_1_9E9E31C8C52B2D9F()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EDF801EFB7E1C2_METHOD_1_9E9E31C8C52B2D9F_OFFSET))(this);
	}
};
