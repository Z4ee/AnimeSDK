#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2C65363A06719ECB_Class_1_FDE81281E0A8BBF1;
class Class_1_469A5FF005CF3F5C;
class Class_1_CED0702510CFFDAF;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace RPGTools::Timeline { class VirtualCameraNoiseConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2C65363A06719ECB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8D7100)
#define CLASS_1_2C65363A06719ECB_METHOD_1_4B1E26575F5F2545_OFFSET UNITYSDK_OFFSET(0xB8D76F0)
#define CLASS_1_2C65363A06719ECB_METHOD_1_6C78BE0F58E59620_OFFSET UNITYSDK_OFFSET(0xB8D7810)
#define CLASS_1_2C65363A06719ECB_METHOD_1_708E5A65B84D5E24_OFFSET UNITYSDK_OFFSET(0xB8D7220)
#define CLASS_1_2C65363A06719ECB_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0xB8D7470)
#define CLASS_1_2C65363A06719ECB_METHOD_1_868D4D18126F6A14_OFFSET UNITYSDK_OFFSET(0xB8D7FD0)
#define CLASS_1_2C65363A06719ECB_METHOD_1_9284DF868723AF95_OFFSET UNITYSDK_OFFSET(0xB8D7870)
#define CLASS_1_2C65363A06719ECB_METHOD_1_98F5AAA93BF786AA_OFFSET UNITYSDK_OFFSET(0xB8D7150)
#define CLASS_1_2C65363A06719ECB_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB8D73E0)
#define CLASS_1_2C65363A06719ECB_METHOD_1_CAD1BFB7BC627EAA_OFFSET UNITYSDK_OFFSET(0xB8D7620)
#define CLASS_1_2C65363A06719ECB_METHOD_1_DEEE8FFCDA0D1C7C_OFFSET UNITYSDK_OFFSET(0xB8D78E0)
#define CLASS_1_2C65363A06719ECB_METHOD_1_F6586683838D99F9_OFFSET UNITYSDK_OFFSET(0xB8D8390)
#define CLASS_1_2C65363A06719ECB_METHOD_1_FCC585F890185F8B_OFFSET UNITYSDK_OFFSET(0xB8D7940)
#define CLASS_1_2C65363A06719ECB__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8D89C0)
#define CLASS_1_2C65363A06719ECB__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D8900)

inline static constexpr unsigned int Class_1_2C65363A06719ECB_TypeDefinitionIndex = 49183;

class Class_1_2C65363A06719ECB : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C65363A06719ECB_TypeDefinitionIndex)->GetStaticField(0x11640);
	}
	::UnityEngine::Transform* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_469A5FF005CF3F5C*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_469A5FF005CF3F5C*>* Field_1_1; // 0x20
	::Class_1_CED0702510CFFDAF* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::Class_1_2C65363A06719ECB_Class_1_FDE81281E0A8BBF1*>* Field_1_9; // 0x30
	::RPGTools::Timeline::VirtualCameraNoiseConfig* Field_1_8; // 0x38
	::System::Nullable_1<::System::Single> Field_1_4; // 0x40
	::UnityEngine::Vector3 Field_1_6; // 0x48
	::System::Nullable_1<::System::Single> Field_1_5; // 0x54
	::UnityEngine::Vector3 Field_1_7; // 0x5C

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

	::System::Void Method_1_98F5AAA93BF786AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_98F5AAA93BF786AA_OFFSET))(this);
	}

	::System::Void Method_1_CAD1BFB7BC627EAA(::System::String* a1, ::Class_1_469A5FF005CF3F5C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_469A5FF005CF3F5C*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_CAD1BFB7BC627EAA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4B1E26575F5F2545(::System::String* a1, ::Class_1_469A5FF005CF3F5C*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_469A5FF005CF3F5C*&))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_4B1E26575F5F2545_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_708E5A65B84D5E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_708E5A65B84D5E24_OFFSET))(this);
	}

	::System::Void Method_1_6C78BE0F58E59620(::Class_1_CED0702510CFFDAF* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CED0702510CFFDAF*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_6C78BE0F58E59620_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::Class_1_469A5FF005CF3F5C* Method_1_9284DF868723AF95(::RPG::GameCore::VCameraShakeV2* a1)
	{
		return ((::Class_1_469A5FF005CF3F5C*(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_9284DF868723AF95_OFFSET))(this, a1);
	}

	::System::Void Method_1_DEEE8FFCDA0D1C7C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_DEEE8FFCDA0D1C7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_FCC585F890185F8B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_FCC585F890185F8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_868D4D18126F6A14(::RPGTools::Timeline::VirtualCameraNoiseConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VirtualCameraNoiseConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_868D4D18126F6A14_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6586683838D99F9(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_F6586683838D99F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C65363A06719ECB_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}
};
