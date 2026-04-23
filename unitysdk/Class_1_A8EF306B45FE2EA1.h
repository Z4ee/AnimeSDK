#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SmellPathGraph; }
namespace RPG::Client { class SpecialVisionSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A8EF306B45FE2EA1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97A7EC0)
#define CLASS_1_A8EF306B45FE2EA1_METHOD_1_1C72D5A3DA046C59_OFFSET UNITYSDK_OFFSET(0x97A7800)
#define CLASS_1_A8EF306B45FE2EA1_METHOD_1_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x97A7D20)
#define CLASS_1_A8EF306B45FE2EA1_METHOD_1_64E4B9936512B265_OFFSET UNITYSDK_OFFSET(0x97A78B0)
#define CLASS_1_A8EF306B45FE2EA1_METHOD_1_9D8893CD130270AA_OFFSET UNITYSDK_OFFSET(0x97A7BA0)
#define CLASS_1_A8EF306B45FE2EA1_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x97A7940)
#define CLASS_1_A8EF306B45FE2EA1__CTOR_OFFSET UNITYSDK_OFFSET(0x97A77C0)

inline static constexpr unsigned int Class_1_A8EF306B45FE2EA1_TypeDefinitionIndex = 56209;

class Class_1_A8EF306B45FE2EA1 : public ::System::Object
{
public:
	::RPG::Client::SpecialVisionSystem* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::SmellPathGraph*>* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::SpecialVisionSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SpecialVisionSystem*))((::PBYTE)hIl2Cpp + CLASS_1_A8EF306B45FE2EA1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C72D5A3DA046C59(::RPG::Client::SmellPathGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SmellPathGraph*))((::PBYTE)hIl2Cpp + CLASS_1_A8EF306B45FE2EA1_METHOD_1_1C72D5A3DA046C59_OFFSET))(this, a1);
	}

	::System::Void Method_1_64E4B9936512B265(::RPG::Client::SmellPathGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SmellPathGraph*))((::PBYTE)hIl2Cpp + CLASS_1_A8EF306B45FE2EA1_METHOD_1_64E4B9936512B265_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8EF306B45FE2EA1_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_1_9D8893CD130270AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8EF306B45FE2EA1_METHOD_1_9D8893CD130270AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8EF306B45FE2EA1_METHOD_1_55B8349E0B606444_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8EF306B45FE2EA1_DISPOSE_OFFSET))(this);
	}
};
