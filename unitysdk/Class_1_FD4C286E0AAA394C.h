#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChestGroupPropertyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FD4C286E0AAA394C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18F573E0)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_51121C5F7D392706_OFFSET UNITYSDK_OFFSET(0x18F56F10)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F57210)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F572A0)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_CD6CA9AC15C91426_OFFSET UNITYSDK_OFFSET(0x18F56C00)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F56EB0)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_DA627B90E53E3C0F_OFFSET UNITYSDK_OFFSET(0x18F57040)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F56C80)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F571D0)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F57340)
#define CLASS_1_FD4C286E0AAA394C_METHOD_1_FC7697B5D91F3433_OFFSET UNITYSDK_OFFSET(0x18F57430)
#define CLASS_1_FD4C286E0AAA394C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F57750)

inline static constexpr unsigned int Class_1_FD4C286E0AAA394C_TypeDefinitionIndex = 13715;

class Class_1_FD4C286E0AAA394C : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4C286E0AAA394C_TypeDefinitionIndex)->GetStaticField(0x35B80);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4C286E0AAA394C_TypeDefinitionIndex)->GetStaticField(0x35B88);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4C286E0AAA394C_TypeDefinitionIndex)->GetStaticField(0x35B90);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4C286E0AAA394C_TypeDefinitionIndex)->GetStaticField(0xAA30);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4C286E0AAA394C_TypeDefinitionIndex)->GetStaticField(0xAA31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*>* Method_1_CD6CA9AC15C91426()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_CD6CA9AC15C91426_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*> Method_1_51121C5F7D392706()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_51121C5F7D392706_OFFSET))();
	}

	static ::RPG::GameCore::ChestGroupPropertyRow* Method_1_DA627B90E53E3C0F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChestGroupPropertyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_DA627B90E53E3C0F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FC7697B5D91F3433(::RPG::GameCore::ChestGroupPropertyRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChestGroupPropertyRow*))((::PBYTE)hIl2Cpp + CLASS_1_FD4C286E0AAA394C_METHOD_1_FC7697B5D91F3433_OFFSET))(a1);
	}
};
