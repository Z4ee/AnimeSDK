#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/MoleMole/Battle/GameplayEffectModifier.h"

class Class_1_B9019A799F77EC17;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7A274F59B672E164_METHOD_2_02B3D5CCC8926834_OFFSET UNITYSDK_OFFSET(0x13F128C0)
#define CLASS_2_7A274F59B672E164_METHOD_2_6D6561552120D7D2_OFFSET UNITYSDK_OFFSET(0x13F12350)
#define CLASS_2_7A274F59B672E164_METHOD_2_ACD45D2D64B4EFB5_OFFSET UNITYSDK_OFFSET(0x13F12B40)
#define CLASS_2_7A274F59B672E164_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x13F11EF0)
#define CLASS_2_7A274F59B672E164_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13F12AB0)
#define CLASS_2_7A274F59B672E164_METHOD_2_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0x13F11E80)
#define CLASS_2_7A274F59B672E164__CTOR_OFFSET UNITYSDK_OFFSET(0x13F12340)

inline static constexpr unsigned int Class_2_7A274F59B672E164_TypeDefinitionIndex = 39444;

class Class_2_7A274F59B672E164 : public ::Class_1_BE149A7D6310B037
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_B9019A799F77EC17*>* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::GameplayEffectModifier>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A274F59B672E164__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E727F9956B5BD78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A274F59B672E164_METHOD_2_E727F9956B5BD78B_OFFSET))(this);
	}

	::Class_1_B9019A799F77EC17* Method_2_6D6561552120D7D2(::System::Int32 a1)
	{
		return ((::Class_1_B9019A799F77EC17*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7A274F59B672E164_METHOD_2_6D6561552120D7D2_OFFSET))(this, a1);
	}

	::MoleMole::Battle::GameplayEffectModifier Method_2_02B3D5CCC8926834(::System::Int32 a1)
	{
		return ((::MoleMole::Battle::GameplayEffectModifier(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7A274F59B672E164_METHOD_2_02B3D5CCC8926834_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A274F59B672E164_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A274F59B672E164_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_ACD45D2D64B4EFB5(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7A274F59B672E164_METHOD_2_ACD45D2D64B4EFB5_OFFSET))(this, a1);
	}
};
