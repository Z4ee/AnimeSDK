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

#define CLASS_1_0EFB4F3865942669_METHOD_1_2A0D1697C89F84C7_OFFSET UNITYSDK_OFFSET(0x117BFBE0)
#define CLASS_1_0EFB4F3865942669_METHOD_1_4CA6F2F3A7E652AD_OFFSET UNITYSDK_OFFSET(0x117C0EF0)
#define CLASS_1_0EFB4F3865942669_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x117C00D0)
#define CLASS_1_0EFB4F3865942669_METHOD_1_6946C610D47FE5F0_OFFSET UNITYSDK_OFFSET(0x117C11E0)
#define CLASS_1_0EFB4F3865942669_METHOD_1_6BB9E6CFC653EBF6_OFFSET UNITYSDK_OFFSET(0x117C0490)
#define CLASS_1_0EFB4F3865942669_METHOD_1_80A463875E1EBBF8_OFFSET UNITYSDK_OFFSET(0x117C0880)
#define CLASS_1_0EFB4F3865942669_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0x117BFF20)
#define CLASS_1_0EFB4F3865942669_METHOD_1_CBBBF0B3E7BC7D58_OFFSET UNITYSDK_OFFSET(0x117C0B50)
#define CLASS_1_0EFB4F3865942669_METHOD_1_CFDE28DD4B547837_OFFSET UNITYSDK_OFFSET(0x117BFC70)
#define CLASS_1_0EFB4F3865942669_METHOD_1_DB0A0E5144655E7D_OFFSET UNITYSDK_OFFSET(0x117C0280)
#define CLASS_1_0EFB4F3865942669__CCTOR_OFFSET UNITYSDK_OFFSET(0x117C1290)
#define CLASS_1_0EFB4F3865942669__CTOR_OFFSET UNITYSDK_OFFSET(0x117C1230)

inline static constexpr unsigned int Class_1_0EFB4F3865942669_TypeDefinitionIndex = 56692;

class Class_1_0EFB4F3865942669 : public ::System::Object
{
public:
	static ::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkActionDataItem*>** StaticGet_Field_1_3()
	{
		return (::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkActionDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EFB4F3865942669_TypeDefinitionIndex)->GetStaticField(0x1D700);
	}
	static ::RPG::Client::ClockParkEffectResult** StaticGet_Field_1_4()
	{
		return (::RPG::Client::ClockParkEffectResult**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EFB4F3865942669_TypeDefinitionIndex)->GetStaticField(0x1D708);
	}
	static ::RPG::Client::ClockParkEffectResult** StaticGet_Field_1_6()
	{
		return (::RPG::Client::ClockParkEffectResult**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EFB4F3865942669_TypeDefinitionIndex)->GetStaticField(0x1D710);
	}
	static ::RPG::Client::ClockParkEffectResult** StaticGet_Field_1_5()
	{
		return (::RPG::Client::ClockParkEffectResult**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EFB4F3865942669_TypeDefinitionIndex)->GetStaticField(0x1D718);
	}
	::RPG::Client::ClockParkEffectResult* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::ClockParkActionDataItem*>* Field_1_0; // 0x18
	::RPG::Client::ClockParkEffectResult* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EFB4F3865942669__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0EFB4F3865942669__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2A0D1697C89F84C7(::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkActionDataItem*>* a1)
	{
		return ((::System::Void(*)(::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkActionDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_0EFB4F3865942669_METHOD_1_2A0D1697C89F84C7_OFFSET))(a1);
	}

	::System::Void Method_1_CFDE28DD4B547837(::RPG::Client::ClockParkCardInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0EFB4F3865942669_METHOD_1_CFDE28DD4B547837_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB0A0E5144655E7D(::RPG::Client::ClockParkAttributeInfo* a1, ::RPG::Client::ClockParkBuffInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeInfo*, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0EFB4F3865942669_METHOD_1_DB0A0E5144655E7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CBBBF0B3E7BC7D58(::RPG::Client::ClockParkCardItem* a1, ::RPG::Client::ClockParkEffectResult*& a2, ::RPG::Client::ClockParkEffectResult*& a3, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkActionDataItem*>* a4, ::RPG::Client::ClockParkAttributeInfo* a5, ::RPG::Client::ClockParkBuffInfo* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*, ::RPG::Client::ClockParkEffectResult*&, ::RPG::Client::ClockParkEffectResult*&, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkActionDataItem*>*, ::RPG::Client::ClockParkAttributeInfo*, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0EFB4F3865942669_METHOD_1_CBBBF0B3E7BC7D58_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_6946C610D47FE5F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EFB4F3865942669_METHOD_1_6946C610D47FE5F0_OFFSET))(this);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EFB4F3865942669_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EFB4F3865942669_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}

	::RPG::Client::ClockParkEffectResult* Method_1_6BB9E6CFC653EBF6(::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>* a1, ::RPG::Client::ClockParkBuffInfo* a2)
	{
		return ((::RPG::Client::ClockParkEffectResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkEffectDataItem*>*, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0EFB4F3865942669_METHOD_1_6BB9E6CFC653EBF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_80A463875E1EBBF8(::RPG::Client::ClockParkEffectResult* a1, ::RPG::Client::ClockParkAttributeInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*, ::RPG::Client::ClockParkAttributeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0EFB4F3865942669_METHOD_1_80A463875E1EBBF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4CA6F2F3A7E652AD(::RPG::Client::ClockParkEffectResult* a1, ::RPG::Client::ClockParkEffectResult* a2, ::RPG::Client::ClockParkAttributeInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkEffectResult*, ::RPG::Client::ClockParkEffectResult*, ::RPG::Client::ClockParkAttributeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0EFB4F3865942669_METHOD_1_4CA6F2F3A7E652AD_OFFSET))(this, a1, a2, a3);
	}
};
