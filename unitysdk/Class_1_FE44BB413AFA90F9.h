#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ExpeditionHarvestDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FE44BB413AFA90F9_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18DB8EC0)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18DB8CE0)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_499D396BC6A8FF0D_OFFSET UNITYSDK_OFFSET(0x18DB8670)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_5255BC6B73C6EC01_OFFSET UNITYSDK_OFFSET(0x18DB89A0)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18DB86F0)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_7BDB6D4E5F885352_OFFSET UNITYSDK_OFFSET(0x18DB8F10)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18DB8D80)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18DB8940)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_DDCB13B51C5D7FB6_OFFSET UNITYSDK_OFFSET(0x18DB8B20)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18DB8CA0)
#define CLASS_1_FE44BB413AFA90F9_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18DB8E20)
#define CLASS_1_FE44BB413AFA90F9__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DB9220)

inline static constexpr unsigned int Class_1_FE44BB413AFA90F9_TypeDefinitionIndex = 12532;

class Class_1_FE44BB413AFA90F9 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE44BB413AFA90F9_TypeDefinitionIndex)->GetStaticField(0x28760);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE44BB413AFA90F9_TypeDefinitionIndex)->GetStaticField(0x28768);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE44BB413AFA90F9_TypeDefinitionIndex)->GetStaticField(0x28770);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE44BB413AFA90F9_TypeDefinitionIndex)->GetStaticField(0xABD0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE44BB413AFA90F9_TypeDefinitionIndex)->GetStaticField(0xABD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>* Method_1_499D396BC6A8FF0D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_499D396BC6A8FF0D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*> Method_1_5255BC6B73C6EC01()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionHarvestDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_5255BC6B73C6EC01_OFFSET))();
	}

	static ::RPG::GameCore::ExpeditionHarvestDataRow* Method_1_DDCB13B51C5D7FB6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ExpeditionHarvestDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_DDCB13B51C5D7FB6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_7BDB6D4E5F885352(::RPG::GameCore::ExpeditionHarvestDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ExpeditionHarvestDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_FE44BB413AFA90F9_METHOD_1_7BDB6D4E5F885352_OFFSET))(a1);
	}
};
