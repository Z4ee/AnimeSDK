#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PsActivityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_01DA9F09B45EBF8D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18786A60)
#define CLASS_1_01DA9F09B45EBF8D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18786880)
#define CLASS_1_01DA9F09B45EBF8D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18786210)
#define CLASS_1_01DA9F09B45EBF8D_METHOD_1_8A33F0362AD3145A_OFFSET UNITYSDK_OFFSET(0x187864C0)
#define CLASS_1_01DA9F09B45EBF8D_METHOD_1_8C579E5D43365281_OFFSET UNITYSDK_OFFSET(0x18786190)
#define CLASS_1_01DA9F09B45EBF8D_METHOD_1_90EED7EE7568D103_OFFSET UNITYSDK_OFFSET(0x18786670)
#define CLASS_1_01DA9F09B45EBF8D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18786920)
#define CLASS_1_01DA9F09B45EBF8D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18786460)
#define CLASS_1_01DA9F09B45EBF8D_METHOD_1_E280BBB809F4B977_OFFSET UNITYSDK_OFFSET(0x18786AB0)
#define CLASS_1_01DA9F09B45EBF8D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18786840)
#define CLASS_1_01DA9F09B45EBF8D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x187869C0)
#define CLASS_1_01DA9F09B45EBF8D__CCTOR_OFFSET UNITYSDK_OFFSET(0x18786E10)

inline static constexpr unsigned int Class_1_01DA9F09B45EBF8D_TypeDefinitionIndex = 12358;

class Class_1_01DA9F09B45EBF8D : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01DA9F09B45EBF8D_TypeDefinitionIndex)->GetStaticField(0x1BF10);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01DA9F09B45EBF8D_TypeDefinitionIndex)->GetStaticField(0x1BF18);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PsActivityRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PsActivityRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01DA9F09B45EBF8D_TypeDefinitionIndex)->GetStaticField(0x1BF20);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_01DA9F09B45EBF8D_TypeDefinitionIndex)->GetStaticField(0x7340);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_01DA9F09B45EBF8D_TypeDefinitionIndex)->GetStaticField(0x7341);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_01DA9F09B45EBF8D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PsActivityRow*>* Method_1_8C579E5D43365281()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PsActivityRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_01DA9F09B45EBF8D_METHOD_1_8C579E5D43365281_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_01DA9F09B45EBF8D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PsActivityRow*> Method_1_8A33F0362AD3145A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PsActivityRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_01DA9F09B45EBF8D_METHOD_1_8A33F0362AD3145A_OFFSET))();
	}

	static ::RPG::GameCore::PsActivityRow* Method_1_90EED7EE7568D103(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PsActivityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_01DA9F09B45EBF8D_METHOD_1_90EED7EE7568D103_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_01DA9F09B45EBF8D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_01DA9F09B45EBF8D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_01DA9F09B45EBF8D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_01DA9F09B45EBF8D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_01DA9F09B45EBF8D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_01DA9F09B45EBF8D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E280BBB809F4B977(::RPG::GameCore::PsActivityRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PsActivityRow*))((::PBYTE)hIl2Cpp + CLASS_1_01DA9F09B45EBF8D_METHOD_1_E280BBB809F4B977_OFFSET))(a1);
	}
};
