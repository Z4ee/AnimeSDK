#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SurfGameItemDataEntry.h"
#include "unitysdk/MoleMole/Config/SurfGameTriggerDataEntry.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSurfGameItemData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A66999A870925AC7_METHOD_1_08E998EA399062E9_OFFSET UNITYSDK_OFFSET(0x110D35F0)
#define CLASS_1_A66999A870925AC7_METHOD_1_1683312DD38CFC47_1_OFFSET UNITYSDK_OFFSET(0x110D4080)
#define CLASS_1_A66999A870925AC7_METHOD_1_1683312DD38CFC47_OFFSET UNITYSDK_OFFSET(0x110D3710)
#define CLASS_1_A66999A870925AC7_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x110D3CD0)
#define CLASS_1_A66999A870925AC7_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x110D3BE0)
#define CLASS_1_A66999A870925AC7_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x110D36C0)
#define CLASS_1_A66999A870925AC7_METHOD_1_DCFC999DAC5C7F30_OFFSET UNITYSDK_OFFSET(0x110D3F60)
#define CLASS_1_A66999A870925AC7_METHOD_1_DFD9F725B5CC5024_OFFSET UNITYSDK_OFFSET(0x110D4030)
#define CLASS_1_A66999A870925AC7__CCTOR_OFFSET UNITYSDK_OFFSET(0x110D35E0)
#define CLASS_1_A66999A870925AC7__CTOR_OFFSET UNITYSDK_OFFSET(0x110D35D0)

inline static constexpr unsigned int Class_1_A66999A870925AC7_TypeDefinitionIndex = 49589;

class Class_1_A66999A870925AC7 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SurfGameItemDataEntry>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SurfGameItemDataEntry>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A66999A870925AC7_TypeDefinitionIndex)->GetStaticField(0x3BB50);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SurfGameTriggerDataEntry>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SurfGameTriggerDataEntry>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A66999A870925AC7_TypeDefinitionIndex)->GetStaticField(0x3BB58);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_08E998EA399062E9(::System::Int32 a1, ::MoleMole::Config::SurfGameTriggerDataEntry& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::SurfGameTriggerDataEntry&))((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7_METHOD_1_08E998EA399062E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_1683312DD38CFC47(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7_METHOD_1_1683312DD38CFC47_OFFSET))(a1);
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_DCFC999DAC5C7F30(::System::Int32 a1, ::MoleMole::Config::SurfGameItemDataEntry& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::SurfGameItemDataEntry&))((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7_METHOD_1_DCFC999DAC5C7F30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DFD9F725B5CC5024(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7_METHOD_1_DFD9F725B5CC5024_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1683312DD38CFC47_1(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7_METHOD_1_1683312DD38CFC47_1_OFFSET))(a1);
	}
};
