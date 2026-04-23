#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphAvatarConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4A6B31C65449A004_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18DAD430)
#define CLASS_1_4A6B31C65449A004_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18DAD250)
#define CLASS_1_4A6B31C65449A004_METHOD_1_443817A280A86ECD_OFFSET UNITYSDK_OFFSET(0x18DACE90)
#define CLASS_1_4A6B31C65449A004_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18DACBE0)
#define CLASS_1_4A6B31C65449A004_METHOD_1_823C66A597957A66_OFFSET UNITYSDK_OFFSET(0x18DAD040)
#define CLASS_1_4A6B31C65449A004_METHOD_1_91CAD2775DAD6668_OFFSET UNITYSDK_OFFSET(0x18DACB60)
#define CLASS_1_4A6B31C65449A004_METHOD_1_97DB7E7A1CC02F44_OFFSET UNITYSDK_OFFSET(0x18DAD480)
#define CLASS_1_4A6B31C65449A004_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18DAD2F0)
#define CLASS_1_4A6B31C65449A004_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18DACE30)
#define CLASS_1_4A6B31C65449A004_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18DAD210)
#define CLASS_1_4A6B31C65449A004_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18DAD390)
#define CLASS_1_4A6B31C65449A004__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DAD7E0)

inline static constexpr unsigned int Class_1_4A6B31C65449A004_TypeDefinitionIndex = 13690;

class Class_1_4A6B31C65449A004 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A6B31C65449A004_TypeDefinitionIndex)->GetStaticField(0x27F60);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphAvatarConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphAvatarConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A6B31C65449A004_TypeDefinitionIndex)->GetStaticField(0x27F68);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A6B31C65449A004_TypeDefinitionIndex)->GetStaticField(0x27F70);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A6B31C65449A004_TypeDefinitionIndex)->GetStaticField(0xA920);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A6B31C65449A004_TypeDefinitionIndex)->GetStaticField(0xA921);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A6B31C65449A004__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphAvatarConfigRow*>* Method_1_91CAD2775DAD6668()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphAvatarConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A6B31C65449A004_METHOD_1_91CAD2775DAD6668_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A6B31C65449A004_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphAvatarConfigRow*> Method_1_443817A280A86ECD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphAvatarConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A6B31C65449A004_METHOD_1_443817A280A86ECD_OFFSET))();
	}

	static ::RPG::GameCore::PhotoGraphAvatarConfigRow* Method_1_823C66A597957A66(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PhotoGraphAvatarConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A6B31C65449A004_METHOD_1_823C66A597957A66_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A6B31C65449A004_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A6B31C65449A004_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A6B31C65449A004_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4A6B31C65449A004_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4A6B31C65449A004_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4A6B31C65449A004_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_97DB7E7A1CC02F44(::RPG::GameCore::PhotoGraphAvatarConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PhotoGraphAvatarConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_4A6B31C65449A004_METHOD_1_97DB7E7A1CC02F44_OFFSET))(a1);
	}
};
