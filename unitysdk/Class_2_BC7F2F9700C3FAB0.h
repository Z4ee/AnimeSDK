#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class AdventureCharacterController; }

#define CLASS_2_BC7F2F9700C3FAB0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17982F10)
#define CLASS_2_BC7F2F9700C3FAB0_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x179831C0)
#define CLASS_2_BC7F2F9700C3FAB0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x179830A0)
#define CLASS_2_BC7F2F9700C3FAB0_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17982FC0)
#define CLASS_2_BC7F2F9700C3FAB0_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x17983140)
#define CLASS_2_BC7F2F9700C3FAB0_METHOD_2_A4FBBA3EA6576936_OFFSET UNITYSDK_OFFSET(0x179830F0)
#define CLASS_2_BC7F2F9700C3FAB0_TICK_OFFSET UNITYSDK_OFFSET(0x17982F60)
#define CLASS_2_BC7F2F9700C3FAB0__CTOR_OFFSET UNITYSDK_OFFSET(0x17982F00)

inline static constexpr unsigned int Class_2_BC7F2F9700C3FAB0_TypeDefinitionIndex = 54789;

class Class_2_BC7F2F9700C3FAB0 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC7F2F9700C3FAB0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC7F2F9700C3FAB0_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BC7F2F9700C3FAB0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC7F2F9700C3FAB0_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC7F2F9700C3FAB0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_A4FBBA3EA6576936()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC7F2F9700C3FAB0_METHOD_2_A4FBBA3EA6576936_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC7F2F9700C3FAB0_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC7F2F9700C3FAB0_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}
};
