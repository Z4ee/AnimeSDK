#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ED80D3EC77F13F93;
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace System { class Type; }

#define CLASS_1_9E7D6BC404B70C4D_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0x18B64890)
#define CLASS_1_9E7D6BC404B70C4D_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x18B64830)
#define CLASS_1_9E7D6BC404B70C4D_METHOD_1_696B98EE7CF243E9_OFFSET UNITYSDK_OFFSET(0x18B648E0)
#define CLASS_1_9E7D6BC404B70C4D__CTOR_OFFSET UNITYSDK_OFFSET(0x18B647B0)

inline static constexpr unsigned int Class_1_9E7D6BC404B70C4D_TypeDefinitionIndex = 76253;

class Class_1_9E7D6BC404B70C4D : public ::System::Object
{
public:
	::RPG::Client::FateRin::Logging::ILogger* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::FateRin::Logging::ILoggerFactory* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + CLASS_1_9E7D6BC404B70C4D__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E7D6BC404B70C4D_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E7D6BC404B70C4D_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_696B98EE7CF243E9(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_9E7D6BC404B70C4D_METHOD_1_696B98EE7CF243E9_OFFSET))(this, a1);
	}
};
