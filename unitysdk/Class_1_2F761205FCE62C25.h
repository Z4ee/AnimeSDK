#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarEnhancedHintRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2F761205FCE62C25_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x17964480)
#define CLASS_1_2F761205FCE62C25_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x179642A0)
#define CLASS_1_2F761205FCE62C25_METHOD_1_5D8AE693BC304F02_OFFSET UNITYSDK_OFFSET(0x17963EA0)
#define CLASS_1_2F761205FCE62C25_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17963BF0)
#define CLASS_1_2F761205FCE62C25_METHOD_1_9C6F0CA237E05669_OFFSET UNITYSDK_OFFSET(0x17964050)
#define CLASS_1_2F761205FCE62C25_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17964340)
#define CLASS_1_2F761205FCE62C25_METHOD_1_B9CA85561C12655D_OFFSET UNITYSDK_OFFSET(0x179644D0)
#define CLASS_1_2F761205FCE62C25_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17963E40)
#define CLASS_1_2F761205FCE62C25_METHOD_1_EB09949004E78549_OFFSET UNITYSDK_OFFSET(0x17963B70)
#define CLASS_1_2F761205FCE62C25_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17964260)
#define CLASS_1_2F761205FCE62C25_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x179643E0)
#define CLASS_1_2F761205FCE62C25__CCTOR_OFFSET UNITYSDK_OFFSET(0x17964880)

inline static constexpr unsigned int Class_1_2F761205FCE62C25_TypeDefinitionIndex = 11674;

class Class_1_2F761205FCE62C25 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F761205FCE62C25_TypeDefinitionIndex)->GetStaticField(0x24730);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F761205FCE62C25_TypeDefinitionIndex)->GetStaticField(0x24738);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F761205FCE62C25_TypeDefinitionIndex)->GetStaticField(0x24740);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F761205FCE62C25_TypeDefinitionIndex)->GetStaticField(0x9BB0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F761205FCE62C25_TypeDefinitionIndex)->GetStaticField(0x9BB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>* Method_1_EB09949004E78549()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_EB09949004E78549_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*> Method_1_5D8AE693BC304F02()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_5D8AE693BC304F02_OFFSET))();
	}

	static ::RPG::GameCore::AvatarEnhancedHintRow* Method_1_9C6F0CA237E05669(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::AvatarEnhancedHintRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_9C6F0CA237E05669_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B9CA85561C12655D(::RPG::GameCore::AvatarEnhancedHintRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarEnhancedHintRow*))((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_B9CA85561C12655D_OFFSET))(a1);
	}
};
