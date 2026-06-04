#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_948;
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E85115A4C331A9DA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14223C70)
#define CLASS_1_E85115A4C331A9DA_METHOD_1_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x14222F40)
#define CLASS_1_E85115A4C331A9DA_METHOD_1_87C639547921B854_OFFSET UNITYSDK_OFFSET(0x14223550)
#define CLASS_1_E85115A4C331A9DA_METHOD_1_A4D63F63E7FDEA56_OFFSET UNITYSDK_OFFSET(0x14223280)
#define CLASS_1_E85115A4C331A9DA_METHOD_1_F04C04E6DB6D6224_OFFSET UNITYSDK_OFFSET(0x142238D0)
#define CLASS_1_E85115A4C331A9DA__CTOR_OFFSET UNITYSDK_OFFSET(0x14222EA0)

inline static constexpr unsigned int Class_1_E85115A4C331A9DA_TypeDefinitionIndex = 64663;

class Class_1_E85115A4C331A9DA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_1_0; // 0x10
	::RPG::GameCore::CharacterReplaceMaterialRenderList* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_948* Field_1_2; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_948* a1, ::RPG::GameCore::CharacterReplaceMaterialRenderList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_948*, ::RPG::GameCore::CharacterReplaceMaterialRenderList*))((::PBYTE)hIl2Cpp + CLASS_1_E85115A4C331A9DA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85115A4C331A9DA_METHOD_1_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85115A4C331A9DA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F04C04E6DB6D6224()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85115A4C331A9DA_METHOD_1_F04C04E6DB6D6224_OFFSET))(this);
	}

	::System::UInt32 Method_1_A4D63F63E7FDEA56(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E85115A4C331A9DA_METHOD_1_A4D63F63E7FDEA56_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_87C639547921B854(::System::String* a1, ::System::UInt32 a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_E85115A4C331A9DA_METHOD_1_87C639547921B854_OFFSET))(this, a1, a2, a3);
	}
};
