#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6309529EF246F8B2.h"
#include "unitysdk/System/Object.h"

class Class_1_C75DDA89CCB3A76B;
class Class_2_D563DB01252A2838;
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_F4F46743587A3872_METHOD_1_04618A336257FAB5_OFFSET UNITYSDK_OFFSET(0x17A0BBF0)
#define CLASS_1_F4F46743587A3872_METHOD_1_676E4EF2BBA9B1C2_OFFSET UNITYSDK_OFFSET(0x17A0BDE0)
#define CLASS_1_F4F46743587A3872_METHOD_1_A19F7FFB9D42C807_OFFSET UNITYSDK_OFFSET(0x17A0B8A0)
#define CLASS_1_F4F46743587A3872_METHOD_1_CFAE4A19CDCB7CB0_OFFSET UNITYSDK_OFFSET(0x17A0BF00)
#define CLASS_1_F4F46743587A3872_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x17A0B800)
#define CLASS_1_F4F46743587A3872_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x17A0B850)
#define CLASS_1_F4F46743587A3872__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0BF60)

inline static constexpr unsigned int Class_1_F4F46743587A3872_TypeDefinitionIndex = 54313;

class Class_1_F4F46743587A3872 : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_D563DB01252A2838*>* LOOCAOKEODD; // 0x10
	::System::Collections::Generic::Stack_1<::System::Int32>* BMALFGCIPLF; // 0x18
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x20

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
