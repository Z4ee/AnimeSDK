#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { template <typename T> class ICollector_1; }
namespace System { class String; }

#define CLASS_1_6D4EA93A8A50B3F8_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD1B3750)
#define CLASS_1_6D4EA93A8A50B3F8_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD1B1ED0)
#define CLASS_1_6D4EA93A8A50B3F8_METHOD_1_7959EEC5165783D0_OFFSET UNITYSDK_OFFSET(0xD1B2D50)
#define CLASS_1_6D4EA93A8A50B3F8_METHOD_1_93D54F607083DE87_OFFSET UNITYSDK_OFFSET(0xD1B2180)
#define CLASS_1_6D4EA93A8A50B3F8_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xD1B3330)
#define CLASS_1_6D4EA93A8A50B3F8__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B1DA0)

inline static constexpr unsigned int Class_1_6D4EA93A8A50B3F8_TypeDefinitionIndex = 62840;

class Class_1_6D4EA93A8A50B3F8 : public ::System::Object
{
public:
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x18
	::Entitas::ICollector_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_6D4EA93A8A50B3F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D4EA93A8A50B3F8_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_93D54F607083DE87(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_6D4EA93A8A50B3F8_METHOD_1_93D54F607083DE87_OFFSET))(this, a1);
	}

	::System::Void Method_1_7959EEC5165783D0(::Class_2_9DD8A46984F1AFFD* a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Single, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D4EA93A8A50B3F8_METHOD_1_7959EEC5165783D0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D4EA93A8A50B3F8_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D4EA93A8A50B3F8_EXECUTE_OFFSET))(this);
	}
};
