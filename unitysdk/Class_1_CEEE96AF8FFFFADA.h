#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapDefaultEntranceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CEEE96AF8FFFFADA_METHOD_1_110336ECC7377817_OFFSET UNITYSDK_OFFSET(0x1938BEB0)
#define CLASS_1_CEEE96AF8FFFFADA_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1938BE60)
#define CLASS_1_CEEE96AF8FFFFADA_METHOD_1_1D42763AD6900E6A_OFFSET UNITYSDK_OFFSET(0x1938B990)
#define CLASS_1_CEEE96AF8FFFFADA_METHOD_1_4274A26276FA600B_OFFSET UNITYSDK_OFFSET(0x1938BAC0)
#define CLASS_1_CEEE96AF8FFFFADA_METHOD_1_65C809D52157AB2A_OFFSET UNITYSDK_OFFSET(0x1938B680)
#define CLASS_1_CEEE96AF8FFFFADA_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1938BC90)
#define CLASS_1_CEEE96AF8FFFFADA_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1938BD20)
#define CLASS_1_CEEE96AF8FFFFADA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1938B930)
#define CLASS_1_CEEE96AF8FFFFADA_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1938B700)
#define CLASS_1_CEEE96AF8FFFFADA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1938BC50)
#define CLASS_1_CEEE96AF8FFFFADA_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1938BDC0)
#define CLASS_1_CEEE96AF8FFFFADA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1938C1D0)

inline static constexpr unsigned int Class_1_CEEE96AF8FFFFADA_TypeDefinitionIndex = 13349;

class Class_1_CEEE96AF8FFFFADA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapDefaultEntranceRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapDefaultEntranceRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEEE96AF8FFFFADA_TypeDefinitionIndex)->GetStaticField(0x57610);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEEE96AF8FFFFADA_TypeDefinitionIndex)->GetStaticField(0x57618);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEEE96AF8FFFFADA_TypeDefinitionIndex)->GetStaticField(0x57620);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEEE96AF8FFFFADA_TypeDefinitionIndex)->GetStaticField(0x11500);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEEE96AF8FFFFADA_TypeDefinitionIndex)->GetStaticField(0x11501);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEEE96AF8FFFFADA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapDefaultEntranceRow*>* Method_1_65C809D52157AB2A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapDefaultEntranceRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEEE96AF8FFFFADA_METHOD_1_65C809D52157AB2A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEEE96AF8FFFFADA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapDefaultEntranceRow*> Method_1_1D42763AD6900E6A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapDefaultEntranceRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEEE96AF8FFFFADA_METHOD_1_1D42763AD6900E6A_OFFSET))();
	}

	static ::RPG::GameCore::MapDefaultEntranceRow* Method_1_4274A26276FA600B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MapDefaultEntranceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CEEE96AF8FFFFADA_METHOD_1_4274A26276FA600B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEEE96AF8FFFFADA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEEE96AF8FFFFADA_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEEE96AF8FFFFADA_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CEEE96AF8FFFFADA_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CEEE96AF8FFFFADA_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CEEE96AF8FFFFADA_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_110336ECC7377817(::RPG::GameCore::MapDefaultEntranceRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MapDefaultEntranceRow*))((::PBYTE)hIl2Cpp + CLASS_1_CEEE96AF8FFFFADA_METHOD_1_110336ECC7377817_OFFSET))(a1);
	}
};
