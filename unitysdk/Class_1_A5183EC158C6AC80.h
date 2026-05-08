#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"

class Class_1_F71F7FB55BBEB1D9;
namespace MoleMole { class UIStorePageNPCConfig; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_A5183EC158C6AC80_METHOD_1_094B5C30A875DD5B_OFFSET UNITYSDK_OFFSET(0x116D56D0)
#define CLASS_1_A5183EC158C6AC80_METHOD_1_2055339B5226C809_OFFSET UNITYSDK_OFFSET(0x116D4C60)
#define CLASS_1_A5183EC158C6AC80_METHOD_1_23C3681AC9E5D438_OFFSET UNITYSDK_OFFSET(0x116D4490)
#define CLASS_1_A5183EC158C6AC80_METHOD_1_2E6C9CBC74FAFF39_OFFSET UNITYSDK_OFFSET(0x116D5480)
#define CLASS_1_A5183EC158C6AC80_METHOD_1_846C3A66AC33B6FF_OFFSET UNITYSDK_OFFSET(0x116D5530)
#define CLASS_1_A5183EC158C6AC80_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x116D3DB0)
#define CLASS_1_A5183EC158C6AC80_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x116D3D40)
#define CLASS_1_A5183EC158C6AC80_METHOD_1_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x116D4430)
#define CLASS_1_A5183EC158C6AC80_METHOD_1_AB0A79B9015C34F5_OFFSET UNITYSDK_OFFSET(0x116D4E90)
#define CLASS_1_A5183EC158C6AC80_METHOD_1_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x116D4E40)
#define CLASS_1_A5183EC158C6AC80_METHOD_1_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x116D43D0)
#define CLASS_1_A5183EC158C6AC80_METHOD_1_C74AE80DCE5B50A3_OFFSET UNITYSDK_OFFSET(0x116D3B80)
#define CLASS_1_A5183EC158C6AC80_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x116D5680)
#define CLASS_1_A5183EC158C6AC80__CTOR_OFFSET UNITYSDK_OFFSET(0x116D3AF0)

inline static constexpr unsigned int Class_1_A5183EC158C6AC80_TypeDefinitionIndex = 62948;

class Class_1_A5183EC158C6AC80 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Foundation::Tuple_2<::System::String*, ::UnityEngine::GameObject*>>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x18
	::UnityEngine::GameObject* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* Field_1_3; // 0x28
	::System::String* Field_1_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIStorePageNPCConfig*>* Field_1_4; // 0x38
	::Class_1_F71F7FB55BBEB1D9* Field_1_0; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x48

	::System::Void _ctor(::Class_1_F71F7FB55BBEB1D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F71F7FB55BBEB1D9*))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80__CTOR_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_1_C74AE80DCE5B50A3(::UnityEngine::GameObject* a1, ::MoleMole::Config::EntityType a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::EntityType, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_C74AE80DCE5B50A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_1_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_A56385E6706FA723_OFFSET))(this);
	}

	::System::Void Method_1_23C3681AC9E5D438()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_23C3681AC9E5D438_OFFSET))(this);
	}

	::UnityEngine::Animator* Method_1_2055339B5226C809()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_2055339B5226C809_OFFSET))(this);
	}

	::System::Void Method_1_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_C433AF37CE9D6E5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB0A79B9015C34F5(::MoleMole::UIStorePageNPCConfig* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIStorePageNPCConfig*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_AB0A79B9015C34F5_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_1_2E6C9CBC74FAFF39(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_2E6C9CBC74FAFF39_OFFSET))(this, a1);
	}

	::System::Void Method_1_846C3A66AC33B6FF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_846C3A66AC33B6FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_F71F7FB55BBEB1D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F71F7FB55BBEB1D9*))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_094B5C30A875DD5B(::System::String* a1, ::MoleMole::UIStorePageNPCConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIStorePageNPCConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_094B5C30A875DD5B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5183EC158C6AC80_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}
};
