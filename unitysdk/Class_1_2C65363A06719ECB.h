#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2C65363A06719ECB_Class_1_FDE81281E0A8BBF1;
class Class_1_469A5FF005CF3F5C;
class Class_1_9B3591E177CAF203;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace RPGTools::Timeline { class VirtualCameraNoiseConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2C65363A06719ECB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC22FDE0)
#define CLASS_1_2C65363A06719ECB_METHOD_1_22FF9A78A8EACE10_OFFSET UNITYSDK_OFFSET(0xC230C90)
#define CLASS_1_2C65363A06719ECB_METHOD_1_4B1E26575F5F2545_OFFSET UNITYSDK_OFFSET(0xC2303F0)
#define CLASS_1_2C65363A06719ECB_METHOD_1_6C78BE0F58E59620_OFFSET UNITYSDK_OFFSET(0xC230500)
#define CLASS_1_2C65363A06719ECB_METHOD_1_7F1787152CE4767B_OFFSET UNITYSDK_OFFSET(0xC2302C0)
#define CLASS_1_2C65363A06719ECB_METHOD_1_89A8E479036925D6_OFFSET UNITYSDK_OFFSET(0xC230630)
#define CLASS_1_2C65363A06719ECB_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xC230080)
#define CLASS_1_2C65363A06719ECB_METHOD_1_C152C26DEFE0BAA5_OFFSET UNITYSDK_OFFSET(0xC230560)
#define CLASS_1_2C65363A06719ECB_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0xC22FE30)
#define CLASS_1_2C65363A06719ECB_METHOD_1_CDFCB4F1AB271783_OFFSET UNITYSDK_OFFSET(0xC2305D0)
#define CLASS_1_2C65363A06719ECB_METHOD_1_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0xC22FEF0)
#define CLASS_1_2C65363A06719ECB_METHOD_1_DA610FEA2EB85750_OFFSET UNITYSDK_OFFSET(0xC230FF0)
#define CLASS_1_2C65363A06719ECB_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0xC230110)
#define CLASS_1_2C65363A06719ECB__CCTOR_OFFSET UNITYSDK_OFFSET(0xC231710)
#define CLASS_1_2C65363A06719ECB__CTOR_OFFSET UNITYSDK_OFFSET(0xC231650)

inline static constexpr unsigned int Class_1_2C65363A06719ECB_TypeDefinitionIndex = 60703;

class Class_1_2C65363A06719ECB : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_OELILMHMLIG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C65363A06719ECB_TypeDefinitionIndex)->GetStaticField(0x15AA0);
	}
	::System::Collections::Generic::List_1<::Class_1_469A5FF005CF3F5C*>* GFEGDMAMPBF; // 0x10
	::Class_1_9B3591E177CAF203* DIOOIEHBNHJ; // 0x18
	::UnityEngine::Transform* GMPKDNDENLK; // 0x20
	::System::Collections::Generic::List_1<::Class_1_2C65363A06719ECB_Class_1_FDE81281E0A8BBF1*>* BCKPDLCEFHH; // 0x28
	::RPGTools::Timeline::VirtualCameraNoiseConfig* IPINEPCDFDO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_469A5FF005CF3F5C*>* MAIFJIALPLJ; // 0x38
	::System::Nullable_1<::System::Single> DLFPFLOAGGG; // 0x40
	::UnityEngine::Vector3 JHLJODHMEMP; // 0x48
	::UnityEngine::Vector3 LOMMNBIANJO; // 0x54
	::System::Nullable_1<::System::Single> OFABLKBBNHC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_1_7F1787152CE4767B(::System::String* a1, ::Class_1_469A5FF005CF3F5C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_469A5FF005CF3F5C*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_7F1787152CE4767B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4B1E26575F5F2545(::System::String* a1, ::Class_1_469A5FF005CF3F5C*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_469A5FF005CF3F5C*&))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_4B1E26575F5F2545_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D8E6DC0B27699F85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_D8E6DC0B27699F85_OFFSET))(this);
	}

	::System::Void Method_1_6C78BE0F58E59620(::Class_1_9B3591E177CAF203* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B3591E177CAF203*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_6C78BE0F58E59620_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::Class_1_469A5FF005CF3F5C* Method_1_C152C26DEFE0BAA5(::RPG::GameCore::VCameraShakeV2* a1)
	{
		return ((::Class_1_469A5FF005CF3F5C*(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_C152C26DEFE0BAA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_CDFCB4F1AB271783(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_CDFCB4F1AB271783_OFFSET))(this, a1);
	}

	::System::Void Method_1_89A8E479036925D6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_89A8E479036925D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_22FF9A78A8EACE10(::RPGTools::Timeline::VirtualCameraNoiseConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VirtualCameraNoiseConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_22FF9A78A8EACE10_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA610FEA2EB85750(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_DA610FEA2EB85750_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}
};
