#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"

class Class_1_AC2F48BB8176C5F1;
class Class_1_E7BD46EB43F1A06F;
namespace RPG::GameCore { class RtSubModifierData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_88CBF8D1C2552219_METHOD_2_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0xB478C60)
#define CLASS_2_88CBF8D1C2552219_METHOD_2_4778B356BDF5736D_OFFSET UNITYSDK_OFFSET(0xB478540)
#define CLASS_2_88CBF8D1C2552219_METHOD_2_785067F68EE4E375_OFFSET UNITYSDK_OFFSET(0xB4784F0)
#define CLASS_2_88CBF8D1C2552219_METHOD_2_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0xB478A60)
#define CLASS_2_88CBF8D1C2552219_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4784B0)
#define CLASS_2_88CBF8D1C2552219__CTOR_OFFSET UNITYSDK_OFFSET(0xB478D10)

inline static constexpr unsigned int Class_2_88CBF8D1C2552219_TypeDefinitionIndex = 53983;

class Class_2_88CBF8D1C2552219 : public ::Class_1_8A0BE42C657CE107
{
public:
	::System::Collections::Generic::List_1<::Class_1_AC2F48BB8176C5F1*>* CEJKNGMMIAJ; // 0x18
	::System::Boolean IAMCONEKFEG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88CBF8D1C2552219__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88CBF8D1C2552219_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_785067F68EE4E375()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88CBF8D1C2552219_METHOD_2_785067F68EE4E375_OFFSET))(this);
	}

	::System::Void Method_2_4778B356BDF5736D(::Il2CppArray<::RPG::GameCore::RtSubModifierData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtSubModifierData*>*))((::PBYTE)hIl2Cpp + CLASS_2_88CBF8D1C2552219_METHOD_2_4778B356BDF5736D_OFFSET))(this, a1);
	}

	::System::Void Method_2_369BB5E7FA6A1768(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_2_88CBF8D1C2552219_METHOD_2_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::System::Void Method_2_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_88CBF8D1C2552219_METHOD_2_86D9A88811BF5A61_OFFSET))(this, a1);
	}
};
