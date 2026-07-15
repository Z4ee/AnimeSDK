#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1300;
class Class_1_2C0D14CC520BF272;
class Class_1_384B00F01F0CAFA9;
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace System { class String; }

#define CLASS_1_57A077DBC3E5B8EF_METHOD_1_870444CFA4CA9AF1_OFFSET UNITYSDK_OFFSET(0x161EA130)
#define CLASS_1_57A077DBC3E5B8EF_METHOD_1_AC0195DC691C588E_OFFSET UNITYSDK_OFFSET(0x161EA640)
#define CLASS_1_57A077DBC3E5B8EF_METHOD_1_DFF3374D26AD1858_OFFSET UNITYSDK_OFFSET(0x161EA0D0)
#define CLASS_1_57A077DBC3E5B8EF__CTOR_OFFSET UNITYSDK_OFFSET(0x161EA000)

inline static constexpr unsigned int Class_1_57A077DBC3E5B8EF_TypeDefinitionIndex = 76244;

class Class_1_57A077DBC3E5B8EF : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_1300* Field_1_1; // 0x18
	::Class_1_384B00F01F0CAFA9* Field_1_2; // 0x20
	::RPG::Client::FateRin::Logging::ILogger* Field_1_3; // 0x28
	::Class_1_2C0D14CC520BF272* Field_1_4; // 0x30
	::RPG::Client::TextID Field_1_5; // 0x38

	::System::Void _ctor(::Class_0_16E4307DCC419505_1300* a1, ::RPG::Client::FateRin::Logging::ILogger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1300*, ::RPG::Client::FateRin::Logging::ILogger*))((::PBYTE)hIl2Cpp + CLASS_1_57A077DBC3E5B8EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFF3374D26AD1858(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_57A077DBC3E5B8EF_METHOD_1_DFF3374D26AD1858_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_870444CFA4CA9AF1(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_57A077DBC3E5B8EF_METHOD_1_870444CFA4CA9AF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC0195DC691C588E(::Il2CppArray<::RPG::GameCore::FixPoint>* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_57A077DBC3E5B8EF_METHOD_1_AC0195DC691C588E_OFFSET))(this, a1, a2);
	}
};
