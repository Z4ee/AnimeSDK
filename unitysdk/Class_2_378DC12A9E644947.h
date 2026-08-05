#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CC6CE2E6BBD95BBD.h"

class Class_3_C3F0E3B5AB5977AE_13;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_378DC12A9E644947_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x1826AF10)
#define CLASS_2_378DC12A9E644947_METHOD_2_A71A7E27BEFF6054_1_OFFSET UNITYSDK_OFFSET(0x1826B1E0)
#define CLASS_2_378DC12A9E644947_METHOD_2_A71A7E27BEFF6054_OFFSET UNITYSDK_OFFSET(0x1826B120)
#define CLASS_2_378DC12A9E644947_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1826B090)
#define CLASS_2_378DC12A9E644947_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1826B1C0)
#define CLASS_2_378DC12A9E644947_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1826AC40)
#define CLASS_2_378DC12A9E644947_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1826ADC0)
#define CLASS_2_378DC12A9E644947__CTOR_OFFSET UNITYSDK_OFFSET(0x1826AB60)

inline static constexpr unsigned int Class_2_378DC12A9E644947_TypeDefinitionIndex = 66583;

class Class_2_378DC12A9E644947 : public ::Class_1_CC6CE2E6BBD95BBD
{
public:
	::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* Field_2_0; // 0x58

	::System::Void _ctor(::Class_3_C3F0E3B5AB5977AE_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_13*))((::PBYTE)hIl2Cpp + CLASS_2_378DC12A9E644947__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* a1, ::Class_3_C3F0E3B5AB5977AE_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::Class_3_C3F0E3B5AB5977AE_13*))((::PBYTE)hIl2Cpp + CLASS_2_378DC12A9E644947_ONTRIGGERENTER_OFFSET))(this, a1, a2);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* a1, ::Class_3_C3F0E3B5AB5977AE_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::Class_3_C3F0E3B5AB5977AE_13*))((::PBYTE)hIl2Cpp + CLASS_2_378DC12A9E644947_ONTRIGGEREXIT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_378DC12A9E644947_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_378DC12A9E644947_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A71A7E27BEFF6054(::UnityEngine::Collider* a1, ::Class_3_C3F0E3B5AB5977AE_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::Class_3_C3F0E3B5AB5977AE_13*))((::PBYTE)hIl2Cpp + CLASS_2_378DC12A9E644947_METHOD_2_A71A7E27BEFF6054_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_378DC12A9E644947_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_A71A7E27BEFF6054_1(::UnityEngine::Collider* a1, ::Class_3_C3F0E3B5AB5977AE_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::Class_3_C3F0E3B5AB5977AE_13*))((::PBYTE)hIl2Cpp + CLASS_2_378DC12A9E644947_METHOD_2_A71A7E27BEFF6054_1_OFFSET))(this, a1, a2);
	}
};
