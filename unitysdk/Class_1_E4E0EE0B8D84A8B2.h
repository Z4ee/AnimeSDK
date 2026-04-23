#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RecordPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5_26;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_E4E0EE0B8D84A8B2_METHOD_1_238AB9E1DAED58DE_OFFSET UNITYSDK_OFFSET(0x96B3470)
#define CLASS_1_E4E0EE0B8D84A8B2_METHOD_1_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x96B38B0)
#define CLASS_1_E4E0EE0B8D84A8B2_METHOD_1_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x96B33D0)
#define CLASS_1_E4E0EE0B8D84A8B2_METHOD_1_E5EE09C33904CCDC_OFFSET UNITYSDK_OFFSET(0x96B3420)
#define CLASS_1_E4E0EE0B8D84A8B2_METHOD_1_FF63E816B4D956CD_OFFSET UNITYSDK_OFFSET(0x96B3640)
#define CLASS_1_E4E0EE0B8D84A8B2__CTOR_OFFSET UNITYSDK_OFFSET(0x96B3350)

inline static constexpr unsigned int Class_1_E4E0EE0B8D84A8B2_TypeDefinitionIndex = 66920;

class Class_1_E4E0EE0B8D84A8B2 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::RecordPropertyType, ::Class_1_83665B095F1535B5_26*>* Field_1_2; // 0x18
	::UnityEngine::Behaviour* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4E0EE0B8D84A8B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E4E0EE0B8D84A8B2_METHOD_1_C433AF37CE9D6E5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E5EE09C33904CCDC(::UnityEngine::Behaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + CLASS_1_E4E0EE0B8D84A8B2_METHOD_1_E5EE09C33904CCDC_OFFSET))(this, a1);
	}

	::System::Void Method_1_238AB9E1DAED58DE(::RPG::Client::RecordPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RecordPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_E4E0EE0B8D84A8B2_METHOD_1_238AB9E1DAED58DE_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF63E816B4D956CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4E0EE0B8D84A8B2_METHOD_1_FF63E816B4D956CD_OFFSET))(this);
	}

	::System::String* Method_1_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4E0EE0B8D84A8B2_METHOD_1_C101CD8C5CF89A5A_OFFSET))(this);
	}
};
