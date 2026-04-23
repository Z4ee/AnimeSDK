#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousDiceBranchRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B92E38097821A60B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1830C330)
#define CLASS_1_B92E38097821A60B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1830C150)
#define CLASS_1_B92E38097821A60B_METHOD_1_3604AE0FF1DF03F0_OFFSET UNITYSDK_OFFSET(0x1830C380)
#define CLASS_1_B92E38097821A60B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1830BB60)
#define CLASS_1_B92E38097821A60B_METHOD_1_9696FDD879F9D174_OFFSET UNITYSDK_OFFSET(0x1830BF90)
#define CLASS_1_B92E38097821A60B_METHOD_1_A4B357896D3D828F_OFFSET UNITYSDK_OFFSET(0x1830BE10)
#define CLASS_1_B92E38097821A60B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1830C1F0)
#define CLASS_1_B92E38097821A60B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1830BDB0)
#define CLASS_1_B92E38097821A60B_METHOD_1_E8349D3A9122A2AB_OFFSET UNITYSDK_OFFSET(0x1830BAE0)
#define CLASS_1_B92E38097821A60B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1830C110)
#define CLASS_1_B92E38097821A60B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1830C290)
#define CLASS_1_B92E38097821A60B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1830C6A0)

inline static constexpr unsigned int Class_1_B92E38097821A60B_TypeDefinitionIndex = 14105;

class Class_1_B92E38097821A60B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B92E38097821A60B_TypeDefinitionIndex)->GetStaticField(0x25DA0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B92E38097821A60B_TypeDefinitionIndex)->GetStaticField(0x25DA8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B92E38097821A60B_TypeDefinitionIndex)->GetStaticField(0x25DB0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B92E38097821A60B_TypeDefinitionIndex)->GetStaticField(0x9F10);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B92E38097821A60B_TypeDefinitionIndex)->GetStaticField(0x9F11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B92E38097821A60B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchRow*>* Method_1_E8349D3A9122A2AB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B92E38097821A60B_METHOD_1_E8349D3A9122A2AB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B92E38097821A60B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchRow*> Method_1_A4B357896D3D828F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B92E38097821A60B_METHOD_1_A4B357896D3D828F_OFFSET))();
	}

	static ::RPG::GameCore::RogueNousDiceBranchRow* Method_1_9696FDD879F9D174(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueNousDiceBranchRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B92E38097821A60B_METHOD_1_9696FDD879F9D174_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B92E38097821A60B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B92E38097821A60B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B92E38097821A60B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B92E38097821A60B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B92E38097821A60B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B92E38097821A60B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3604AE0FF1DF03F0(::RPG::GameCore::RogueNousDiceBranchRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueNousDiceBranchRow*))((::PBYTE)hIl2Cpp + CLASS_1_B92E38097821A60B_METHOD_1_3604AE0FF1DF03F0_OFFSET))(a1);
	}
};
