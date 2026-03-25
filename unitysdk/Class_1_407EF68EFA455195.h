#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_407EF68EFA455195_ActionState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_407EF68EFA455195_METHOD_1_73FB9DE4849AF1B5_1_OFFSET UNITYSDK_OFFSET(0x115F1FB0)
#define CLASS_1_407EF68EFA455195_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x115F1E40)
#define CLASS_1_407EF68EFA455195_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x115F2030)
#define CLASS_1_407EF68EFA455195_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x115F1F60)
#define CLASS_1_407EF68EFA455195_METHOD_1_F14F8BD70CDDE8D1_OFFSET UNITYSDK_OFFSET(0x115F1EC0)
#define CLASS_1_407EF68EFA455195__CTOR_OFFSET UNITYSDK_OFFSET(0x115F1E30)

inline static constexpr unsigned int Class_1_407EF68EFA455195_TypeDefinitionIndex = 49768;

class Class_1_407EF68EFA455195 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Action_1<::System::String*>* Field_1_1; // 0x18
	::Class_1_407EF68EFA455195_ActionState Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Action_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_407EF68EFA455195__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_407EF68EFA455195_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_F14F8BD70CDDE8D1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_407EF68EFA455195_METHOD_1_F14F8BD70CDDE8D1_OFFSET))(this, a1);
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
