#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6309529EF246F8B2.h"
#include "unitysdk/System/Object.h"

class Class_1_C75DDA89CCB3A76B;
class Class_2_D563DB01252A2838;
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_F4F46743587A3872_METHOD_1_04618A336257FAB5_OFFSET UNITYSDK_OFFSET(0x14E56950)
#define CLASS_1_F4F46743587A3872_METHOD_1_676E4EF2BBA9B1C2_OFFSET UNITYSDK_OFFSET(0x14E56B40)
#define CLASS_1_F4F46743587A3872_METHOD_1_A19F7FFB9D42C807_OFFSET UNITYSDK_OFFSET(0x14E56600)
#define CLASS_1_F4F46743587A3872_METHOD_1_CFAE4A19CDCB7CB0_OFFSET UNITYSDK_OFFSET(0x14E56C60)
#define CLASS_1_F4F46743587A3872_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x14E56560)
#define CLASS_1_F4F46743587A3872_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x14E565B0)
#define CLASS_1_F4F46743587A3872__CTOR_OFFSET UNITYSDK_OFFSET(0x14E56CC0)

inline static constexpr unsigned int Class_1_F4F46743587A3872_TypeDefinitionIndex = 51629;

class Class_1_F4F46743587A3872 : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::System::Int32>* Field_1_0; // 0x10
	::RPG::GameCore::GameWorld* Field_1_1; // 0x18
	::Il2CppArray<::Class_2_D563DB01252A2838*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4F46743587A3872__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_F4F46743587A3872_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4F46743587A3872_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_A19F7FFB9D42C807(::System::Int32 a1, ::Struct_2_6309529EF246F8B2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_6309529EF246F8B2))((::PBYTE)hIl2Cpp + CLASS_1_F4F46743587A3872_METHOD_1_A19F7FFB9D42C807_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_04618A336257FAB5(::Class_1_C75DDA89CCB3A76B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C75DDA89CCB3A76B*))((::PBYTE)hIl2Cpp + CLASS_1_F4F46743587A3872_METHOD_1_04618A336257FAB5_OFFSET))(this, a1);
	}

	::System::Void Method_1_676E4EF2BBA9B1C2(::Class_1_C75DDA89CCB3A76B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C75DDA89CCB3A76B*))((::PBYTE)hIl2Cpp + CLASS_1_F4F46743587A3872_METHOD_1_676E4EF2BBA9B1C2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CFAE4A19CDCB7CB0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4F46743587A3872_METHOD_1_CFAE4A19CDCB7CB0_OFFSET))(this);
	}
};
