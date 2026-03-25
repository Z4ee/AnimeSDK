#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F3646635E7F85090;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EA9900AFB4A38403_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB8C2D90)
#define CLASS_1_EA9900AFB4A38403_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB8C3C30)
#define CLASS_1_EA9900AFB4A38403_METHOD_1_4ABCFD2F04C79E23_OFFSET UNITYSDK_OFFSET(0xB8C2E30)
#define CLASS_1_EA9900AFB4A38403_METHOD_1_7879143F657C10D8_OFFSET UNITYSDK_OFFSET(0xB8C2F60)
#define CLASS_1_EA9900AFB4A38403_METHOD_1_ED6E59E0673A3347_OFFSET UNITYSDK_OFFSET(0xB8C3040)
#define CLASS_1_EA9900AFB4A38403__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C3C90)

inline static constexpr unsigned int Class_1_EA9900AFB4A38403_TypeDefinitionIndex = 45928;

class Class_1_EA9900AFB4A38403 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F3646635E7F85090*>* Field_1_5; // 0x10
	::System::Int32 Field_1_3; // 0x18
	::System::Int32 Field_1_4; // 0x1C
	::System::Boolean Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::System::Single Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA9900AFB4A38403__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA9900AFB4A38403_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::Class_1_F3646635E7F85090* Method_1_4ABCFD2F04C79E23()
	{
		return ((::Class_1_F3646635E7F85090*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA9900AFB4A38403_METHOD_1_4ABCFD2F04C79E23_OFFSET))(this);
	}

	::System::Boolean Method_1_7879143F657C10D8(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA9900AFB4A38403_METHOD_1_7879143F657C10D8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_ED6E59E0673A3347(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Boolean& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_EA9900AFB4A38403_METHOD_1_ED6E59E0673A3347_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA9900AFB4A38403_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
