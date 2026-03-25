#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;

#define CLASS_1_D5DA62FC7DE2D532_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113EAB80)
#define CLASS_1_D5DA62FC7DE2D532_METHOD_1_6E57D3559C10FFA9_1_OFFSET UNITYSDK_OFFSET(0x113EAA20)
#define CLASS_1_D5DA62FC7DE2D532_METHOD_1_6E57D3559C10FFA9_2_OFFSET UNITYSDK_OFFSET(0x113EAA70)
#define CLASS_1_D5DA62FC7DE2D532_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x113EA9D0)
#define CLASS_1_D5DA62FC7DE2D532_METHOD_1_BCE67394A1C67373_OFFSET UNITYSDK_OFFSET(0x113EAAC0)
#define CLASS_1_D5DA62FC7DE2D532_METHOD_1_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x113EA980)
#define CLASS_1_D5DA62FC7DE2D532_METHOD_1_C32CC33BF0371575_OFFSET UNITYSDK_OFFSET(0x113EA890)
#define CLASS_1_D5DA62FC7DE2D532_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x113EA850)
#define CLASS_1_D5DA62FC7DE2D532_METHOD_1_DC3F5F44A771425C_OFFSET UNITYSDK_OFFSET(0x113EA900)
#define CLASS_1_D5DA62FC7DE2D532_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x113EA800)
#define CLASS_1_D5DA62FC7DE2D532__CTOR_OFFSET UNITYSDK_OFFSET(0x113EABC0)

inline static constexpr unsigned int Class_1_D5DA62FC7DE2D532_TypeDefinitionIndex = 49095;

class Class_1_D5DA62FC7DE2D532 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5DA62FC7DE2D532__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_1_D5DA62FC7DE2D532_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5DA62FC7DE2D532_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C32CC33BF0371575(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_D5DA62FC7DE2D532_METHOD_1_C32CC33BF0371575_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC3F5F44A771425C(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_D5DA62FC7DE2D532_METHOD_1_DC3F5F44A771425C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D5DA62FC7DE2D532_METHOD_1_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D5DA62FC7DE2D532_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D5DA62FC7DE2D532_METHOD_1_6E57D3559C10FFA9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D5DA62FC7DE2D532_METHOD_1_6E57D3559C10FFA9_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCE67394A1C67373(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + CLASS_1_D5DA62FC7DE2D532_METHOD_1_BCE67394A1C67373_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5DA62FC7DE2D532_DISPOSE_OFFSET))(this);
	}
};
