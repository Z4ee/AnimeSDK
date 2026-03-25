#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightEquipTagConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D6C3CA4AD3326C85_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x179589F0)
#define CLASS_1_D6C3CA4AD3326C85_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17958810)
#define CLASS_1_D6C3CA4AD3326C85_METHOD_1_4FB1A900B0646861_OFFSET UNITYSDK_OFFSET(0x17958120)
#define CLASS_1_D6C3CA4AD3326C85_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x179581A0)
#define CLASS_1_D6C3CA4AD3326C85_METHOD_1_96E69B513224D03B_OFFSET UNITYSDK_OFFSET(0x17958600)
#define CLASS_1_D6C3CA4AD3326C85_METHOD_1_A5607BB22CEA9842_OFFSET UNITYSDK_OFFSET(0x17958450)
#define CLASS_1_D6C3CA4AD3326C85_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x179588B0)
#define CLASS_1_D6C3CA4AD3326C85_METHOD_1_B960505AB25F92CF_OFFSET UNITYSDK_OFFSET(0x17958A40)
#define CLASS_1_D6C3CA4AD3326C85_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x179583F0)
#define CLASS_1_D6C3CA4AD3326C85_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x179587D0)
#define CLASS_1_D6C3CA4AD3326C85_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17958950)
#define CLASS_1_D6C3CA4AD3326C85__CCTOR_OFFSET UNITYSDK_OFFSET(0x17958DA0)

inline static constexpr unsigned int Class_1_D6C3CA4AD3326C85_TypeDefinitionIndex = 12309;

class Class_1_D6C3CA4AD3326C85 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipTagConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipTagConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6C3CA4AD3326C85_TypeDefinitionIndex)->GetStaticField(0x24330);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6C3CA4AD3326C85_TypeDefinitionIndex)->GetStaticField(0x24338);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6C3CA4AD3326C85_TypeDefinitionIndex)->GetStaticField(0x24340);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6C3CA4AD3326C85_TypeDefinitionIndex)->GetStaticField(0x9A40);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6C3CA4AD3326C85_TypeDefinitionIndex)->GetStaticField(0x9A41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6C3CA4AD3326C85__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipTagConfigRow*>* Method_1_4FB1A900B0646861()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipTagConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6C3CA4AD3326C85_METHOD_1_4FB1A900B0646861_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6C3CA4AD3326C85_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipTagConfigRow*> Method_1_A5607BB22CEA9842()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipTagConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6C3CA4AD3326C85_METHOD_1_A5607BB22CEA9842_OFFSET))();
	}

	static ::RPG::GameCore::GridFightEquipTagConfigRow* Method_1_96E69B513224D03B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightEquipTagConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D6C3CA4AD3326C85_METHOD_1_96E69B513224D03B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6C3CA4AD3326C85_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6C3CA4AD3326C85_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6C3CA4AD3326C85_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D6C3CA4AD3326C85_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D6C3CA4AD3326C85_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D6C3CA4AD3326C85_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_B960505AB25F92CF(::RPG::GameCore::GridFightEquipTagConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightEquipTagConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D6C3CA4AD3326C85_METHOD_1_B960505AB25F92CF_OFFSET))(a1);
	}
};
