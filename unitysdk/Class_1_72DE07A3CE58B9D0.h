#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ECF7FC4286755982;
namespace RPG::GameCore { class TAMonoTickLodConfig; }
namespace RPG::GameCore { class TAMonoTickLodTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_72DE07A3CE58B9D0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CB97D0)
#define CLASS_1_72DE07A3CE58B9D0_METHOD_1_227162450C3F3328_OFFSET UNITYSDK_OFFSET(0x8CB9380)
#define CLASS_1_72DE07A3CE58B9D0_METHOD_1_91B902E2F7112B2E_OFFSET UNITYSDK_OFFSET(0x8CB95A0)
#define CLASS_1_72DE07A3CE58B9D0_METHOD_1_E79EF21F0A1F4065_OFFSET UNITYSDK_OFFSET(0x8CB9700)
#define CLASS_1_72DE07A3CE58B9D0__CTOR_OFFSET UNITYSDK_OFFSET(0x8CB9880)

inline static constexpr unsigned int Class_1_72DE07A3CE58B9D0_TypeDefinitionIndex = 60643;

class Class_1_72DE07A3CE58B9D0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TAMonoTickLodTemplate*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_ECF7FC4286755982*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72DE07A3CE58B9D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_227162450C3F3328(::RPG::GameCore::TAMonoTickLodConfig* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TAMonoTickLodConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_72DE07A3CE58B9D0_METHOD_1_227162450C3F3328_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_91B902E2F7112B2E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_72DE07A3CE58B9D0_METHOD_1_91B902E2F7112B2E_OFFSET))(this, a1);
	}

	::Class_1_ECF7FC4286755982* Method_1_E79EF21F0A1F4065(::System::String* a1)
	{
		return ((::Class_1_ECF7FC4286755982*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_72DE07A3CE58B9D0_METHOD_1_E79EF21F0A1F4065_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72DE07A3CE58B9D0_DISPOSE_OFFSET))(this);
	}
};
