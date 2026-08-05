#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_61A5922E5046F385_5_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xE52D8A0)
#define CLASS_3_61A5922E5046F385_5_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xE52DB00)
#define CLASS_3_61A5922E5046F385_5_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0xE52DA00)
#define CLASS_3_61A5922E5046F385_5_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xE52D7C0)
#define CLASS_3_61A5922E5046F385_5__CCTOR_OFFSET UNITYSDK_OFFSET(0xE52D8F0)
#define CLASS_3_61A5922E5046F385_5__CTOR_OFFSET UNITYSDK_OFFSET(0xE52D970)

inline static constexpr unsigned int Class_3_61A5922E5046F385_5_TypeDefinitionIndex = 63388;

class Class_3_61A5922E5046F385_5 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_16 = 0x26; // 0x0
	::System::String* Field_3_7; // 0x48
	::System::Action* Field_3_6; // 0x50
	::System::Action_1<::System::Boolean>* Field_3_5; // 0x58
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Single, ::System::Single>*>* Field_3_17; // 0x60
	::System::Boolean Field_3_8; // 0x68
	::UnityEngine::Vector3 Field_3_10; // 0x6C
	::System::Single Field_3_11; // 0x78
	::System::Single Field_3_4; // 0x7C
	::UnityEngine::Vector3 Field_3_9; // 0x80
	::System::Single Field_3_0; // 0x8C
	::System::Single Field_3_1; // 0x90
	::System::Single Field_3_18; // 0x94
	::UnityEngine::Vector3 Field_3_15; // 0x98
	::System::Single Field_3_14; // 0xA4
	::System::Single Field_3_19; // 0xA8
	::System::Single Field_3_13; // 0xAC
	::System::Single Field_3_12; // 0xB0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_61A5922E5046F385_5* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_61A5922E5046F385_5*(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_5_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
