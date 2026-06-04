#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkActionDataItem; }
namespace RPG::Client { class ClockParkAttributeInfo; }
namespace RPG::Client { class ClockParkBuffInfo; }
namespace RPG::Client { class ClockParkCardInfo; }
namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkEffectDataItem; }
namespace RPG::Client { class ClockParkEffectResult; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define CLASS_1_77A269AAA926CB22_METHOD_1_2A0D1697C89F84C7_OFFSET UNITYSDK_OFFSET(0xAD30A30)
#define CLASS_1_77A269AAA926CB22_METHOD_1_42B0C217A2746D86_OFFSET UNITYSDK_OFFSET(0xAD31320)
#define CLASS_1_77A269AAA926CB22_METHOD_1_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0xAD30F70)
#define CLASS_1_77A269AAA926CB22_METHOD_1_55694FB07FC8EEEB_OFFSET UNITYSDK_OFFSET(0xAD31110)
#define CLASS_1_77A269AAA926CB22_METHOD_1_5901C15C49D0EC61_OFFSET UNITYSDK_OFFSET(0xAD31710)
#define CLASS_1_77A269AAA926CB22_METHOD_1_6A13801F6FA23C1B_OFFSET UNITYSDK_OFFSET(0xAD31D70)
#define CLASS_1_77A269AAA926CB22_METHOD_1_8912747379CF63B5_OFFSET UNITYSDK_OFFSET(0xAD30AC0)
#define CLASS_1_77A269AAA926CB22_METHOD_1_AD1572BA8ED1280C_OFFSET UNITYSDK_OFFSET(0xAD319E0)
#define CLASS_1_77A269AAA926CB22_METHOD_1_B7CCB99AAB7A4C8B_OFFSET UNITYSDK_OFFSET(0xAD32070)
#define CLASS_1_77A269AAA926CB22_METHOD_1_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0xAD30DD0)
#define CLASS_1_77A269AAA926CB22__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD32120)
#define CLASS_1_77A269AAA926CB22__CTOR_OFFSET UNITYSDK_OFFSET(0xAD320C0)

inline static constexpr unsigned int Class_1_77A269AAA926CB22_TypeDefinitionIndex = 57476;

class Class_1_77A269AAA926CB22 : public ::System::Object
{
public:
	static ::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkActionDataItem*>** StaticGet_Field_1_0()
	{
		return (::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkActionDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77A269AAA926CB22_TypeDefinitionIndex)->GetStaticField(0x255C0);
	}
	static ::RPG::Client::ClockParkEffectResult** StaticGet_Field_1_1()
	{
		return (::RPG::Client::ClockParkEffectResult**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77A269AAA926CB22_TypeDefinitionIndex)->GetStaticField(0x255C8);
	}
	static ::RPG::Client::ClockParkEffectResult** StaticGet_Field_1_2()
	{
		return (::RPG::Client::ClockParkEffectResult**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77A269AAA926CB22_TypeDefinitionIndex)->GetStaticField(0x255D0);
	}
	static ::RPG::Client::ClockParkEffectResult** StaticGet_Field_1_3()
	{
		return (::RPG::Client::ClockParkEffectResult**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77A269AAA926CB22_TypeDefinitionIndex)->GetStaticField(0x255D8);
	}
	::System::Collections::Generic::List_1<::RPG::Client::ClockParkActionDataItem*>* Field_1_4; // 0x10
	::RPG::Client::ClockParkEffectResult* Field_1_5; // 0x18
	::RPG::Client::ClockParkEffectResult* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77A269AAA926CB22__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77A269AAA926CB22__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2A0D1697C89F84C7(::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkActionDataItem*>* a1)
	{
		return ((::System::Void(*)(::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkActionDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_77A269AAA926CB22_METHOD_1_2A0D1697C89F84C7_OFFSET))(a1);
	}

	::System::Void Method_1_8912747379CF63B5(::RPG::Client::ClockParkCardInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardInfo*))((::PBYTE)hIl2Cpp + CLASS_1_77A269AAA926CB22_METHOD_1_8912747379CF63B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_55694FB07FC8EEEB(::RPG::Client::ClockParkAttributeInfo* a1, ::RPG::Client::ClockParkBuffInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeInfo*, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + CLASS_1_77A269AAA926CB22_METHOD_1_55694FB07FC8EEEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AD1572BA8ED1280C(::RPG::Client::ClockParkCardItem* a1, ::RPG::Client::ClockParkEffectResult*& a2, ::RPG::Client::ClockParkEffectResult*& a3, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkActionDataItem*>* a4, ::RPG::Client::ClockParkAttributeInfo* a5, ::RPG::Client::ClockParkBuffInfo* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*, ::RPG::Client::ClockParkEffectResult*&, ::RPG::Client::ClockParkEffectResult*&, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkActionDataItem*>*, ::RPG::Client::ClockParkAttributeInfo*, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + CLASS_1_77A269AAA926CB22_METHOD_1_AD1572BA8ED1280C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_B7CCB99AAB7A4C8B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77A269AAA926CB22_METHOD_1_B7CCB99AAB7A4C8B_OFFSET))(this);
	}

	::System::Void Method_1_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77A269AAA926CB22_METHOD_1_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_1_4BE99DDCF7F1FD88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77A269AAA926CB22_METHOD_1_4BE99DDCF7F1FD88_OFFSET))(this);
	}

	::RPG::Client::ClockParkEffectResult* Method_1_42B0C217A2746D86(::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* a1, ::RPG::Client::ClockParkBuffInfo* a2)
	{
		return ((::RPG::Client::ClockParkEffectResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + CLASS_1_77A269AAA926CB22_METHOD_1_42B0C217A2746D86_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5901C15C49D0EC61(::RPG::Client::ClockParkEffectResult* a1, ::RPG::Client::ClockParkAttributeInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*, ::RPG::Client::ClockParkAttributeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_77A269AAA926CB22_METHOD_1_5901C15C49D0EC61_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A13801F6FA23C1B(::RPG::Client::ClockParkEffectResult* a1, ::RPG::Client::ClockParkEffectResult* a2, ::RPG::Client::ClockParkAttributeInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*, ::RPG::Client::ClockParkEffectResult*, ::RPG::Client::ClockParkAttributeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_77A269AAA926CB22_METHOD_1_6A13801F6FA23C1B_OFFSET))(this, a1, a2, a3);
	}
};
