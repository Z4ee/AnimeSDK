#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_407EF68EFA455195_ActionState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_407EF68EFA455195_METHOD_1_73FB9DE4849AF1B5_1_OFFSET UNITYSDK_OFFSET(0xBE81640)
#define CLASS_1_407EF68EFA455195_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0xBE814D0)
#define CLASS_1_407EF68EFA455195_METHOD_1_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0xBE81550)
#define CLASS_1_407EF68EFA455195_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBE816C0)
#define CLASS_1_407EF68EFA455195_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBE815F0)
#define CLASS_1_407EF68EFA455195__CTOR_OFFSET UNITYSDK_OFFSET(0xBE814C0)

inline static constexpr unsigned int Class_1_407EF68EFA455195_TypeDefinitionIndex = 61460;

class Class_1_407EF68EFA455195 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* BHDHBGBMEGB; // 0x10
	::System::String* FGMKCOANOOK; // 0x18
	::Class_1_407EF68EFA455195_ActionState DLNIGFGLPLJ; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Action_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_407EF68EFA455195__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_407EF68EFA455195_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_407EF68EFA455195_METHOD_1_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_407EF68EFA455195_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_73FB9DE4849AF1B5_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_407EF68EFA455195_METHOD_1_73FB9DE4849AF1B5_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_407EF68EFA455195_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
