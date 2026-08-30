#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1331;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_9F451F4A90475892_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15595430)
#define CLASS_1_9F451F4A90475892_GET_REDDOTTYPE_OFFSET UNITYSDK_OFFSET(0x15595030)
#define CLASS_1_9F451F4A90475892_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x15595240)
#define CLASS_1_9F451F4A90475892_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x15595330)
#define CLASS_1_9F451F4A90475892_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x15595040)
#define CLASS_1_9F451F4A90475892__CTOR_OFFSET UNITYSDK_OFFSET(0x15595080)

inline static constexpr unsigned int Class_1_9F451F4A90475892_TypeDefinitionIndex = 78710;

class Class_1_9F451F4A90475892 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1331* MHBFNKIFLNN; // 0x10
	::System::String* NOIGFGJJDLB; // 0x18
	::R3::ReactiveProperty_1<::RPG::GameCore::RedDotType>* _RedDotType_k__BackingField; // 0x20
	::System::Action* KLCCHKCJDHC; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_1331* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1331*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9F451F4A90475892__CTOR_OFFSET))(this, a1, a2);
	}

	::R3::ReactiveProperty_1<::RPG::GameCore::RedDotType>* get_RedDotType()
	{
		return ((::R3::ReactiveProperty_1<::RPG::GameCore::RedDotType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F451F4A90475892_GET_REDDOTTYPE_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F451F4A90475892_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9F451F4A90475892_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F451F4A90475892_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F451F4A90475892_METHOD_1_0865E94460F11643_OFFSET))(this);
	}
};
