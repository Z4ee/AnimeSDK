#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazePuzzleWolfBroRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CC8A3245B909362D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18478970)
#define CLASS_1_CC8A3245B909362D_METHOD_1_14A0DD9050A7388E_OFFSET UNITYSDK_OFFSET(0x184789C0)
#define CLASS_1_CC8A3245B909362D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18478790)
#define CLASS_1_CC8A3245B909362D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18478150)
#define CLASS_1_CC8A3245B909362D_METHOD_1_7AC0390B2CBE2739_OFFSET UNITYSDK_OFFSET(0x18478400)
#define CLASS_1_CC8A3245B909362D_METHOD_1_8B22A037A70B13E3_OFFSET UNITYSDK_OFFSET(0x18478580)
#define CLASS_1_CC8A3245B909362D_METHOD_1_8F919FD82057FFF1_OFFSET UNITYSDK_OFFSET(0x184780D0)
#define CLASS_1_CC8A3245B909362D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18478830)
#define CLASS_1_CC8A3245B909362D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x184783A0)
#define CLASS_1_CC8A3245B909362D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18478750)
#define CLASS_1_CC8A3245B909362D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x184788D0)
#define CLASS_1_CC8A3245B909362D__CCTOR_OFFSET UNITYSDK_OFFSET(0x18478CD0)

inline static constexpr unsigned int Class_1_CC8A3245B909362D_TypeDefinitionIndex = 13336;

class Class_1_CC8A3245B909362D : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC8A3245B909362D_TypeDefinitionIndex)->GetStaticField(0x2F800);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfBroRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfBroRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC8A3245B909362D_TypeDefinitionIndex)->GetStaticField(0x2F808);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC8A3245B909362D_TypeDefinitionIndex)->GetStaticField(0x2F810);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC8A3245B909362D_TypeDefinitionIndex)->GetStaticField(0xBE50);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC8A3245B909362D_TypeDefinitionIndex)->GetStaticField(0xBE51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC8A3245B909362D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfBroRow*>* Method_1_8F919FD82057FFF1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfBroRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC8A3245B909362D_METHOD_1_8F919FD82057FFF1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC8A3245B909362D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfBroRow*> Method_1_7AC0390B2CBE2739()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfBroRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC8A3245B909362D_METHOD_1_7AC0390B2CBE2739_OFFSET))();
	}

	static ::RPG::GameCore::MazePuzzleWolfBroRow* Method_1_8B22A037A70B13E3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MazePuzzleWolfBroRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CC8A3245B909362D_METHOD_1_8B22A037A70B13E3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC8A3245B909362D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC8A3245B909362D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC8A3245B909362D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CC8A3245B909362D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CC8A3245B909362D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CC8A3245B909362D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_14A0DD9050A7388E(::RPG::GameCore::MazePuzzleWolfBroRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MazePuzzleWolfBroRow*))((::PBYTE)hIl2Cpp + CLASS_1_CC8A3245B909362D_METHOD_1_14A0DD9050A7388E_OFFSET))(a1);
	}
};
