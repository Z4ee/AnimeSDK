#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_2B4CACAEF27FAB52_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x16B3C8F0)
#define CLASS_4_2B4CACAEF27FAB52_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16B3B7B0)
#define CLASS_4_2B4CACAEF27FAB52_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x16B3B960)
#define CLASS_4_2B4CACAEF27FAB52_METHOD_4_567CC05E05AC4FAF_OFFSET UNITYSDK_OFFSET(0x16B3BC90)
#define CLASS_4_2B4CACAEF27FAB52_METHOD_4_9FB31DCBC68D9000_OFFSET UNITYSDK_OFFSET(0x16B3C6A0)
#define CLASS_4_2B4CACAEF27FAB52__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3C510)

inline static constexpr unsigned int Class_4_2B4CACAEF27FAB52_TypeDefinitionIndex = 72735;

class Class_4_2B4CACAEF27FAB52 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_B537A0AA78803363* Field_4_3; // 0x28
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_2; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2B4CACAEF27FAB52__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2B4CACAEF27FAB52_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_2B4CACAEF27FAB52_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_4_9FB31DCBC68D9000(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_2B4CACAEF27FAB52_METHOD_4_9FB31DCBC68D9000_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_4_567CC05E05AC4FAF(::Foundation::ViewObject::ViewObjectHandle a1, ::System::Boolean& a2)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_4_2B4CACAEF27FAB52_METHOD_4_567CC05E05AC4FAF_OFFSET))(a1, a2);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2B4CACAEF27FAB52_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
