#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightSelectEnhanceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A0733B52936EBD35_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1924C6D0)
#define CLASS_1_A0733B52936EBD35_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1924C500)
#define CLASS_1_A0733B52936EBD35_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1924C590)
#define CLASS_1_A0733B52936EBD35_METHOD_1_BC56ED55EFCA6046_OFFSET UNITYSDK_OFFSET(0x1924C1C0)
#define CLASS_1_A0733B52936EBD35_METHOD_1_C90661D9FB775A49_OFFSET UNITYSDK_OFFSET(0x1924BEB0)
#define CLASS_1_A0733B52936EBD35_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1924C160)
#define CLASS_1_A0733B52936EBD35_METHOD_1_DC45C15FFABD9B2F_OFFSET UNITYSDK_OFFSET(0x1924C720)
#define CLASS_1_A0733B52936EBD35_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1924BF30)
#define CLASS_1_A0733B52936EBD35_METHOD_1_E3875BA8B2C4D6DC_OFFSET UNITYSDK_OFFSET(0x1924C330)
#define CLASS_1_A0733B52936EBD35_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1924C4C0)
#define CLASS_1_A0733B52936EBD35_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1924C630)
#define CLASS_1_A0733B52936EBD35__CCTOR_OFFSET UNITYSDK_OFFSET(0x1924CA90)

inline static constexpr unsigned int Class_1_A0733B52936EBD35_TypeDefinitionIndex = 13048;

class Class_1_A0733B52936EBD35 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0733B52936EBD35_TypeDefinitionIndex)->GetStaticField(0x51550);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSelectEnhanceRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSelectEnhanceRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0733B52936EBD35_TypeDefinitionIndex)->GetStaticField(0x51558);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0733B52936EBD35_TypeDefinitionIndex)->GetStaticField(0x51560);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0733B52936EBD35_TypeDefinitionIndex)->GetStaticField(0xFEB0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0733B52936EBD35_TypeDefinitionIndex)->GetStaticField(0xFEB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0733B52936EBD35__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSelectEnhanceRow*>* Method_1_C90661D9FB775A49()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSelectEnhanceRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0733B52936EBD35_METHOD_1_C90661D9FB775A49_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0733B52936EBD35_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSelectEnhanceRow*> Method_1_BC56ED55EFCA6046()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSelectEnhanceRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0733B52936EBD35_METHOD_1_BC56ED55EFCA6046_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSelectEnhanceRow* Method_1_E3875BA8B2C4D6DC(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightSelectEnhanceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A0733B52936EBD35_METHOD_1_E3875BA8B2C4D6DC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0733B52936EBD35_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0733B52936EBD35_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0733B52936EBD35_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A0733B52936EBD35_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A0733B52936EBD35_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A0733B52936EBD35_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_DC45C15FFABD9B2F(::RPG::GameCore::GridFightSelectEnhanceRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightSelectEnhanceRow*))((::PBYTE)hIl2Cpp + CLASS_1_A0733B52936EBD35_METHOD_1_DC45C15FFABD9B2F_OFFSET))(a1);
	}
};
