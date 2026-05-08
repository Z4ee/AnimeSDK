#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E36190EAA4B8D92A.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Struct_2_DA7BA277CA133B63.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_369;
class Class_1_0517B48635C9D397;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_A537275581279BF4_METHOD_1_0B9B14028145318F_OFFSET UNITYSDK_OFFSET(0x112D1AE0)
#define CLASS_1_A537275581279BF4_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x112D1860)
#define CLASS_1_A537275581279BF4_METHOD_1_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x112D1C30)
#define CLASS_1_A537275581279BF4_METHOD_1_446BE43D2AA5DB95_OFFSET UNITYSDK_OFFSET(0x112D20F0)
#define CLASS_1_A537275581279BF4_METHOD_1_48ABB69413C5A359_OFFSET UNITYSDK_OFFSET(0x112D0DE0)
#define CLASS_1_A537275581279BF4_METHOD_1_6B042234886E3394_OFFSET UNITYSDK_OFFSET(0x112D2440)
#define CLASS_1_A537275581279BF4_METHOD_1_74067BAEDA820FD3_OFFSET UNITYSDK_OFFSET(0x112D15D0)
#define CLASS_1_A537275581279BF4_METHOD_1_8016A3D455955DDD_OFFSET UNITYSDK_OFFSET(0x112D1AF0)
#define CLASS_1_A537275581279BF4_METHOD_1_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x112D20A0)
#define CLASS_1_A537275581279BF4_METHOD_1_8E63334403BEADC0_OFFSET UNITYSDK_OFFSET(0x112D0BC0)
#define CLASS_1_A537275581279BF4_METHOD_1_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x112D2910)
#define CLASS_1_A537275581279BF4_METHOD_1_AC8A0D0642E6FB6C_OFFSET UNITYSDK_OFFSET(0x112D1AC0)
#define CLASS_1_A537275581279BF4_METHOD_1_D15F559DB08F052B_OFFSET UNITYSDK_OFFSET(0x112D2920)
#define CLASS_1_A537275581279BF4_METHOD_1_D45C217DAB3D75A1_OFFSET UNITYSDK_OFFSET(0x112D2650)
#define CLASS_1_A537275581279BF4_METHOD_1_DA4E5C8C6A9CEFD3_OFFSET UNITYSDK_OFFSET(0x112D0910)
#define CLASS_1_A537275581279BF4_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x112D15E0)
#define CLASS_1_A537275581279BF4_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x112D2050)
#define CLASS_1_A537275581279BF4_METHOD_1_F331F97E1EB83332_OFFSET UNITYSDK_OFFSET(0x112D10B0)
#define CLASS_1_A537275581279BF4__CTOR_OFFSET UNITYSDK_OFFSET(0x112D0880)

inline static constexpr unsigned int Class_1_A537275581279BF4_TypeDefinitionIndex = 50775;

class Class_1_A537275581279BF4 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::Class_1_0517B48635C9D397* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_369*>* Field_1_4; // 0x20
	::Foundation::AssetRequestHandle Field_1_5; // 0x28
	::Struct_2_DA7BA277CA133B63 Field_1_3; // 0x48
	::Enum_3_E36190EAA4B8D92A Field_1_1; // 0x50

	::System::Void _ctor(::Enum_3_E36190EAA4B8D92A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E36190EAA4B8D92A))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA4E5C8C6A9CEFD3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_DA4E5C8C6A9CEFD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_48ABB69413C5A359(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_48ABB69413C5A359_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_74067BAEDA820FD3(::Foundation::AssetRequestHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_74067BAEDA820FD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::Foundation::AssetRequestHandle Method_1_AC8A0D0642E6FB6C()
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_AC8A0D0642E6FB6C_OFFSET))(this);
	}

	::System::Void Method_1_0B9B14028145318F(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_369*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_369*>*))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_0B9B14028145318F_OFFSET))(this, a1);
	}

	::System::Void Method_1_8016A3D455955DDD(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_8016A3D455955DDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_0517B48635C9D397* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0517B48635C9D397*))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CE0803574BB66D7(::Struct_2_DA7BA277CA133B63 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_DA7BA277CA133B63))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F331F97E1EB83332(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_F331F97E1EB83332_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B042234886E3394(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_6B042234886E3394_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8E63334403BEADC0(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::UnityEngine::GameObject*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_8E63334403BEADC0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D45C217DAB3D75A1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_D45C217DAB3D75A1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_369*>* Method_1_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_369*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_969D9516A75501DE_OFFSET))(this);
	}

	::System::Void Method_1_D15F559DB08F052B(::Class_0_16E4307DCC419505_369* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_369*))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_D15F559DB08F052B_OFFSET))(this, a1);
	}

	::System::Void Method_1_446BE43D2AA5DB95()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_METHOD_1_446BE43D2AA5DB95_OFFSET))(this);
	}
};
