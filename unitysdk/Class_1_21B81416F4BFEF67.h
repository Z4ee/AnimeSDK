#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeDialogueRuleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_21B81416F4BFEF67_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18970B70)
#define CLASS_1_21B81416F4BFEF67_METHOD_1_1B02A6E5FDD35393_OFFSET UNITYSDK_OFFSET(0x189702A0)
#define CLASS_1_21B81416F4BFEF67_METHOD_1_2E6553E3D6087294_OFFSET UNITYSDK_OFFSET(0x189705D0)
#define CLASS_1_21B81416F4BFEF67_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18970990)
#define CLASS_1_21B81416F4BFEF67_METHOD_1_3E5352FB15BBE193_OFFSET UNITYSDK_OFFSET(0x18970BC0)
#define CLASS_1_21B81416F4BFEF67_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18970320)
#define CLASS_1_21B81416F4BFEF67_METHOD_1_A44E32A34A94F307_OFFSET UNITYSDK_OFFSET(0x18970780)
#define CLASS_1_21B81416F4BFEF67_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18970A30)
#define CLASS_1_21B81416F4BFEF67_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18970570)
#define CLASS_1_21B81416F4BFEF67_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18970950)
#define CLASS_1_21B81416F4BFEF67_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18970AD0)
#define CLASS_1_21B81416F4BFEF67__CCTOR_OFFSET UNITYSDK_OFFSET(0x18970F20)

inline static constexpr unsigned int Class_1_21B81416F4BFEF67_TypeDefinitionIndex = 12223;

class Class_1_21B81416F4BFEF67 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21B81416F4BFEF67_TypeDefinitionIndex)->GetStaticField(0x20FD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRuleRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRuleRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21B81416F4BFEF67_TypeDefinitionIndex)->GetStaticField(0x20FD8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21B81416F4BFEF67_TypeDefinitionIndex)->GetStaticField(0x20FE0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21B81416F4BFEF67_TypeDefinitionIndex)->GetStaticField(0x8100);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21B81416F4BFEF67_TypeDefinitionIndex)->GetStaticField(0x8101);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21B81416F4BFEF67__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRuleRow*>* Method_1_1B02A6E5FDD35393()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRuleRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21B81416F4BFEF67_METHOD_1_1B02A6E5FDD35393_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_21B81416F4BFEF67_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRuleRow*> Method_1_2E6553E3D6087294()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRuleRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_21B81416F4BFEF67_METHOD_1_2E6553E3D6087294_OFFSET))();
	}

	static ::RPG::GameCore::CakeDialogueRuleRow* Method_1_A44E32A34A94F307(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeDialogueRuleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21B81416F4BFEF67_METHOD_1_A44E32A34A94F307_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_21B81416F4BFEF67_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21B81416F4BFEF67_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21B81416F4BFEF67_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21B81416F4BFEF67_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_21B81416F4BFEF67_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_21B81416F4BFEF67_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3E5352FB15BBE193(::RPG::GameCore::CakeDialogueRuleRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CakeDialogueRuleRow*))((::PBYTE)hIl2Cpp + CLASS_1_21B81416F4BFEF67_METHOD_1_3E5352FB15BBE193_OFFSET))(a1);
	}
};
