#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_751;
class Class_1_BE39D2720CC67E7D_Class_1_CEB3DFAF65066037;
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BE39D2720CC67E7D_METHOD_1_543F8938BA868A0C_OFFSET UNITYSDK_OFFSET(0x13A413F0)
#define CLASS_1_BE39D2720CC67E7D_METHOD_1_6958C206AF004E7E_OFFSET UNITYSDK_OFFSET(0x13A40EA0)
#define CLASS_1_BE39D2720CC67E7D_METHOD_1_7DCB4D6CDD47BFD8_OFFSET UNITYSDK_OFFSET(0x13A41800)
#define CLASS_1_BE39D2720CC67E7D_METHOD_1_851F024CF133AF98_OFFSET UNITYSDK_OFFSET(0x13A41AF0)
#define CLASS_1_BE39D2720CC67E7D_METHOD_1_A64DBD793B0C1247_OFFSET UNITYSDK_OFFSET(0x13A41510)
#define CLASS_1_BE39D2720CC67E7D_METHOD_1_E6821B271C8F9C7E_OFFSET UNITYSDK_OFFSET(0x13A41200)
#define CLASS_1_BE39D2720CC67E7D__CTOR_OFFSET UNITYSDK_OFFSET(0x13A41D10)

inline static constexpr unsigned int Class_1_BE39D2720CC67E7D_TypeDefinitionIndex = 59757;

class Class_1_BE39D2720CC67E7D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_BE39D2720CC67E7D_Class_1_CEB3DFAF65066037*>* MEEPDDMNLCH; // 0x10
	::System::Int32 MHBMNAAGDHE; // 0x18
	::System::Int32 GMJDIKGPABK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE39D2720CC67E7D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6958C206AF004E7E(::RPG::GameCore::PropSoundAttenuation* a1, ::Class_0_16E4307DCC419505_751* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundAttenuation*, ::Class_0_16E4307DCC419505_751*))((::PBYTE)hIl2Cpp + CLASS_1_BE39D2720CC67E7D_METHOD_1_6958C206AF004E7E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_543F8938BA868A0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE39D2720CC67E7D_METHOD_1_543F8938BA868A0C_OFFSET))(this);
	}

	::System::Void Method_1_A64DBD793B0C1247(::RPG::GameCore::PropSoundAttenuation* a1, ::Class_0_16E4307DCC419505_751* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundAttenuation*, ::Class_0_16E4307DCC419505_751*))((::PBYTE)hIl2Cpp + CLASS_1_BE39D2720CC67E7D_METHOD_1_A64DBD793B0C1247_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7DCB4D6CDD47BFD8(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_1_BE39D2720CC67E7D_METHOD_1_7DCB4D6CDD47BFD8_OFFSET))(this, a1);
	}

	::Class_1_BE39D2720CC67E7D_Class_1_CEB3DFAF65066037* Method_1_E6821B271C8F9C7E(::System::String* a1)
	{
		return ((::Class_1_BE39D2720CC67E7D_Class_1_CEB3DFAF65066037*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE39D2720CC67E7D_METHOD_1_E6821B271C8F9C7E_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_851F024CF133AF98(::RPG::GameCore::TransformComponent* a1, ::RPG::GameCore::PropSoundAttenuation* a2, ::Class_0_16E4307DCC419505_751* a3)
	{
		return ((::System::Single(*)(::RPG::GameCore::TransformComponent*, ::RPG::GameCore::PropSoundAttenuation*, ::Class_0_16E4307DCC419505_751*))((::PBYTE)hIl2Cpp + CLASS_1_BE39D2720CC67E7D_METHOD_1_851F024CF133AF98_OFFSET))(a1, a2, a3);
	}
};
