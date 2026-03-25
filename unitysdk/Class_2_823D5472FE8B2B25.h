#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_5F51D4049EA87B7B;
class Class_2_E2910CE9CBBA0DE5;
namespace System { class String; }

#define CLASS_2_823D5472FE8B2B25_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1110D9F0)
#define CLASS_2_823D5472FE8B2B25_METHOD_2_69E86F362D9BFD8B_OFFSET UNITYSDK_OFFSET(0x1110D770)
#define CLASS_2_823D5472FE8B2B25_TICK_OFFSET UNITYSDK_OFFSET(0x1110DAC0)
#define CLASS_2_823D5472FE8B2B25__CTOR_OFFSET UNITYSDK_OFFSET(0x1110DB60)
#define CLASS_2_823D5472FE8B2B25___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1110DB70)

inline static constexpr unsigned int Class_2_823D5472FE8B2B25_TypeDefinitionIndex = 45235;

class Class_2_823D5472FE8B2B25 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x18
	::Class_2_E2910CE9CBBA0DE5* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_823D5472FE8B2B25__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_69E86F362D9BFD8B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_823D5472FE8B2B25_METHOD_2_69E86F362D9BFD8B_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_823D5472FE8B2B25_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_823D5472FE8B2B25_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_823D5472FE8B2B25___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
