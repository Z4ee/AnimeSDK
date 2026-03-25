#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SmellPathGraph; }
namespace RPG::Client { class SpecialVisionSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A8EF306B45FE2EA1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB277240)
#define CLASS_1_A8EF306B45FE2EA1_METHOD_1_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0xB277070)
#define CLASS_1_A8EF306B45FE2EA1_METHOD_1_1C72D5A3DA046C59_OFFSET UNITYSDK_OFFSET(0xB276AF0)
#define CLASS_1_A8EF306B45FE2EA1_METHOD_1_64E4B9936512B265_OFFSET UNITYSDK_OFFSET(0xB276BA0)
#define CLASS_1_A8EF306B45FE2EA1_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0xB276C30)
#define CLASS_1_A8EF306B45FE2EA1_METHOD_1_9D8893CD130270AA_OFFSET UNITYSDK_OFFSET(0xB276EC0)
#define CLASS_1_A8EF306B45FE2EA1__CTOR_OFFSET UNITYSDK_OFFSET(0xB276AB0)

inline static constexpr unsigned int Class_1_A8EF306B45FE2EA1_TypeDefinitionIndex = 49412;

class Class_1_A8EF306B45FE2EA1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::SmellPathGraph*>* Field_1_1; // 0x10
	::RPG::Client::SpecialVisionSystem* Field_1_0; // 0x18

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

	::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8EF306B45FE2EA1_METHOD_1_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_1_9D8893CD130270AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8EF306B45FE2EA1_METHOD_1_9D8893CD130270AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8EF306B45FE2EA1_METHOD_1_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8EF306B45FE2EA1_DISPOSE_OFFSET))(this);
	}
};
