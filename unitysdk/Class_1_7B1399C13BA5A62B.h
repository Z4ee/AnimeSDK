#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTalentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7B1399C13BA5A62B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x17912E50)
#define CLASS_1_7B1399C13BA5A62B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17912C70)
#define CLASS_1_7B1399C13BA5A62B_METHOD_1_4E7F4E5DA3722DFB_OFFSET UNITYSDK_OFFSET(0x179125B0)
#define CLASS_1_7B1399C13BA5A62B_METHOD_1_5B43498C9D756310_OFFSET UNITYSDK_OFFSET(0x17912EA0)
#define CLASS_1_7B1399C13BA5A62B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17912630)
#define CLASS_1_7B1399C13BA5A62B_METHOD_1_8FFC86CA48482AD3_OFFSET UNITYSDK_OFFSET(0x179128E0)
#define CLASS_1_7B1399C13BA5A62B_METHOD_1_AD2C69616EE7F77D_OFFSET UNITYSDK_OFFSET(0x17912A60)
#define CLASS_1_7B1399C13BA5A62B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17912D10)
#define CLASS_1_7B1399C13BA5A62B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17912880)
#define CLASS_1_7B1399C13BA5A62B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17912C30)
#define CLASS_1_7B1399C13BA5A62B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17912DB0)
#define CLASS_1_7B1399C13BA5A62B__CCTOR_OFFSET UNITYSDK_OFFSET(0x179131B0)

inline static constexpr unsigned int Class_1_7B1399C13BA5A62B_TypeDefinitionIndex = 12408;

class Class_1_7B1399C13BA5A62B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTalentConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTalentConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B1399C13BA5A62B_TypeDefinitionIndex)->GetStaticField(0x21D40);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B1399C13BA5A62B_TypeDefinitionIndex)->GetStaticField(0x21D48);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B1399C13BA5A62B_TypeDefinitionIndex)->GetStaticField(0x21D50);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B1399C13BA5A62B_TypeDefinitionIndex)->GetStaticField(0x8DD0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B1399C13BA5A62B_TypeDefinitionIndex)->GetStaticField(0x8DD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B1399C13BA5A62B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTalentConfigRow*>* Method_1_4E7F4E5DA3722DFB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTalentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B1399C13BA5A62B_METHOD_1_4E7F4E5DA3722DFB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B1399C13BA5A62B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTalentConfigRow*> Method_1_8FFC86CA48482AD3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTalentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B1399C13BA5A62B_METHOD_1_8FFC86CA48482AD3_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTalentConfigRow* Method_1_AD2C69616EE7F77D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightTalentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7B1399C13BA5A62B_METHOD_1_AD2C69616EE7F77D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B1399C13BA5A62B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B1399C13BA5A62B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B1399C13BA5A62B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7B1399C13BA5A62B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7B1399C13BA5A62B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7B1399C13BA5A62B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5B43498C9D756310(::RPG::GameCore::GridFightTalentConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTalentConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_7B1399C13BA5A62B_METHOD_1_5B43498C9D756310_OFFSET))(a1);
	}
};
