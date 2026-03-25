#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDialogueDynamicDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C8AD0690B445B292_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x17955EA0)
#define CLASS_1_C8AD0690B445B292_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17955CC0)
#define CLASS_1_C8AD0690B445B292_METHOD_1_3DB1C54E3091C6B7_OFFSET UNITYSDK_OFFSET(0x17955900)
#define CLASS_1_C8AD0690B445B292_METHOD_1_6B44DA66F1E40536_OFFSET UNITYSDK_OFFSET(0x17955EF0)
#define CLASS_1_C8AD0690B445B292_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17955650)
#define CLASS_1_C8AD0690B445B292_METHOD_1_7948668BCE8FB7B8_OFFSET UNITYSDK_OFFSET(0x17955AB0)
#define CLASS_1_C8AD0690B445B292_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17955D60)
#define CLASS_1_C8AD0690B445B292_METHOD_1_BC3383292545C512_OFFSET UNITYSDK_OFFSET(0x179555D0)
#define CLASS_1_C8AD0690B445B292_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x179558A0)
#define CLASS_1_C8AD0690B445B292_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17955C80)
#define CLASS_1_C8AD0690B445B292_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17955E00)
#define CLASS_1_C8AD0690B445B292__CCTOR_OFFSET UNITYSDK_OFFSET(0x17956250)

inline static constexpr unsigned int Class_1_C8AD0690B445B292_TypeDefinitionIndex = 13554;

class Class_1_C8AD0690B445B292 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8AD0690B445B292_TypeDefinitionIndex)->GetStaticField(0x241B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8AD0690B445B292_TypeDefinitionIndex)->GetStaticField(0x241B8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8AD0690B445B292_TypeDefinitionIndex)->GetStaticField(0x241C0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8AD0690B445B292_TypeDefinitionIndex)->GetStaticField(0x9950);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8AD0690B445B292_TypeDefinitionIndex)->GetStaticField(0x9951);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8AD0690B445B292__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*>* Method_1_BC3383292545C512()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8AD0690B445B292_METHOD_1_BC3383292545C512_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8AD0690B445B292_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*> Method_1_3DB1C54E3091C6B7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8AD0690B445B292_METHOD_1_3DB1C54E3091C6B7_OFFSET))();
	}

	static ::RPG::GameCore::RogueDialogueDynamicDisplayRow* Method_1_7948668BCE8FB7B8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueDialogueDynamicDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8AD0690B445B292_METHOD_1_7948668BCE8FB7B8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8AD0690B445B292_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8AD0690B445B292_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8AD0690B445B292_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C8AD0690B445B292_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C8AD0690B445B292_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C8AD0690B445B292_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_6B44DA66F1E40536(::RPG::GameCore::RogueDialogueDynamicDisplayRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDialogueDynamicDisplayRow*))((::PBYTE)hIl2Cpp + CLASS_1_C8AD0690B445B292_METHOD_1_6B44DA66F1E40536_OFFSET))(a1);
	}
};
