#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_432942E6E9915B35.h"
#include "unitysdk/Enum_3_D3876C00D1C08DCB.h"
#include "unitysdk/Enum_3_F27E25827C684939.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7D2A004C54221D51_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x170106E0)
#define CLASS_3_7D2A004C54221D51_METHOD_3_7E8A440C0941779C_OFFSET UNITYSDK_OFFSET(0x17010840)
#define CLASS_3_7D2A004C54221D51_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17010B80)
#define CLASS_3_7D2A004C54221D51_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x170107C0)
#define CLASS_3_7D2A004C54221D51_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17010610)
#define CLASS_3_7D2A004C54221D51__CCTOR_OFFSET UNITYSDK_OFFSET(0x17010730)
#define CLASS_3_7D2A004C54221D51__CTOR_OFFSET UNITYSDK_OFFSET(0x170107B0)

inline static constexpr unsigned int Class_3_7D2A004C54221D51_TypeDefinitionIndex = 68384;

class Class_3_7D2A004C54221D51 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_19 = 0xBE; // 0x0
	::System::Action* Field_3_12; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_3_0; // 0x50
	::System::String* Field_3_6; // 0x58
	::System::Single Field_3_15; // 0x60
	::Enum_3_F27E25827C684939 Field_3_7; // 0x64
	::System::Int32 Field_3_11; // 0x68
	::System::Single Field_3_10; // 0x6C
	::System::Single Field_3_4; // 0x70
	::System::Single Field_3_14; // 0x74
	::Enum_3_D3876C00D1C08DCB Field_3_5; // 0x78
	::System::Single Field_3_9; // 0x7C
	::Enum_3_432942E6E9915B35 Field_3_8; // 0x80
	::System::Boolean Field_3_13; // 0x84

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7D2A004C54221D51__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D2A004C54221D51__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D2A004C54221D51_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D2A004C54221D51_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_7D2A004C54221D51* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_7D2A004C54221D51*(*)())((::PBYTE)hIl2Cpp + CLASS_3_7D2A004C54221D51_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_7E8A440C0941779C(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::Enum_3_F27E25827C684939 a2, ::System::String* a3, ::Enum_3_D3876C00D1C08DCB a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7, ::System::Single a8, ::Enum_3_432942E6E9915B35 a9, ::System::Single a10, ::System::Single a11, ::System::Boolean a12, ::System::Action* a13)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Enum_3_F27E25827C684939, ::System::String*, ::Enum_3_D3876C00D1C08DCB, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::Enum_3_432942E6E9915B35, ::System::Single, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_7D2A004C54221D51_METHOD_3_7E8A440C0941779C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D2A004C54221D51_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
